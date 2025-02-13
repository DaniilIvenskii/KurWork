#pragma once
namespace Project1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Сводка для MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: добавьте код конструктора
            //
        }

    protected:
        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ upperBound;

    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ lowerBound;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::RadioButton^ radioButtonF3;
    private: System::Windows::Forms::RadioButton^ radioButtonF2;
    private: System::Windows::Forms::RadioButton^ radioButtonF1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBox2;




    protected:

    private:
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->lowerBound = (gcnew System::Windows::Forms::TextBox());
            this->upperBound = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->radioButtonF3 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonF2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonF1 = (gcnew System::Windows::Forms::RadioButton());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(45, 21);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(1042, 53);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Вычисление определенного интеграла методом Монте-Карло";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // groupBox1
            // 
            this->groupBox1->BackColor = System::Drawing::Color::DimGray;
            this->groupBox1->Controls->Add(this->lowerBound);
            this->groupBox1->Controls->Add(this->upperBound);
            this->groupBox1->Controls->Add(this->label4);
            this->groupBox1->Controls->Add(this->label3);
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Location = System::Drawing::Point(13, 74);
            this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->groupBox1->Size = System::Drawing::Size(293, 123);
            this->groupBox1->TabIndex = 1;
            this->groupBox1->TabStop = false;
            // 
            // lowerBound
            // 
            this->lowerBound->BackColor = System::Drawing::Color::Silver;
            this->lowerBound->Location = System::Drawing::Point(216, 82);
            this->lowerBound->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->lowerBound->Name = L"lowerBound";
            this->lowerBound->Size = System::Drawing::Size(65, 22);
            this->lowerBound->TabIndex = 4;
            this->lowerBound->TextChanged += gcnew System::EventHandler(this, &MyForm::lowerBound_TextChanged);
            // 
            // upperBound
            // 
            this->upperBound->BackColor = System::Drawing::Color::Silver;
            this->upperBound->Location = System::Drawing::Point(216, 41);
            this->upperBound->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->upperBound->Name = L"upperBound";
            this->upperBound->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->upperBound->Size = System::Drawing::Size(65, 22);
            this->upperBound->TabIndex = 3;
            this->upperBound->TextChanged += gcnew System::EventHandler(this, &MyForm::upperBound_TextChanged);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(13, 80);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(181, 25);
            this->label4->TabIndex = 2;
            this->label4->Text = L"Нижняя граница =";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(8, 43);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(184, 25);
            this->label3->TabIndex = 1;
            this->label3->Text = L"Верхняя граница =";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(15, 18);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(226, 18);
            this->label2->TabIndex = 0;
            this->label2->Text = L"Введите границы интеграла";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(13, 581);
            this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(293, 98);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Посчитать";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::Silver;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(555, 581);
            this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(599, 46);
            this->textBox1->TabIndex = 3;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->pictureBox3);
            this->groupBox2->Controls->Add(this->pictureBox2);
            this->groupBox2->Controls->Add(this->pictureBox1);
            this->groupBox2->Controls->Add(this->radioButtonF3);
            this->groupBox2->Controls->Add(this->radioButtonF2);
            this->groupBox2->Controls->Add(this->radioButtonF1);
            this->groupBox2->Controls->Add(this->label5);
            this->groupBox2->Location = System::Drawing::Point(13, 204);
            this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->groupBox2->Size = System::Drawing::Size(293, 369);
            this->groupBox2->TabIndex = 4;
            this->groupBox2->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::SystemColors::Window;
            this->pictureBox3->ImageLocation = L"C:\\Users\\danii\\source\\repos\\Project1\\func3.jpg";
            this->pictureBox3->Location = System::Drawing::Point(76, 236);
            this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(169, 82);
            this->pictureBox3->TabIndex = 6;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::SystemColors::Window;
            this->pictureBox2->ImageLocation = L"C:\\Users\\danii\\source\\repos\\Project1\\func2.jpg";
            this->pictureBox2->Location = System::Drawing::Point(76, 146);
            this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(169, 82);
            this->pictureBox2->TabIndex = 5;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
            this->pictureBox1->ImageLocation = L"C:\\Users\\danii\\source\\repos\\Project1\\func1.jpg";
            this->pictureBox1->Location = System::Drawing::Point(76, 57);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(169, 82);
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // radioButtonF3
            // 
            this->radioButtonF3->AutoSize = true;
            this->radioButtonF3->Location = System::Drawing::Point(43, 272);
            this->radioButtonF3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->radioButtonF3->Name = L"radioButtonF3";
            this->radioButtonF3->Size = System::Drawing::Size(17, 16);
            this->radioButtonF3->TabIndex = 3;
            this->radioButtonF3->TabStop = true;
            this->radioButtonF3->UseVisualStyleBackColor = true;
            // 
            // radioButtonF2
            // 
            this->radioButtonF2->AutoSize = true;
            this->radioButtonF2->Location = System::Drawing::Point(43, 182);
            this->radioButtonF2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->radioButtonF2->Name = L"radioButtonF2";
            this->radioButtonF2->Size = System::Drawing::Size(17, 16);
            this->radioButtonF2->TabIndex = 2;
            this->radioButtonF2->TabStop = true;
            this->radioButtonF2->UseVisualStyleBackColor = true;
            // 
            // radioButtonF1
            // 
            this->radioButtonF1->AutoSize = true;
            this->radioButtonF1->Location = System::Drawing::Point(43, 86);
            this->radioButtonF1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->radioButtonF1->Name = L"radioButtonF1";
            this->radioButtonF1->Size = System::Drawing::Size(17, 16);
            this->radioButtonF1->TabIndex = 1;
            this->radioButtonF1->TabStop = true;
            this->radioButtonF1->UseVisualStyleBackColor = true;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(13, 12);
            this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(255, 29);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Выберите функцию";
            // 
            // chart1
            // 
            this->chart1->BackColor = System::Drawing::Color::DimGray;
            chartArea3->BackColor = System::Drawing::Color::DimGray;
            chartArea3->Name = L"ChartArea1";
            chartArea3->ShadowColor = System::Drawing::SystemColors::ActiveBorder;
            this->chart1->ChartAreas->Add(chartArea3);
            legend3->BackColor = System::Drawing::Color::DimGray;
            legend3->Name = L"Legend1";
            this->chart1->Legends->Add(legend3);
            this->chart1->Location = System::Drawing::Point(315, 78);
            this->chart1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->chart1->Name = L"chart1";
            series3->BorderWidth = 2;
            series3->ChartArea = L"ChartArea1";
            series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::SplineArea;
            series3->Color = System::Drawing::Color::Red;
            series3->LabelBackColor = System::Drawing::Color::White;
            series3->LabelBorderColor = System::Drawing::Color::DimGray;
            series3->Legend = L"Legend1";
            series3->LegendText = L"Ф-ция";
            series3->Name = L"Series1";
            this->chart1->Series->Add(series3);
            this->chart1->Size = System::Drawing::Size(848, 496);
            this->chart1->TabIndex = 5;
            this->chart1->Text = L"chart1";
            this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
            // 
            // button2
            // 
            this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveBorder;
            this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveBorder;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->Location = System::Drawing::Point(11, 687);
            this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(293, 98);
            this->button2->TabIndex = 6;
            this->button2->Text = L"Построить график";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->Location = System::Drawing::Point(331, 581);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(207, 42);
            this->label6->TabIndex = 7;
            this->label6->Text = L"Результат:";
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // button3
            // 
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button3->Location = System::Drawing::Point(339, 687);
            this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(816, 98);
            this->button3->TabIndex = 8;
            this->button3->Text = L"Записать результат и исходные данные в текстовый файл";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(332, 636);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(192, 31);
            this->label7->TabIndex = 9;
            this->label7->Text = L"Точный ответ:";
            this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::Silver;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(555, 633);
            this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(599, 46);
            this->textBox2->TabIndex = 10;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::DimGray;
            this->ClientSize = System::Drawing::Size(1176, 804);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->chart1);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->label1);
            this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->MaximumSize = System::Drawing::Size(1194, 851);
            this->MinimumSize = System::Drawing::Size(1194, 851);
            this->Name = L"MyForm";
            this->Text = L"Метод Монте-Карло";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
  private: double a, b, h;
  private: double x, y;
  private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void upperBound_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void lowerBound_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
  private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
  private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}