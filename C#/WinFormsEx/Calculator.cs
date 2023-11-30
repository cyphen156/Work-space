namespace WinFormsEx
{
    public partial class Calculator : Form
    {
        // ������ 
        enum Operators
        {
            None,
            Add,
            Subtract,
            Multiply,
            Divide,
            Reset
        }

        Operators currentOperator = Operators.None;
        Boolean operatorChangeFlag = false;
        double firstOperand = 0;
        double secondOperand = 0;

        public Calculator()
        {
            InitializeComponent();
        }
        private void AddNumberToDisplay(string number)
        {
            if (operatorChangeFlag)
            {
                label1.Text = "";
                operatorChangeFlag = false;
            }

            label1.Text += number;
        }
        private void tableLayoutPanel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            AddNumberToDisplay("1");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            AddNumberToDisplay("2");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            AddNumberToDisplay("3");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            AddNumberToDisplay("4");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            AddNumberToDisplay("5");
        }

        private void button6_Click(object sender, EventArgs e)
        {
            AddNumberToDisplay("6");
        }

        private void button7_Click(object sender, EventArgs e)
        {
            AddNumberToDisplay("7");
        }

        private void button8_Click(object sender, EventArgs e)
        {
            AddNumberToDisplay("8");
        }

        private void button9_Click(object sender, EventArgs e)
        {
            AddNumberToDisplay("9");
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button17_Click(object sender, EventArgs e)
        {
            try
            {
                secondOperand = double.Parse(label1.Text);
                double result = 0;

                // �����ڿ� ���� ���
                if (currentOperator == Operators.Add)
                {
                    result = firstOperand + secondOperand;
                }
                else if (currentOperator == Operators.Subtract)
                {
                    result = firstOperand - secondOperand;
                }
                else if (currentOperator == Operators.Multiply)
                {
                    result = firstOperand * secondOperand;
                }
                else if (currentOperator == Operators.Divide)
                {
                    if (secondOperand == 0)
                    {
                        label1.Text = "0���� ���� �� �����ϴ�.";
                        return;
                    }
                    result = firstOperand / secondOperand;
                }

                label1.Text = result.ToString();
                firstOperand = result; // ���� ������ ���� ��� ����
            }
            catch
            {
                label1.Text = "����";
            }
        }

        private void button15_Click(object sender, EventArgs e)
        {
            AddNumberToDisplay("0");
        }

        private void button14_Click(object sender, EventArgs e)
        {
            if (operatorChangeFlag)
            {
                label1.Text = "";
                operatorChangeFlag = false;
            }

            // �̹� �Ҽ����� ������ �߰����� ����
            if (!label1.Text.Contains("."))
            {
                label1.Text += ".";
            }
        }

        private void button13_Click(object sender, EventArgs e)
        {
            firstOperand = 0;
            secondOperand = 0;
            currentOperator = Operators.None;
            label1.Text = "";
        }

        private void button11_Click(object sender, EventArgs e)
        {
            firstOperand = double.Parse(label1.Text);
            currentOperator = Operators.Divide;
            operatorChangeFlag = true;
        }

        private void button16_Click(object sender, EventArgs e)
        {
            firstOperand = double.Parse(label1.Text);
            currentOperator = Operators.Add;
            operatorChangeFlag = true;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            firstOperand = double.Parse(label1.Text);
            currentOperator = Operators.Subtract;
            operatorChangeFlag = true;
        }

        private void button12_Click(object sender, EventArgs e)
        {
            firstOperand = double.Parse(label1.Text);
            currentOperator = Operators.Multiply;
            operatorChangeFlag = true;
        }
    }
}