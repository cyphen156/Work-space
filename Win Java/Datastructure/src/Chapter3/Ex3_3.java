package Chapter3;

public class Ex3_3 {//����Ʈ XY

	public static void main(String[] args) {
	}

}

class PointXY{
	int x, y;
	PointXY(int x, int y){//������ �޼ҵ�
		this.x = x;
		this.y = y; 
	}
	void setX(int x) {
		this.x = x;
	}
	void setY(int y) {
		this.y = y;
	}
	void moveXY(int x, int y) {
		this.x += x;
		this.y += y;
	}
}