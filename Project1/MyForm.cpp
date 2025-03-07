#include "MyForm.h"
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <Windows.h>
#include <iostream>
using namespace Project1;
using namespace std;

//������� ��� ������� Windows Form 
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}

//������� �1
double func1(double x) {
    return 4 * x + 1;
}
//������� �2
double func2(double x) {
    return 2 * pow(x, 2);
}
//������� �3
double func3(double x) {
    return sin(x);
}
//������ ���������� ��� ������ �������
double monteCarloFunc1(double A, double B, int numP) {
    double sum = 0.0;

    for (int i = 0; i < numP; ++i) {
        //��������� ��������� ����� � ��������� ����������
        double x = A + (B - A) * static_cast<double>(rand()) / RAND_MAX;
        sum += func1(x);
    }
    double integral = (A - B) * sum / numP;
    //���������� ������ �� 5 �����
    double rounded = round(integral * 100000) / 100000;
    return rounded;
}
//������ ���������� ��� ������ �������
double monteCarloFunc2(double A, double B, int numP) {
    double sum = 0.0;


    for (int i = 0; i < numP; ++i) {
        //��������� ��������� ����� � ��������� ����������
        double x = A + (B - A) * static_cast<double>(rand()) / RAND_MAX;
        sum += func2(x);
    }
    double integral = (A - B) * sum / numP;
    //���������� ������ �� 5 �����
    double rounded = round(integral * 100000) / 100000;
    return rounded;
}
//������ ���������� ��� ������� �������
double monteCarloFunc3(double A, double B, int numP) {
    double sum = 0.0;


    for (int i = 0; i < numP; ++i) {
        //��������� ��������� ����� � ��������� ����������
        double x = A + (B - A) * static_cast<double>(rand()) / RAND_MAX;
        sum += func3(x);
    }
    double integral = (A - B) * sum / numP;
    //���������� ������ �� 5 �����
    double rounded = round(integral * 100000) / 100000;
    return rounded;
}
//������������� ��� ������� �1
double funcProv1(double x) {
    return 2 * pow(x, 2) + x;
}
//������������� ��� ������� �2
double funcProv2(double x) {
    return 2 * (pow(x, 3) / 3);
}
//������������� ��� ������� �3
double funcProv3(double x) {
    return -cos(x);
}
//�������� ��� ������� �1
double proverka1(double A, double B) {
    double sum = 0.0;
    double resultA = funcProv1(A);
    double resultB = funcProv1(B);
    sum = resultA - resultB;
    return sum;
}
//�������� ��� ������� �2
double proverka2(double A, double B) {
    double sum = 0.0;
    double resultA = funcProv2(A);
    double resultB = funcProv2(B);
    sum = resultA - resultB;
    return sum;
}
//�������� ��� ������� �3
double proverka3(double A, double B) {
    double sum = 0.0;
    double resultA = funcProv3(A);
    double resultB = funcProv3(B);
    sum = resultA - resultB;
    return sum;
}

