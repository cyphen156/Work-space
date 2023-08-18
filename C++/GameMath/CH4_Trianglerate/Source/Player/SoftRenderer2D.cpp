
#include "Precompiled.h"
#include "SoftRenderer.h"
#include <random>
using namespace CK::DD;

// ���ڸ� �׸��� �Լ�
void SoftRenderer::DrawGizmo2D()
{
	auto& r = GetRenderer();
	const auto& g = Get2DGameEngine();

	// �׸��� ����
	LinearColor gridColor(LinearColor(0.8f, 0.8f, 0.8f, 0.3f));

	// ���� ���� ���
	Vector2 viewPos = g.GetMainCamera().GetTransform().GetPosition();
	Vector2 extent = Vector2(_ScreenSize.X * 0.5f, _ScreenSize.Y * 0.5f);

	// ���� �ϴܿ������� ���� �׸���
	int xGridCount = _ScreenSize.X / _Grid2DUnit;
	int yGridCount = _ScreenSize.Y / _Grid2DUnit;

	// �׸��尡 ���۵Ǵ� ���ϴ� ��ǥ �� ���
	Vector2 minPos = viewPos - extent;
	Vector2 minGridPos = Vector2(ceilf(minPos.X / (float)_Grid2DUnit), ceilf(minPos.Y / (float)_Grid2DUnit)) * (float)_Grid2DUnit;
	ScreenPoint gridBottomLeft = ScreenPoint::ToScreenCoordinate(_ScreenSize, minGridPos - viewPos);

	for (int ix = 0; ix < xGridCount; ++ix)
	{
		r.DrawFullVerticalLine(gridBottomLeft.X + ix * _Grid2DUnit, gridColor);
	}

	for (int iy = 0; iy < yGridCount; ++iy)
	{
		r.DrawFullHorizontalLine(gridBottomLeft.Y - iy * _Grid2DUnit, gridColor);
	}

	ScreenPoint worldOrigin = ScreenPoint::ToScreenCoordinate(_ScreenSize, -viewPos);
	r.DrawFullHorizontalLine(worldOrigin.Y, LinearColor::Red);
	r.DrawFullVerticalLine(worldOrigin.X, LinearColor::Green);
}

// ���� ������Ʈ ���


// ���� �� �ε��� ����ϴ� �Լ�
void SoftRenderer::LoadScene2D()
{
	// ���� �� �ε����� ����ϴ� ��� �� �ֿ� ���۷���
	auto& g = Get2DGameEngine();

}

// ���� ������ ������ ������ �����ϴ� ����
Vector2 currentPosotion;
float currentScale = 10.0f;
float currentDegree = 0.f;

// ���� ������ ����ϴ� �Լ�
void SoftRenderer::Update2D(float InDeltaSeconds)
{
	// ���� �������� ����ϴ� ��� �� �ֿ� ���۷���
	auto& g = Get2DGameEngine();
	const InputManager& input = g.GetInputManager();

	// ���� ������ ���� ����
	static float moveSpeed = 100.f;
	static float scaleMin = 5.f;
	static float scaleMax = 20.f;
	static float scaleSpeed = 20.f;
	static float duration = 1.5f;
	static float elapsedTime2 = 0.f;
	static float rotateSpeed = 180.f;

	Vector2 inputVector = Vector2(input.GetAxis(InputAxis::XAxis), input.GetAxis(InputAxis::YAxis)).GetNormalize();
	Vector2 deltaPosition = inputVector * moveSpeed * InDeltaSeconds;
	float deltaScale = input.GetAxis(InputAxis::ZAxis) * scaleSpeed * InDeltaSeconds;
	float deltaDegree = input.GetAxis(InputAxis::WAxis) * rotateSpeed * InDeltaSeconds;

	elapsedTime2 += InDeltaSeconds;
	elapsedTime2 = Math::FMod(elapsedTime2, duration);
	float currentRad = (elapsedTime2 / duration) * Math::TwoPI;
	float alpha = (sinf(currentRad) + 1) * 0.5f;

	currentPosotion += deltaPosition;
	//currentScale = Math::Clamp(currentScale + deltaScale, scaleMin, scaleMax);
	currentScale = Math::Lerp(scaleMin, scaleMax, alpha);
	currentDegree += deltaDegree;
}

