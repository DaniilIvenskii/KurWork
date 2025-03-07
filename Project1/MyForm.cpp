#include "MyForm.h"
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <Windows.h>
#include <iostream>
using namespace Project1;
using namespace std;

//Функция для запуска Windows Form 
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}

//Функция №1
double func1(double x) {
    return 4 * x + 1;
}
//Функция №2
double func2(double x) {
    return 2 * pow(x, 2);
}
//Функция №3
double func3(double x) {
    return sin(x);
}
//Методо монтекарло для первой функции
double monteCarloFunc1(double A, double B, int numP) {
    double sum = 0.0;

    for (int i = 0; i < numP; ++i) {
        //Генератор рандомных точек в указанном промежутке
        double x = A + (B - A) * static_cast<double>(rand()) / RAND_MAX;
        sum += func1(x);
    }
    double integral = (A - B) * sum / numP;
    //Округление ответа до 5 знака
    double rounded = round(integral * 100000) / 100000;
    return rounded;
}
//Методо монтекарло для второй функции
double monteCarloFunc2(double A, double B, int numP) {
    double sum = 0.0;


    for (int i = 0; i < numP; ++i) {
        //Генератор рандомных точек в указанном промежутке
        double x = A + (B - A) * static_cast<double>(rand()) / RAND_MAX;
        sum += func2(x);
    }
    double integral = (A - B) * sum / numP;
    //Округление ответа до 5 знака
    double rounded = round(integral * 100000) / 100000;
    return rounded;
}
//Методо монтекарло для третьей функции
double monteCarloFunc3(double A, double B, int numP) {
    double sum = 0.0;


    for (int i = 0; i < numP; ++i) {
        //Генератор рандомных точек в указанном промежутке
        double x = A + (B - A) * static_cast<double>(rand()) / RAND_MAX;
        sum += func3(x);
    }
    double integral = (A - B) * sum / numP;
    //Округление ответа до 5 знака
    double rounded = round(integral * 100000) / 100000;
    return rounded;
}
//Первообразная для функции №1
double funcProv1(double x) {
    return 2 * pow(x, 2) + x;
}
//Первообразная для функции №2
double funcProv2(double x) {
    return 2 * (pow(x, 3) / 3);
}
//Первообразная для функции №3
double funcProv3(double x) {
    return -cos(x);
}
//Проверка для функции №1
double proverka1(double A, double B) {
    double sum = 0.0;
    double resultA = funcProv1(A);
    double resultB = funcProv1(B);
    sum = resultA - resultB;
    return sum;
}
//Проверка для функции №2
double proverka2(double A, double B) {
    double sum = 0.0;
    double resultA = funcProv2(A);
    double resultB = funcProv2(B);
    sum = resultA - resultB;
    return sum;
}
//Проверка для функции №3
double proverka3(double A, double B) {
    double sum = 0.0;
    double resultA = funcProv3(A);
    double resultB = funcProv3(B);
    sum = resultA - resultB;
    return sum;
}