//���������� ������� �� ������ "���������"
System::Void Project1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{

    double A, B;
    int numP;
    numP = 10000;



    //��������, ��� ������� ������� ������� � ������� ���������
    if (upperBound->Text == "") {
        MessageBox::Show("�� �� ����� ������� �������!");
    }
    else {
        for (int i = 0; i < upperBound->Text->Length; i++) {
            if ((upperBound->Text[i] >= '0') && (upperBound->Text[i] <= '9') || (upperBound->Text[0] == '-') || (upperBound->Text[i] == ',')) {
                //���������� �������� ������ � ���� double
                A = System::Convert::ToDouble(upperBound->Text);
            }
            else {
                MessageBox::Show("������������ ���� ������� �������");
            }
        }
    }
    //��������, ��� ������ ������� ������� � ������� ���������
    if (lowerBound->Text == "") {
        MessageBox::Show("�� �� ����� ������ �������!");
    }
    else {
        for (int i = 0; i < lowerBound->Text->Length; i++) {
            if ((lowerBound->Text[i] >= '0') && (lowerBound->Text[i] <= '9') || (lowerBound->Text[0] == '-') || (lowerBound->Text[i] == ',')) {
                //���������� �������� ������ � ���� double
                B = System::Convert::ToDouble(lowerBound->Text);
            }
            else {
                MessageBox::Show("������������ ������ �������");
            }
        }
    }
    //��������, ��� ������� ������� ���� ������
    if (A <= B) {
        MessageBox::Show("������������ ���� ������ �������");
    }
    //��������, ��� ���� �� ������� �������
    if ((radioButtonF1->Checked == false) && (radioButtonF2->Checked == false) && (radioButtonF3->Checked == false)) {
        MessageBox::Show("�� �� ������� �������");
    }
    //����� ������� ������ �������
    if (radioButtonF1->Checked == true) {
        double result = monteCarloFunc1(A, B, numP);
        textBox1->Text = System::Convert::ToString(result);
        double res = proverka1(A, B);
        textBox2->Text = System::Convert::ToString(res);
    }
    //����� ������� ������ �������
    if (radioButtonF2->Checked == true) {
        double result = monteCarloFunc2(A, B, numP);
        textBox1->Text = System::Convert::ToString(result);
        double res = proverka2(A, B);
        textBox2->Text = System::Convert::ToString(res);
    }
    //����� ������� ������� �������
    if (radioButtonF3->Checked == true) {
        double result = monteCarloFunc3(A, B, numP);
        textBox1->Text = System::Convert::ToString(result);
        double res = proverka3(A, B);
        textBox2->Text = System::Convert::ToString(res);
    }
    return System::Void();
}
//���������� ������� �� ������ "��������� ������"
System::Void Project1::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    //��������, ��� ���� �� ������� �������
    if ((radioButtonF1->Checked == false) && (radioButtonF2->Checked == false) && (radioButtonF3->Checked == false)) {
        MessageBox::Show("�� �� ������� �������");
        return;
    }

    //��������, ��� ������� ������� ������� � ������� ���������
    if (upperBound->Text == "") {
        MessageBox::Show("�� �� ����� ������� �������!");
    }
    else {
        for (int i = 0; i < upperBound->Text->Length; i++) {
            if ((upperBound->Text[i] >= '0') && (upperBound->Text[i] <= '9') || (upperBound->Text[0] == '-') || (upperBound->Text[i] == ',')) {
            }
            else {
                MessageBox::Show("������������ ���� ������� �������");
            }
        }
    }
    //��������, ��� ������ ������� ������� � ������� ���������
    if (lowerBound->Text == "") {
        MessageBox::Show("�� �� ����� ������ �������!");
    }
    else {
        for (int i = 0; i < lowerBound->Text->Length; i++) {
            if ((lowerBound->Text[i] >= '0') && (lowerBound->Text[i] <= '9') || (lowerBound->Text[0] == '-') || (lowerBound->Text[i] == ',')) {
            }
            else {
                MessageBox::Show("������������ ������ �������");
            }
        }
    }



    //���������� �������� ������ � ���� double
    a = System::Convert::ToDouble(upperBound->Text);
    b = System::Convert::ToDouble(lowerBound->Text);
    h = 0.01;
    //���������� ������� ������ ������� �� ������� ������
    if (radioButtonF1->Checked) {
        x = b;
        this->chart1->Series[0]->Points->Clear();
        while (x <= a) {
            y = 4 * x + 1;
            this->chart1->Series[0]->Points->AddXY(x, y);
            //��������� ����� �� ��������������
            this->chart1->Series[0]->Color = System::Drawing::Color::FromArgb(128, System::Drawing::Color::Red);
            x += h;
        }
    }
    //���������� ������� ������ ������� �� ������� ������
    if (radioButtonF2->Checked) {
        x = b;
        this->chart1->Series[0]->Points->Clear();
        while (x <= a) {
            y = 2 * pow(x, 2);
            this->chart1->Series[0]->Points->AddXY(x, y);
            //��������� ����� �� ��������������
            this->chart1->Series[0]->Color = System::Drawing::Color::FromArgb(128, System::Drawing::Color::Red);
            x += h;
        }
    }
    //���������� ������� ������� ������� �� ������� ������
    if (radioButtonF3->Checked) {
        x = b;
        this->chart1->Series[0]->Points->Clear();
        while (x <= a) {
            y = Math::Sin(x);
            this->chart1->Series[0]->Points->AddXY(x, y);
            //��������� ����� �� ��������������
            this->chart1->Series[0]->Color = System::Drawing::Color::FromArgb(128, System::Drawing::Color::Red);
            x += h;
        }
    }

}
//���������� ������� �� ������ "�������� ������ � ����"
System::Void Project1::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    //���������� ������� ������ � ���� double 
    double A = System::Convert::ToDouble(upperBound->Text);
    double B = System::Convert::ToDouble(lowerBound->Text);

    //��������, ��� ������ ���� �� ������� �������
    if ((radioButtonF1->Checked == false) && (radioButtonF2->Checked == false) && (radioButtonF3->Checked == false)) {
        MessageBox::Show("�� �� ������� �������");
        return;
    }

    //��������, ��� ������� ������� ������� � ������� ���������
    if (upperBound->Text == "") {
        MessageBox::Show("�� �� ����� ������� �������!");
    }
    else {
        for (int i = 0; i < upperBound->Text->Length; i++) {
            if ((upperBound->Text[i] >= '0') && (upperBound->Text[i] <= '9') || (upperBound->Text[0] == '-') || (upperBound->Text[i] == ',')) {
            }
            else {
                MessageBox::Show("������������ ���� ������� �������");
            }
        }
    }

    //��������, ��� ������ ������� ������� � ������� ���������
    if (lowerBound->Text == "") {
        MessageBox::Show("�� �� ����� ������ �������!");
    }
    else {
        for (int i = 0; i < lowerBound->Text->Length; i++) {
            if ((lowerBound->Text[i] >= '0') && (lowerBound->Text[i] <= '9') || (lowerBound->Text[0] == '-') || (lowerBound->Text[i] == ',')) {
            }
            else {
                MessageBox::Show("������������ ������ �������");
            }
        }
    }
    //��������, ��� ���� ������ ������ "���������"
    if (textBox1->Text == "") {
        MessageBox::Show("�� �� �������� ���������!\n������� ������ �����������");
    }
    else {
        //������ �������� ������ � ���������� ������ �������
        if (radioButtonF1->Checked) {
            //���������� ���������� � ���� double
            double result = System::Convert::ToDouble(textBox1->Text);
            double res = System::Convert::ToDouble(textBox2->Text);
            //������� ����� � ����������� ������� ������
            ofstream outFile("File.txt");
            if (outFile.is_open()) {
                outFile << "�������� ������\n";
                outFile << "������� ������� ���������: " << A << "\n";
                outFile << "������ ������� ���������: " << B << "\n";
                outFile << "�������: y = 4 * x + 1 \n";
                outFile << "��������� ����������: " << result << "\n";
                outFile << "������ ��������� " << res << "\n";
                outFile.close();
                MessageBox::Show("������ ������� �������� � ����");
            }
            else {
                MessageBox::Show("�� ������� �������� ������ � ����");
            }
        }


        //������ �������� ������ � ���������� ������ �������
        if (radioButtonF2->Checked) {
            //���������� ���������� � ���� double
            double result = System::Convert::ToDouble(textBox1->Text);
            double res = System::Convert::ToDouble(textBox2->Text);
            //������� ����� � ����������� ������� ������
            ofstream outFile("File.txt");
            if (outFile.is_open()) {
                outFile << "�������� ������\n";
                outFile << "������� ������� ���������: " << A << "\n";
                outFile << "������ ������� ���������: " << B << "\n";
                outFile << "�������: y = 2 * x^2 \n";
                outFile << "��������� ����������: " << result << "\n";
                outFile << "������ ��������� " << res << "\n";
                outFile.close();
                MessageBox::Show("������ ������� �������� � ����");
            }
            else {
                MessageBox::Show("�� ������� �������� ������ � ����");
            }
        }

        //������ �������� ������ � ���������� �������� �������
        if (radioButtonF3->Checked) {
            //���������� ���������� � ���� double
            double result = System::Convert::ToDouble(textBox1->Text);
            double res = System::Convert::ToDouble(textBox2->Text);
            //������� ����� � ����������� ������� ������
            ofstream outFile("File.txt");
            if (outFile.is_open()) {
                outFile << "�������� ������\n";
                outFile << "������� ������� ���������: " << A << "\n";
                outFile << "������ ������� ���������: " << B << "\n";
                outFile << "�������: y = sin(x) \n";
                outFile << "��������� ����������: " << result << "\n";
                outFile << "������ ��������� " << res << "\n";
                outFile.close();
                MessageBox::Show("������ ������� �������� � ����");
            }
            else {
                MessageBox::Show("�� ������� �������� ������ � ����");
            }
        }
    }

    return System::Void();
}
