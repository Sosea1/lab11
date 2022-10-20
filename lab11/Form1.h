#pragma once

namespace lab11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;





























	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1377, 756);
			this->tabControl1->TabIndex = 15;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1369, 730);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Подключение к БД";
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1369, 730);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Изменить настройки БД";
			this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(289, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(343, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(474, 602);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(332, 70);
			this->button1->TabIndex = 15;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(703, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(286, 265);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 29;
			this->label7->Text = L"label7";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(703, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 24;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(289, 152);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(343, 20);
			this->textBox2->TabIndex = 17;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(703, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(706, 248);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(377, 20);
			this->textBox6->TabIndex = 21;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(286, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 28;
			this->label6->Text = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(706, 178);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(377, 20);
			this->textBox5->TabIndex = 20;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(289, 222);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(343, 20);
			this->textBox3->TabIndex = 18;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(706, 111);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(377, 20);
			this->textBox4->TabIndex = 19;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(286, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(289, 292);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(343, 20);
			this->textBox7->TabIndex = 22;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(286, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage3->Controls->Add(this->label37);
			this->tabPage3->Controls->Add(this->label38);
			this->tabPage3->Controls->Add(this->label39);
			this->tabPage3->Controls->Add(this->label40);
			this->tabPage3->Controls->Add(this->label41);
			this->tabPage3->Controls->Add(this->label42);
			this->tabPage3->Controls->Add(this->label43);
			this->tabPage3->Controls->Add(this->label44);
			this->tabPage3->Controls->Add(this->label45);
			this->tabPage3->Controls->Add(this->label46);
			this->tabPage3->Controls->Add(this->label47);
			this->tabPage3->Controls->Add(this->label48);
			this->tabPage3->Controls->Add(this->label49);
			this->tabPage3->Controls->Add(this->label50);
			this->tabPage3->Controls->Add(this->label51);
			this->tabPage3->Controls->Add(this->label52);
			this->tabPage3->Controls->Add(this->label53);
			this->tabPage3->Controls->Add(this->label54);
			this->tabPage3->Controls->Add(this->label55);
			this->tabPage3->Controls->Add(this->label56);
			this->tabPage3->Controls->Add(this->label57);
			this->tabPage3->Controls->Add(this->label58);
			this->tabPage3->Controls->Add(this->label59);
			this->tabPage3->Controls->Add(this->label60);
			this->tabPage3->Controls->Add(this->label61);
			this->tabPage3->Controls->Add(this->label62);
			this->tabPage3->Controls->Add(this->label63);
			this->tabPage3->Controls->Add(this->label64);
			this->tabPage3->Controls->Add(this->label65);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1369, 730);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Текущие настройки БД";
			this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
			// 
			// label37
			// 
			this->label37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label37->Location = System::Drawing::Point(451, 494);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(150, 20);
			this->label37->TabIndex = 57;
			this->label37->Text = L"label37";
			// 
			// label38
			// 
			this->label38->Location = System::Drawing::Point(815, 501);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(500, 30);
			this->label38->TabIndex = 56;
			this->label38->Text = L"Сложность пароля зависит от количества символов, если равен или больше 8 то парол"
				L"ь надежный ";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(54, 495);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(197, 13);
			this->label39->TabIndex = 55;
			this->label39->Text = L"Сложность пароля root пользователя";
			// 
			// label40
			// 
			this->label40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label40->Location = System::Drawing::Point(451, 446);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(150, 20);
			this->label40->TabIndex = 54;
			this->label40->Text = L"label40";
			// 
			// label41
			// 
			this->label41->Location = System::Drawing::Point(815, 453);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(500, 30);
			this->label41->TabIndex = 53;
			this->label41->Text = L"max_user_connections - Максимальное количество одновременных подключений для одно"
				L"го пользователя в базе данных, рекомендуется ограничить.";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(54, 447);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(310, 13);
			this->label42->TabIndex = 52;
			this->label42->Text = L"Максимальное количество подключений для пользователя";
			// 
			// label43
			// 
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label43->Location = System::Drawing::Point(451, 403);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(150, 20);
			this->label43->TabIndex = 51;
			this->label43->Text = L"label43";
			// 
			// label44
			// 
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label44->Location = System::Drawing::Point(451, 129);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(150, 20);
			this->label44->TabIndex = 50;
			this->label44->Text = L"label44";
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label45->Location = System::Drawing::Point(451, 186);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(150, 20);
			this->label45->TabIndex = 49;
			this->label45->Text = L"label45";
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label46->Location = System::Drawing::Point(451, 243);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(150, 20);
			this->label46->TabIndex = 48;
			this->label46->Text = L"label46";
			// 
			// label47
			// 
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label47->Location = System::Drawing::Point(451, 302);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(150, 20);
			this->label47->TabIndex = 47;
			this->label47->Text = L"label47";
			// 
			// label48
			// 
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label48->Location = System::Drawing::Point(451, 354);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(150, 20);
			this->label48->TabIndex = 46;
			this->label48->Text = L"label48";
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label49->Location = System::Drawing::Point(451, 74);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(150, 20);
			this->label49->TabIndex = 45;
			this->label49->Text = L"label49";
			// 
			// label50
			// 
			this->label50->Location = System::Drawing::Point(815, 410);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(500, 30);
			this->label50->TabIndex = 44;
			this->label50->Text = L"label50";
			// 
			// label51
			// 
			this->label51->Location = System::Drawing::Point(815, 129);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(500, 30);
			this->label51->TabIndex = 43;
			this->label51->Text = L"bind-address - Разрешенные IP адреса для подлкючения к базе данных, рекомендуется"
				L" ограничить доступ к базе данных и разрешить его только для IP адресов сотрудник"
				L"ов. ";
			// 
			// label52
			// 
			this->label52->Location = System::Drawing::Point(815, 193);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(500, 30);
			this->label52->TabIndex = 42;
			this->label52->Text = L"max_connections - Максимальное количество одновременных подключений, рекомендуетс"
				L"я установить лимит на количество сотрудников.";
			// 
			// label53
			// 
			this->label53->Location = System::Drawing::Point(815, 250);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(500, 30);
			this->label53->TabIndex = 41;
			this->label53->Text = L"connect_timeout - Время аутентификации, Рекомендуется уменьшить для защиты от бру"
				L"тфорс атак.";
			// 
			// label54
			// 
			this->label54->Location = System::Drawing::Point(815, 309);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(500, 30);
			this->label54->TabIndex = 40;
			this->label54->Text = L"local-infile - Чтенние файлов базой данных, функция позволяет подключать локальны"
				L"е файлы в базу данных, рекомендуется отключить.";
			// 
			// label55
			// 
			this->label55->Location = System::Drawing::Point(815, 361);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(500, 30);
			this->label55->TabIndex = 39;
			this->label55->Text = L"symbolic_links - Символические ссылки, содержат путь к файлу при обращении к ним,"
				L" рекомендуется отключить.";
			// 
			// label56
			// 
			this->label56->Location = System::Drawing::Point(815, 74);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(500, 30);
			this->label56->TabIndex = 38;
			this->label56->Text = L"port - Порт подключения к базе данных, рекомендуется изменить на нестандартный дл"
				L"я Усложнения поиска порта злоумышленником.";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(694, 644);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(41, 13);
			this->label57->TabIndex = 37;
			this->label57->Text = L"label57";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(431, 644);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(131, 13);
			this->label58->TabIndex = 36;
			this->label58->Text = L"Уровень защищенности";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(54, 404);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(230, 13);
			this->label59->TabIndex = 35;
			this->label59->Text = L"Возможность модификации пользователей";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(54, 129);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(130, 13);
			this->label60->TabIndex = 34;
			this->label60->Text = L"Разрешенные IP адреса";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(54, 187);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(220, 13);
			this->label61->TabIndex = 33;
			this->label61->Text = L"Количество одновременных подключений";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(54, 244);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(126, 13);
			this->label62->TabIndex = 32;
			this->label62->Text = L"Врямя аутентификации";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(54, 303);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(85, 13);
			this->label63->TabIndex = 31;
			this->label63->Text = L"Чтение файлов";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(54, 355);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(128, 13);
			this->label64->TabIndex = 30;
			this->label64->Text = L"Символические ссылки";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(54, 75);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(32, 13);
			this->label65->TabIndex = 29;
			this->label65->Text = L"Порт";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(512, 225);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 16);
			this->label8->TabIndex = 0;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(512, 284);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 16);
			this->label9->TabIndex = 1;
			this->label9->Text = L"label9";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(657, 222);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 23);
			this->textBox8->TabIndex = 2;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(657, 281);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 23);
			this->textBox9->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(594, 381);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 41);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Подключиться";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(334, 102);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(658, 27);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Подключитесь root пользователем к базе данных для работы с программой";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1401, 790);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label33_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label36_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