// ������ ������ ����ϴ� �Լ�
void SoftRenderer::Render2D()
{
	// ������ �������� ����ϴ� ��� �� �ֿ� ���۷���
	auto& r = GetRenderer();
	const auto& g = Get2DGameEngine();

	// ��濡 ���� �׸���
	DrawGizmo2D();

	// ������ ������ ���� ����
	float rad = 0.f;
	static float increment = 0.001f;
	static std::vector<Vector2> hearts;
	HSVColor hsv(0.f, 1.f, 0.85f);

	// �ð��� ��ǳ ����
	static float halfSize = 100.f;
	static std::vector<Vector2> squares;

	if (squares.empty())
	{
		for (float x = -halfSize; x <= halfSize; x += 0.25f)
		{
			for (float y = -halfSize; y <= halfSize; y += 0.25f)
			{
				squares.push_back(Vector2(x, y));
			}
		}
	}

	// ��Ʈ�� �����ϴ� �� ����
	if (hearts.empty())
	{
		for (rad = 0.f; rad < Math::TwoPI; rad += increment)
		{
			// ��Ʈ ������
			// x�� y�� ���ϱ�.
			// hearts.push_back(Vector2(x, y));
			float sin = sinf(rad);
			float cos = cosf(rad);
			float cos2 = cosf(2 * rad);
			float cos3 = cosf(3 * rad);
			float cos4 = cosf(4 * rad);
			float x = 16.f * sin * sin * sin;
			float y = 13 * cos - 5 * cos2 - 2 * cos3 - cos4;
			hearts.push_back(Vector2(x, y));
		}
	}
	// 0.5�� �ֱ�� �����̱�
	static float elapsedTime = 0.0f;
	static bool isVisible = true;

	elapsedTime += 1.0f / 60.0f; // ������Ʈ �󵵿� ���� ���� �ʿ�

	if (elapsedTime >= 0.1f)
	{
		isVisible = !isVisible;
		elapsedTime = 0.0f;
	}
	//������ �ش��ϴ� ���ΰ� �ڻ��ΰ� ��� 
	float sin = 0.f, cos = 0.f;
	Math::GetSinCos(sin, cos, currentDegree);

	rad = 0.f;
	for (auto const& v : hearts)
	{
		rad += increment;
		// 1. ���� ũ�⸦ ����
		Vector2 scaledV = v * currentScale;

		// 2. ũ�Ⱑ ���� ���� ȸ��
		Vector2 rotateV = Vector2(scaledV.X * cos - scaledV.Y * sin, scaledV.X * sin + scaledV.Y * cos);
		
		// 3. ȸ����Ų ���� �̵�
		Vector2 translatedV = rotateV + currentPosotion;

		hsv.H = rad / Math::TwoPI;

		// ������ �׸��� 
		//r.DrawPoint(v * currentScale + currentPosotion, hsv.ToLinearColor());
		r.DrawPoint(translatedV, hsv.ToLinearColor());

		if (isVisible)  // ��ĥ�� �κи� isVisible ���¿� ���� �׸���
		{
			Vector2 origin = Vector2(0, 0);
			Vector2 direction = (v - origin).GetNormalize();
			for (float t = 0; t <= 1; t += 0.01f)
			{
				Vector2 pointOnLine = origin + direction * t * v.Size();

				// 1. ���� ũ�⸦ ����
				Vector2 scaledPoint = pointOnLine * currentScale;

				// 2. ũ�Ⱑ ���� ���� ȸ��
				Vector2 rotatedPoint = Vector2(scaledPoint.X * cos - scaledPoint.Y * sin, scaledPoint.X * sin + scaledPoint.Y * cos);

				// 3. ȸ����Ų ���� �̵�
				Vector2 translatedPoint = rotatedPoint + currentPosotion;

				r.DrawPoint(translatedPoint, hsv.ToLinearColor());
			}
		}


		/*
		r.PushStatisticText(std::string("Position : ") + currentPosotion.ToString());
		r.PushStatisticText(std::string("scale : ") + std::to_string(currentScale));
		r.PushStatisticText(std::string("Degree : ") + std::to_string(currentDegree));
		*/
	}

	// �ð��� ��ǳ �����ϱ�
	// ���� ȭ���� ũ��κ��� ���̸� ���� ���ؾ� ���ϱ�
	static float maxLength = Vector2(_ScreenSize.X, _ScreenSize.Y).Size() * 0.5f;

	// ���� �����ϴ� ���� �׸���.
	for (auto const& v : squares)
	{
		// r�� ��ǥ�� ����
		Vector2 polarV = v.ToPolarCoordinate();

		// ����ǥ���� �� �����κ��� ������ �����Ѵ�.
		if (polarV.Y < 0.f)
		{
			polarV.Y += Math::TwoPI;
		}
		hsv.H = polarV.Y / Math::TwoPI;

		// ����ǥ���� ũ�� �����κ��� ȸ���� ����
		float ratio = polarV.X / maxLength;
		float weight = Math::Lerp(1.f, 5.f, ratio);

		polarV.Y += Math::Deg2Rad(currentDegree) * weight;

		// ���� ���� ��ī��Ʈ ��ǥ��� ��ȯ�ϱ�
		Vector2 cartesianV = polarV.ToCartesianCoordinate();
		r.DrawPoint(cartesianV, hsv.ToLinearColor());
	}
}

// �޽ø� �׸��� �Լ�
void SoftRenderer::DrawMesh2D(const class DD::Mesh& InMesh, const Matrix3x3& InMatrix, const LinearColor& InColor)
{
}

// �ﰢ���� �׸��� �Լ�
void SoftRenderer::DrawTriangle2D(std::vector<DD::Vertex2D>& InVertices, const LinearColor& InColor, FillMode InFillMode)
{
}