//Обрапотчик нажатия на кнопку "Посчитать"
System::Void Project1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{

    double A, B;
    int numP;
    numP = 10000;



    //Проверка, что верхняя граница введена и введена корректно
    if (upperBound->Text == "") {
        MessageBox::Show("Вы не ввели верхнюю границу!");
    }
    else {
        for (int i = 0; i < upperBound->Text->Length; i++) {
            if ((upperBound->Text[i] >= '0') && (upperBound->Text[i] <= '9') || (upperBound->Text[0] == '-') || (upperBound->Text[i] == ',')) {
                //Приведение вводимых данных к типу double
                A = System::Convert::ToDouble(upperBound->Text);
            }
            else {
                MessageBox::Show("Неправильный ввод верхней границы");
            }
        }
    }
    //Проверка, что нижняя граница введена и введена корректно
    if (lowerBound->Text == "") {
        MessageBox::Show("Вы не ввели нижнюю границу!");
    }
    else {
        for (int i = 0; i < lowerBound->Text->Length; i++) {
            if ((lowerBound->Text[i] >= '0') && (lowerBound->Text[i] <= '9') || (lowerBound->Text[0] == '-') || (lowerBound->Text[i] == ',')) {
                //Приведение вводимых данных к типу double
                B = System::Convert::ToDouble(lowerBound->Text);
            }
            else {
                MessageBox::Show("Неправильный нижней границы");
            }
        }
    }
    //Проверка, что верхняя граница выше нижней
    if (A <= B) {
        MessageBox::Show("Неправильный ввод нижней границы");
    }
    //Проверка, что одна из функций выбрана
    if ((radioButtonF1->Checked == false) && (radioButtonF2->Checked == false) && (radioButtonF3->Checked == false)) {
        MessageBox::Show("Вы не выбрали функцию");
    }
    //Вызов расчета первой функции
    if (radioButtonF1->Checked == true) {
        double result = monteCarloFunc1(A, B, numP);
        textBox1->Text = System::Convert::ToString(result);
        double res = proverka1(A, B);
        textBox2->Text = System::Convert::ToString(res);
    }
    //Вызов расчета второй функции
    if (radioButtonF2->Checked == true) {
        double result = monteCarloFunc2(A, B, numP);
        textBox1->Text = System::Convert::ToString(result);
        double res = proverka2(A, B);
        textBox2->Text = System::Convert::ToString(res);
    }
    //Вызов расчета третьей функции
    if (radioButtonF3->Checked == true) {
        double result = monteCarloFunc3(A, B, numP);
        textBox1->Text = System::Convert::ToString(result);
        double res = proverka3(A, B);
        textBox2->Text = System::Convert::ToString(res);
    }
    return System::Void();
}
//Обработчик нажатия на кнопку "Построить график"
System::Void Project1::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    //Проверка, что одна из функций выбрана
    if ((radioButtonF1->Checked == false) && (radioButtonF2->Checked == false) && (radioButtonF3->Checked == false)) {
        MessageBox::Show("Вы не выбрали функцию");
        return;
    }

    //Проверка, что верхняя граница введена и введена корректно
    if (upperBound->Text == "") {
        MessageBox::Show("Вы не ввели верхнюю границу!");
    }
    else {
        for (int i = 0; i < upperBound->Text->Length; i++) {
            if ((upperBound->Text[i] >= '0') && (upperBound->Text[i] <= '9') || (upperBound->Text[0] == '-') || (upperBound->Text[i] == ',')) {
            }
            else {
                MessageBox::Show("Неправильный ввод верхней границы");
            }
        }
    }
    //Проверка, что нижняя граница введена и введена корректно
    if (lowerBound->Text == "") {
        MessageBox::Show("Вы не ввели нижнюю границу!");
    }
    else {
        for (int i = 0; i < lowerBound->Text->Length; i++) {
            if ((lowerBound->Text[i] >= '0') && (lowerBound->Text[i] <= '9') || (lowerBound->Text[0] == '-') || (lowerBound->Text[i] == ',')) {
            }
            else {
                MessageBox::Show("Неправильный нижней границы");
            }
        }
    }



    //Приведения вводимых данных к типу double
    a = System::Convert::ToDouble(upperBound->Text);
    b = System::Convert::ToDouble(lowerBound->Text);
    h = 0.01;
    //Построения графика первой функции по входным данным
    if (radioButtonF1->Checked) {
        x = b;
        this->chart1->Series[0]->Points->Clear();
        while (x <= a) {
            y = 4 * x + 1;
            this->chart1->Series[0]->Points->AddXY(x, y);
            //Изменения цвета на полупрозрачный
            this->chart1->Series[0]->Color = System::Drawing::Color::FromArgb(128, System::Drawing::Color::Red);
            x += h;
        }
    }
    //Построения графика второй функции по входным данным
    if (radioButtonF2->Checked) {
        x = b;
        this->chart1->Series[0]->Points->Clear();
        while (x <= a) {
            y = 2 * pow(x, 2);
            this->chart1->Series[0]->Points->AddXY(x, y);
            //Изменения цвета на полупрозрачный
            this->chart1->Series[0]->Color = System::Drawing::Color::FromArgb(128, System::Drawing::Color::Red);
            x += h;
        }
    }
    //Построение графика третьей функции по входным данным
    if (radioButtonF3->Checked) {
        x = b;
        this->chart1->Series[0]->Points->Clear();
        while (x <= a) {
            y = Math::Sin(x);
            this->chart1->Series[0]->Points->AddXY(x, y);
            //Изменения цвета на полупрозрачный
            this->chart1->Series[0]->Color = System::Drawing::Color::FromArgb(128, System::Drawing::Color::Red);
            x += h;
        }
    }

}
//Обработчик нажатия на кнопку "Записать данные в файл"
System::Void Project1::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    //Приведение входных даннык к типу double 
    double A = System::Convert::ToDouble(upperBound->Text);
    double B = System::Convert::ToDouble(lowerBound->Text);

    //Проверка, что хотябы одна из функций выбрана
    if ((radioButtonF1->Checked == false) && (radioButtonF2->Checked == false) && (radioButtonF3->Checked == false)) {
        MessageBox::Show("Вы не выбрали функцию");
        return;
    }

    //Проверка, что верхняя граница введена и введена корректно
    if (upperBound->Text == "") {
        MessageBox::Show("Вы не ввели верхнюю границу!");
    }
    else {
        for (int i = 0; i < upperBound->Text->Length; i++) {
            if ((upperBound->Text[i] >= '0') && (upperBound->Text[i] <= '9') || (upperBound->Text[0] == '-') || (upperBound->Text[i] == ',')) {
            }
            else {
                MessageBox::Show("Неправильный ввод верхней границы");
            }
        }
    }

    //Проверка, что нижняя граница введена и введена корректно
    if (lowerBound->Text == "") {
        MessageBox::Show("Вы не ввели нижнюю границу!");
    }
    else {
        for (int i = 0; i < lowerBound->Text->Length; i++) {
            if ((lowerBound->Text[i] >= '0') && (lowerBound->Text[i] <= '9') || (lowerBound->Text[0] == '-') || (lowerBound->Text[i] == ',')) {
            }
            else {
                MessageBox::Show("Неправильный нижней границы");
            }
        }
    }
    //Проверка, что была нажата кнопка "Посчитать"
    if (textBox1->Text == "") {
        MessageBox::Show("Вы не получиил результат!\nНажмите кнопку «Посчитать»");
    }
    else {
        //Запись исходных данных и результата первой функции
        if (radioButtonF1->Checked) {
            //Приведения результата к типу double
            double result = System::Convert::ToDouble(textBox1->Text);
            double res = System::Convert::ToDouble(textBox2->Text);
            //Окрытие файла с последующей запьсью данных
            ofstream outFile("File.txt");
            if (outFile.is_open()) {
                outFile << "Исходные данные\n";
                outFile << "Верхняя граница интеграла: " << A << "\n";
                outFile << "Нижняя граница интеграла: " << B << "\n";
                outFile << "Функция: y = 4 * x + 1 \n";
                outFile << "Результат вычислений: " << result << "\n";
                outFile << "Точный результат " << res << "\n";
                outFile.close();
                MessageBox::Show("Данные успешно записаны в файл");
            }
            else {
                MessageBox::Show("Не удалось записать данные в файл");
            }
        }


        //Запись исходных данных и результата второй функции
        if (radioButtonF2->Checked) {
            //Приведения результата к типу double
            double result = System::Convert::ToDouble(textBox1->Text);
            double res = System::Convert::ToDouble(textBox2->Text);
            //Окрытие файла с последующей запьсью данных
            ofstream outFile("File.txt");
            if (outFile.is_open()) {
                outFile << "Исходные данные\n";
                outFile << "Верхняя граница интеграла: " << A << "\n";
                outFile << "Нижняя граница интеграла: " << B << "\n";
                outFile << "Функция: y = 2 * x^2 \n";
                outFile << "Результат вычислений: " << result << "\n";
                outFile << "Точный результат " << res << "\n";
                outFile.close();
                MessageBox::Show("Данные успешно записаны в файл");
            }
            else {
                MessageBox::Show("Не удалось записать данные в файл");
            }
        }

        //Запись исходных данных и результата трертьей функции
        if (radioButtonF3->Checked) {
            //Приведения результата к типу double
            double result = System::Convert::ToDouble(textBox1->Text);
            double res = System::Convert::ToDouble(textBox2->Text);
            //Окрытие файла с последующей запьсью данных
            ofstream outFile("File.txt");
            if (outFile.is_open()) {
                outFile << "Исходные данные\n";
                outFile << "Верхняя граница интеграла: " << A << "\n";
                outFile << "Нижняя граница интеграла: " << B << "\n";
                outFile << "Функция: y = sin(x) \n";
                outFile << "Результат вычислений: " << result << "\n";
                outFile << "Точный результат " << res << "\n";
                outFile.close();
                MessageBox::Show("Данные успешно записаны в файл");
            }
            else {
                MessageBox::Show("Не удалось записать данные в файл");
            }
        }
    }

    return System::Void();
}
