#pragma once
#include "Orders.h"
namespace Myproject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mainmenu
	/// </summary>
	public ref class Mainmenu : public System::Windows::Forms::Form
	{
	public:
		Mainmenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mainmenu()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::RadioButton^ sizebutton1;
	private: System::Windows::Forms::RadioButton^ sizebutton2;
	private: System::Windows::Forms::RadioButton^ sizebutton3;
	private: System::Windows::Forms::RadioButton^ sizebutton4;





	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::CheckBox^ toppingsbutton1;
	private: System::Windows::Forms::CheckBox^ toppingsbutton2;
	private: System::Windows::Forms::CheckBox^ toppingsbutton3;
	private: System::Windows::Forms::CheckBox^ toppingsbutton4;
	private: System::Windows::Forms::CheckBox^ toppingsbutton5;
	private: System::Windows::Forms::CheckBox^ toppingsbutton6;
	private: System::Windows::Forms::RadioButton^ crust1;
	private: System::Windows::Forms::RadioButton^ crust2;
	private: System::Windows::Forms::TextBox^ Txtbox1;


	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::TextBox^ totaltop;
	private: System::Windows::Forms::Button^ toppingscalcu;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;


	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ resultRichTextBox;
	private: System::Windows::Forms::GroupBox^ groupBox4;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ btnw1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ submitorder;












	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Mainmenu::typeid));
			this->sizebutton1 = (gcnew System::Windows::Forms::RadioButton());
			this->sizebutton2 = (gcnew System::Windows::Forms::RadioButton());
			this->sizebutton3 = (gcnew System::Windows::Forms::RadioButton());
			this->sizebutton4 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->toppingsbutton1 = (gcnew System::Windows::Forms::CheckBox());
			this->toppingsbutton2 = (gcnew System::Windows::Forms::CheckBox());
			this->toppingsbutton3 = (gcnew System::Windows::Forms::CheckBox());
			this->toppingsbutton4 = (gcnew System::Windows::Forms::CheckBox());
			this->toppingsbutton5 = (gcnew System::Windows::Forms::CheckBox());
			this->toppingsbutton6 = (gcnew System::Windows::Forms::CheckBox());
			this->crust1 = (gcnew System::Windows::Forms::RadioButton());
			this->crust2 = (gcnew System::Windows::Forms::RadioButton());
			this->Txtbox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->totaltop = (gcnew System::Windows::Forms::TextBox());
			this->toppingscalcu = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->resultRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->submitorder = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnw1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// sizebutton1
			// 
			this->sizebutton1->AutoSize = true;
			this->sizebutton1->BackColor = System::Drawing::Color::Black;
			this->sizebutton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sizebutton1.BackgroundImage")));
			this->sizebutton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sizebutton1->Checked = true;
			this->sizebutton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sizebutton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->sizebutton1->Location = System::Drawing::Point(19, 19);
			this->sizebutton1->Name = L"sizebutton1";
			this->sizebutton1->Size = System::Drawing::Size(252, 59);
			this->sizebutton1->TabIndex = 4;
			this->sizebutton1->TabStop = true;
			this->sizebutton1->Text = L"               ";
			this->sizebutton1->UseVisualStyleBackColor = false;
			this->sizebutton1->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::sizebutton1_CheckedChanged);
			// 
			// sizebutton2
			// 
			this->sizebutton2->AutoSize = true;
			this->sizebutton2->BackColor = System::Drawing::Color::Violet;
			this->sizebutton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sizebutton2.BackgroundImage")));
			this->sizebutton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sizebutton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sizebutton2->Location = System::Drawing::Point(19, 74);
			this->sizebutton2->Name = L"sizebutton2";
			this->sizebutton2->Size = System::Drawing::Size(308, 59);
			this->sizebutton2->TabIndex = 5;
			this->sizebutton2->Text = L"                   ";
			this->sizebutton2->UseVisualStyleBackColor = false;
			this->sizebutton2->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::sizebutton2_CheckedChanged);
			// 
			// sizebutton3
			// 
			this->sizebutton3->AutoSize = true;
			this->sizebutton3->BackColor = System::Drawing::Color::Violet;
			this->sizebutton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sizebutton3.BackgroundImage")));
			this->sizebutton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sizebutton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sizebutton3->Location = System::Drawing::Point(19, 127);
			this->sizebutton3->Name = L"sizebutton3";
			this->sizebutton3->Size = System::Drawing::Size(294, 59);
			this->sizebutton3->TabIndex = 6;
			this->sizebutton3->Text = L"                  ";
			this->sizebutton3->UseVisualStyleBackColor = false;
			this->sizebutton3->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::sizebutton3_CheckedChanged);
			// 
			// sizebutton4
			// 
			this->sizebutton4->AutoSize = true;
			this->sizebutton4->BackColor = System::Drawing::Color::Violet;
			this->sizebutton4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sizebutton4.BackgroundImage")));
			this->sizebutton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sizebutton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sizebutton4->Location = System::Drawing::Point(19, 179);
			this->sizebutton4->Name = L"sizebutton4";
			this->sizebutton4->Size = System::Drawing::Size(446, 77);
			this->sizebutton4->TabIndex = 7;
			this->sizebutton4->Text = L"                      ";
			this->sizebutton4->UseVisualStyleBackColor = false;
			this->sizebutton4->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::sizebutton4_CheckedChanged);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.ErrorImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			this->pictureBox5->Location = System::Drawing::Point(395, -1);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(1262, 211);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Black;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(301, 166);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(266, 160);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->WaitOnLoad = true;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Mainmenu::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(761, 166);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(442, 159);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 10;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(1339, 160);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(375, 166);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 11;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->WaitOnLoad = true;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Mainmenu::pictureBox8_Click);
			// 
			// toppingsbutton1
			// 
			this->toppingsbutton1->AutoSize = true;
			this->toppingsbutton1->BackColor = System::Drawing::Color::Black;
			this->toppingsbutton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toppingsbutton1.BackgroundImage")));
			this->toppingsbutton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toppingsbutton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toppingsbutton1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->toppingsbutton1->Location = System::Drawing::Point(25, 21);
			this->toppingsbutton1->Name = L"toppingsbutton1";
			this->toppingsbutton1->Size = System::Drawing::Size(295, 59);
			this->toppingsbutton1->TabIndex = 12;
			this->toppingsbutton1->Text = L"                  ";
			this->toppingsbutton1->UseVisualStyleBackColor = false;
			this->toppingsbutton1->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::toppingsbutton1_CheckedChanged);
			// 
			// toppingsbutton2
			// 
			this->toppingsbutton2->AutoSize = true;
			this->toppingsbutton2->BackColor = System::Drawing::Color::Black;
			this->toppingsbutton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toppingsbutton2.BackgroundImage")));
			this->toppingsbutton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toppingsbutton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toppingsbutton2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->toppingsbutton2->Location = System::Drawing::Point(25, 73);
			this->toppingsbutton2->Name = L"toppingsbutton2";
			this->toppingsbutton2->Size = System::Drawing::Size(295, 59);
			this->toppingsbutton2->TabIndex = 13;
			this->toppingsbutton2->Text = L"                  ";
			this->toppingsbutton2->UseVisualStyleBackColor = false;
			this->toppingsbutton2->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::toppingsbutton2_CheckedChanged);
			// 
			// toppingsbutton3
			// 
			this->toppingsbutton3->AutoSize = true;
			this->toppingsbutton3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->toppingsbutton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toppingsbutton3.BackgroundImage")));
			this->toppingsbutton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toppingsbutton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toppingsbutton3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->toppingsbutton3->Location = System::Drawing::Point(26, 229);
			this->toppingsbutton3->Name = L"toppingsbutton3";
			this->toppingsbutton3->Size = System::Drawing::Size(281, 59);
			this->toppingsbutton3->TabIndex = 14;
			this->toppingsbutton3->Text = L"                 ";
			this->toppingsbutton3->UseVisualStyleBackColor = false;
			this->toppingsbutton3->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::toppingsbutton3_CheckedChanged);
			// 
			// toppingsbutton4
			// 
			this->toppingsbutton4->AutoSize = true;
			this->toppingsbutton4->BackColor = System::Drawing::Color::Black;
			this->toppingsbutton4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toppingsbutton4.BackgroundImage")));
			this->toppingsbutton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toppingsbutton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toppingsbutton4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->toppingsbutton4->Location = System::Drawing::Point(26, 288);
			this->toppingsbutton4->Name = L"toppingsbutton4";
			this->toppingsbutton4->Size = System::Drawing::Size(169, 46);
			this->toppingsbutton4->TabIndex = 15;
			this->toppingsbutton4->Text = L"            ";
			this->toppingsbutton4->UseVisualStyleBackColor = false;
			this->toppingsbutton4->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::toppingsbutton4_CheckedChanged);
			// 
			// toppingsbutton5
			// 
			this->toppingsbutton5->AutoSize = true;
			this->toppingsbutton5->BackColor = System::Drawing::Color::Black;
			this->toppingsbutton5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toppingsbutton5.BackgroundImage")));
			this->toppingsbutton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toppingsbutton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toppingsbutton5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->toppingsbutton5->Location = System::Drawing::Point(25, 127);
			this->toppingsbutton5->Name = L"toppingsbutton5";
			this->toppingsbutton5->Size = System::Drawing::Size(295, 59);
			this->toppingsbutton5->TabIndex = 16;
			this->toppingsbutton5->Text = L"                  ";
			this->toppingsbutton5->UseVisualStyleBackColor = false;
			this->toppingsbutton5->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::toppingsbutton5_CheckedChanged);
			// 
			// toppingsbutton6
			// 
			this->toppingsbutton6->AutoSize = true;
			this->toppingsbutton6->BackColor = System::Drawing::Color::Black;
			this->toppingsbutton6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toppingsbutton6.BackgroundImage")));
			this->toppingsbutton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toppingsbutton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toppingsbutton6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->toppingsbutton6->Location = System::Drawing::Point(26, 179);
			this->toppingsbutton6->Name = L"toppingsbutton6";
			this->toppingsbutton6->Size = System::Drawing::Size(281, 59);
			this->toppingsbutton6->TabIndex = 17;
			this->toppingsbutton6->Text = L"                 ";
			this->toppingsbutton6->UseVisualStyleBackColor = false;
			this->toppingsbutton6->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::toppingsbutton6_CheckedChanged);
			// 
			// crust1
			// 
			this->crust1->AutoSize = true;
			this->crust1->BackColor = System::Drawing::Color::Black;
			this->crust1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"crust1.BackgroundImage")));
			this->crust1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->crust1->Checked = true;
			this->crust1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crust1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->crust1->Location = System::Drawing::Point(21, 33);
			this->crust1->Name = L"crust1";
			this->crust1->Size = System::Drawing::Size(145, 41);
			this->crust1->TabIndex = 18;
			this->crust1->TabStop = true;
			this->crust1->Text = L"           ";
			this->crust1->UseVisualStyleBackColor = false;
			this->crust1->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::crust1_CheckedChanged);
			// 
			// crust2
			// 
			this->crust2->AutoSize = true;
			this->crust2->BackColor = System::Drawing::Color::Black;
			this->crust2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"crust2.BackgroundImage")));
			this->crust2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->crust2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crust2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->crust2->Location = System::Drawing::Point(21, 89);
			this->crust2->Name = L"crust2";
			this->crust2->Size = System::Drawing::Size(135, 41);
			this->crust2->TabIndex = 19;
			this->crust2->Text = L"          ";
			this->crust2->UseVisualStyleBackColor = false;
			this->crust2->CheckedChanged += gcnew System::EventHandler(this, &Mainmenu::crust2_CheckedChanged);
			// 
			// Txtbox1
			// 
			this->Txtbox1->BackColor = System::Drawing::Color::Black;
			this->Txtbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txtbox1->ForeColor = System::Drawing::Color::White;
			this->Txtbox1->Location = System::Drawing::Point(41, 254);
			this->Txtbox1->Name = L"Txtbox1";
			this->Txtbox1->Size = System::Drawing::Size(99, 80);
			this->Txtbox1->TabIndex = 20;
			this->Txtbox1->Text = L"  ";
			this->Txtbox1->TextChanged += gcnew System::EventHandler(this, &Mainmenu::textBox1_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox5->Location = System::Drawing::Point(313, 33);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(58, 44);
			this->textBox5->TabIndex = 24;
			this->textBox5->Text = L"  ";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Mainmenu::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox6->Location = System::Drawing::Point(313, 86);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(58, 44);
			this->textBox6->TabIndex = 25;
			this->textBox6->Text = L"  ";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox7->Location = System::Drawing::Point(313, 242);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(58, 44);
			this->textBox7->TabIndex = 26;
			this->textBox7->Text = L"  ";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Black;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox8->Location = System::Drawing::Point(313, 292);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(58, 44);
			this->textBox8->TabIndex = 27;
			this->textBox8->Text = L"  ";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Mainmenu::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Black;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox9->Location = System::Drawing::Point(313, 138);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(58, 44);
			this->textBox9->TabIndex = 28;
			this->textBox9->Text = L"  ";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::Black;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox10->Location = System::Drawing::Point(313, 192);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(58, 44);
			this->textBox10->TabIndex = 29;
			this->textBox10->Text = L"   ";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Black;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox11->Location = System::Drawing::Point(245, 70);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(94, 62);
			this->textBox11->TabIndex = 30;
			this->textBox11->Text = L"  ";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Mainmenu::textBox11_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::Black;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox12->Location = System::Drawing::Point(1387, 356);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(189, 116);
			this->textBox12->TabIndex = 32;
			this->textBox12->Text = L"  ";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Mainmenu::textBox12_TextChanged);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(1164, 271);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(412, 94);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 33;
			this->pictureBox9->TabStop = false;
			// 
			// totaltop
			// 
			this->totaltop->BackColor = System::Drawing::Color::Black;
			this->totaltop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totaltop->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->totaltop->Location = System::Drawing::Point(392, 37);
			this->totaltop->Name = L"totaltop";
			this->totaltop->Size = System::Drawing::Size(184, 80);
			this->totaltop->TabIndex = 34;
			this->totaltop->Text = L"  ";
			this->totaltop->TextChanged += gcnew System::EventHandler(this, &Mainmenu::totaltop_TextChanged);
			// 
			// toppingscalcu
			// 
			this->toppingscalcu->BackColor = System::Drawing::Color::Goldenrod;
			this->toppingscalcu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toppingscalcu.BackgroundImage")));
			this->toppingscalcu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toppingscalcu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toppingscalcu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->toppingscalcu->Location = System::Drawing::Point(392, 138);
			this->toppingscalcu->Name = L"toppingscalcu";
			this->toppingscalcu->Size = System::Drawing::Size(184, 85);
			this->toppingscalcu->TabIndex = 35;
			this->toppingscalcu->UseVisualStyleBackColor = false;
			this->toppingscalcu->Click += gcnew System::EventHandler(this, &Mainmenu::toppingscalcu_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DarkOrange;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->sizebutton1);
			this->groupBox1->Controls->Add(this->sizebutton2);
			this->groupBox1->Controls->Add(this->sizebutton3);
			this->groupBox1->Controls->Add(this->Txtbox1);
			this->groupBox1->Controls->Add(this->sizebutton4);
			this->groupBox1->Location = System::Drawing::Point(188, 325);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(482, 347);
			this->groupBox1->TabIndex = 39;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Mainmenu::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Orange;
			this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox2.BackgroundImage")));
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->crust2);
			this->groupBox2->Controls->Add(this->crust1);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox2->Location = System::Drawing::Point(1318, 325);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(412, 156);
			this->groupBox2->TabIndex = 40;
			this->groupBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::DarkOrange;
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->Controls->Add(this->pictureBox3);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->toppingscalcu);
			this->groupBox3->Controls->Add(this->totaltop);
			this->groupBox3->Controls->Add(this->toppingsbutton1);
			this->groupBox3->Controls->Add(this->toppingsbutton2);
			this->groupBox3->Controls->Add(this->toppingsbutton3);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->toppingsbutton6);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->toppingsbutton5);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->toppingsbutton4);
			this->groupBox3->Location = System::Drawing::Point(695, 325);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(599, 347);
			this->groupBox3->TabIndex = 41;
			this->groupBox3->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(421, 224);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(130, 112);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 50;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1629, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(338, 1155);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 42;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-55, -22);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(350, 1189);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 43;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(229, -1);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(150, 143);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 36;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Mainmenu::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(1610, -1);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(147, 143);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 46;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(-5, -1);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(1935, 1062);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 47;
			this->pictureBox12->TabStop = false;
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Goldenrod;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1164, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 116);
			this->button1->TabIndex = 31;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Mainmenu::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(55, 489);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(294, 107);
			this->button2->TabIndex = 32;
			this->button2->Text = L"                               ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Mainmenu::button2_Click);
			// 
			// resultRichTextBox
			// 
			this->resultRichTextBox->BackColor = System::Drawing::SystemColors::InfoText;
			this->resultRichTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultRichTextBox->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->resultRichTextBox->Location = System::Drawing::Point(360, 489);
			this->resultRichTextBox->Name = L"resultRichTextBox";
			this->resultRichTextBox->Size = System::Drawing::Size(780, 247);
			this->resultRichTextBox->TabIndex = 33;
			this->resultRichTextBox->Text = L"";
			this->resultRichTextBox->TextChanged += gcnew System::EventHandler(this, &Mainmenu::resultRichTextBox_TextChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox4.BackgroundImage")));
			this->groupBox4->Controls->Add(this->submitorder);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->btnw1);
			this->groupBox4->Controls->Add(this->textBox12);
			this->groupBox4->Controls->Add(this->resultRichTextBox);
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Controls->Add(this->pictureBox9);
			this->groupBox4->Location = System::Drawing::Point(154, 216);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1613, 768);
			this->groupBox4->TabIndex = 49;
			this->groupBox4->TabStop = false;
			// 
			// submitorder
			// 
			this->submitorder->BackColor = System::Drawing::Color::Black;
			this->submitorder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"submitorder.BackgroundImage")));
			this->submitorder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->submitorder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitorder->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->submitorder->Location = System::Drawing::Point(55, 616);
			this->submitorder->Name = L"submitorder";
			this->submitorder->Size = System::Drawing::Size(294, 120);
			this->submitorder->TabIndex = 39;
			this->submitorder->Text = L"                  ";
			this->submitorder->UseVisualStyleBackColor = false;
			this->submitorder->Click += gcnew System::EventHandler(this, &Mainmenu::submitorder_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Yellow;
			this->button4->Location = System::Drawing::Point(1164, 616);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(412, 120);
			this->button4->TabIndex = 38;
			this->button4->Text = L"                 ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Mainmenu::button4_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(1387, 487);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(189, 122);
			this->button6->TabIndex = 37;
			this->button6->Text = L"            ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Mainmenu::button6_Click);
			// 
			// btnw1
			// 
			this->btnw1->BackColor = System::Drawing::Color::Black;
			this->btnw1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnw1.BackgroundImage")));
			this->btnw1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnw1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnw1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnw1->Location = System::Drawing::Point(1164, 487);
			this->btnw1->Name = L"btnw1";
			this->btnw1->Size = System::Drawing::Size(207, 120);
			this->btnw1->TabIndex = 36;
			this->btnw1->Text = L"  ";
			this->btnw1->UseVisualStyleBackColor = false;
			this->btnw1->Click += gcnew System::EventHandler(this, &Mainmenu::btnw1_Click);
			// 
			// Mainmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1924, 1061);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox12);
			this->Name = L"Mainmenu";
			this->Text = L"Mainmenu";
			this->Load += gcnew System::EventHandler(this, &Mainmenu::Mainmenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int baseCost = 0;

	if (sizebutton1->Checked)
		baseCost += 10;
	else if (sizebutton2->Checked)
		baseCost += 20;
	else if (sizebutton3->Checked)
		baseCost += 30;
	else if (sizebutton4->Checked)
		baseCost += 40;


	Txtbox1->Text = System::Convert::ToString(baseCost);
}

private: System::Void sizebutton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (sizebutton1->Checked) {
		Txtbox1->Text = "10";
	}
}
private: System::Void sizebutton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (sizebutton2->Checked) {
		Txtbox1->Text = "20";
	}
}
private: System::Void sizebutton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (sizebutton3->Checked) {
		Txtbox1->Text = "30";
	}
}
	private: System::Void sizebutton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (sizebutton4->Checked) {
			Txtbox1->Text = "40";
		}
	}
    int toppingsCost = 0;
private: System::Void toppingsbutton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (toppingsbutton1->Checked == true) {
		textBox5->Text = "10";
		toppingsCost += 10;
	
	}
	if (toppingsbutton1->Checked == false) {
		textBox5->Text = "";
	}

}
private: System::Void toppingsbutton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (toppingsbutton2->Checked == true) {
		textBox6->Text = "20";
	}
	if (toppingsbutton2->Checked == false) {
		textBox6->Text = "";
	}
	toppingsCost += 20;
}
private: System::Void toppingsbutton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (toppingsbutton3->Checked == true) {
		textBox7->Text = "20";
	}
	if (toppingsbutton3->Checked == false) {
		textBox7->Text = "";
	}
	toppingsCost += 30;
}
private: System::Void toppingsbutton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (toppingsbutton4->Checked == true) {
		textBox8->Text = "20";
	}
	if (toppingsbutton4->Checked == false) {
		textBox8->Text = "";
	}
	toppingsCost += 20;
}
private: System::Void toppingsbutton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (toppingsbutton5->Checked == true) {
		textBox9->Text = "20";
	}
	if (toppingsbutton5->Checked == false) {
		textBox9->Text = "";
	}
	toppingsCost += 10;
}
private: System::Void toppingsbutton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (toppingsbutton6->Checked == true) {
		textBox10->Text = "20";
	}
	if (toppingsbutton6->Checked == false) {
		textBox10->Text = "";
	}
}
private: System::Void crust1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (crust1->Checked) {
		textBox11->Text = "20";
	}

}
private: System::Void crust2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (crust2->Checked) {
		textBox11->Text = "30";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int  result = System::Convert::ToInt16(Txtbox1->Text) + System::Convert::ToInt16(totaltop->Text)+ System::Convert::ToInt16(textBox11->Text);
	textBox12->Text = System::Convert::ToString(result);

	//MessageBox::Show("Test 123","Test");
}

private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void totaltop_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toppingscalcu_Click(System::Object^ sender, System::EventArgs^ e) {
	int toppingsCost = 0;

	if (toppingsbutton1->Checked)
		toppingsCost += 10;
	if (toppingsbutton2->Checked)
		toppingsCost += 20;
	if (toppingsbutton3->Checked)
		toppingsCost += 20;
	if (toppingsbutton4->Checked)
		toppingsCost += 20;
	if (toppingsbutton5->Checked)
		toppingsCost += 20;
	if (toppingsbutton6->Checked)
		toppingsCost += 20;

	totaltop->Text = System::Convert::ToString(toppingsCost);

}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int crustCost = 0;
	if (crust1->Checked)
		crustCost += 20;
	else if (crust2->Checked)
		crustCost += 30;

	textBox11->Text = System::Convert::ToString(crustCost);

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Mainmenu_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void resultRichTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	resultRichTextBox->Clear();
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	resultRichTextBox->AppendText("SIZE: " + Environment::NewLine);
	if (sizebutton1->Checked)
		resultRichTextBox->AppendText(" Small" + Environment::NewLine);
	else if (sizebutton2->Checked)
		resultRichTextBox->AppendText(" Medium" + Environment::NewLine);
	else if (sizebutton3->Checked)
		resultRichTextBox->AppendText(" Large" + Environment::NewLine);
	else if (sizebutton4->Checked)
		resultRichTextBox->AppendText(" Extra Large" + Environment::NewLine);

	// Check the toppings buttons
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	resultRichTextBox->AppendText("TOPPINGS:" + Environment::NewLine);
	if (toppingsbutton1->Checked)
		resultRichTextBox->AppendText(" Pepperoni" + Environment::NewLine);
	if (toppingsbutton2->Checked)
		resultRichTextBox->AppendText(" Mushrooms" + Environment::NewLine);
	if (toppingsbutton3->Checked)
		resultRichTextBox->AppendText(" Bell peppers" + Environment::NewLine);
	if (toppingsbutton4->Checked)
		resultRichTextBox->AppendText(" Pineapple " + Environment::NewLine);
	if (toppingsbutton5->Checked)
		resultRichTextBox->AppendText(" Sausage" + Environment::NewLine);
	if (toppingsbutton6->Checked)
		resultRichTextBox->AppendText(" Onions" + Environment::NewLine);

	// Check the crust buttons
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	resultRichTextBox->AppendText("CRUST:" + Environment::NewLine);
	if (crust1->Checked)
		resultRichTextBox->AppendText(" Thick" + Environment::NewLine);
	else if (crust2->Checked)
		resultRichTextBox->AppendText(" Thin" + Environment::NewLine);
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	int  result = System::Convert::ToInt16(Txtbox1->Text) + System::Convert::ToInt16(totaltop->Text) + System::Convert::ToInt16(textBox11->Text);
	resultRichTextBox->AppendText("Total Cost: " + result.ToString());

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	resultRichTextBox->Clear();
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	        resultRichTextBox->AppendText("SIZE: " + Environment::NewLine);
	if (sizebutton1->Checked)
		resultRichTextBox->AppendText("Small" + Environment::NewLine);
	else if (sizebutton2->Checked)
		resultRichTextBox->AppendText("Medium" + Environment::NewLine);
	else if (sizebutton3->Checked)
		resultRichTextBox->AppendText("Large" + Environment::NewLine);
	else if (sizebutton4->Checked)
		resultRichTextBox->AppendText("Extra Large" + Environment::NewLine);

	// Check the toppings buttons
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	resultRichTextBox->AppendText("TOPPINGS:" + Environment::NewLine);
	if (toppingsbutton1->Checked)
		resultRichTextBox->AppendText("Pepperoni" + Environment::NewLine);
	if (toppingsbutton2->Checked)
		resultRichTextBox->AppendText("Mushrooms" + Environment::NewLine);
	if (toppingsbutton3->Checked)
		resultRichTextBox->AppendText("Bell peppers" + Environment::NewLine);
	if (toppingsbutton4->Checked)
		resultRichTextBox->AppendText("Pineapple " + Environment::NewLine);
	if (toppingsbutton5->Checked)
		resultRichTextBox->AppendText("Sausage" + Environment::NewLine);
	if (toppingsbutton6->Checked)
		resultRichTextBox->AppendText("Onions" + Environment::NewLine);

	// Check the crust buttons
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	resultRichTextBox->AppendText("CRUST:" + Environment::NewLine);
	if (crust1->Checked)
		resultRichTextBox->AppendText("Thick" + Environment::NewLine);
	else if (crust2->Checked)
		resultRichTextBox->AppendText("Thin" + Environment::NewLine);
}
private: System::Void btnw1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Application::Restart();

}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	Orders^ sif = gcnew Orders();
	sif->Show();
}
private: System::Void submitorder_Click(System::Object^ sender, System::EventArgs^ e) {

	resultRichTextBox->Clear();
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	resultRichTextBox->AppendText("SIZE: " + Environment::NewLine);
	if (sizebutton1->Checked)
		resultRichTextBox->AppendText(" Small" + Environment::NewLine);
	else if (sizebutton2->Checked)
		resultRichTextBox->AppendText(" Medium" + Environment::NewLine);
	else if (sizebutton3->Checked)
		resultRichTextBox->AppendText(" Large" + Environment::NewLine);
	else if (sizebutton4->Checked)
		resultRichTextBox->AppendText(" Extra Large" + Environment::NewLine);

	// Check the toppings buttons
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	resultRichTextBox->AppendText("TOPPINGS:" + Environment::NewLine);
	if (toppingsbutton1->Checked)
		resultRichTextBox->AppendText(" Pepperoni" + Environment::NewLine);
	if (toppingsbutton2->Checked)
		resultRichTextBox->AppendText(" Mushrooms" + Environment::NewLine);
	if (toppingsbutton3->Checked)
		resultRichTextBox->AppendText(" Bell peppers" + Environment::NewLine);
	if (toppingsbutton4->Checked)
		resultRichTextBox->AppendText(" Pineapple " + Environment::NewLine);
	if (toppingsbutton5->Checked)
		resultRichTextBox->AppendText(" Sausage" + Environment::NewLine);
	if (toppingsbutton6->Checked)
		resultRichTextBox->AppendText(" Onions" + Environment::NewLine);

	// Check the crust buttons
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	resultRichTextBox->AppendText("CRUST:" + Environment::NewLine);
	if (crust1->Checked)
		resultRichTextBox->AppendText(" Thick" + Environment::NewLine);
	else if (crust2->Checked)
		resultRichTextBox->AppendText(" Thin" + Environment::NewLine);
	resultRichTextBox->AppendText("---------------------" + Environment::NewLine);
	int  result = System::Convert::ToInt16(Txtbox1->Text) + System::Convert::ToInt16(totaltop->Text) + System::Convert::ToInt16(textBox11->Text);
	resultRichTextBox->AppendText("Total Cost: " + result.ToString());

	String^ orders1;
	bool isValid = true;
	
	if (resultRichTextBox->Text->Trim()->Length > 1)  orders1 = resultRichTextBox->Text;
     else isValid = false;

	MessageBox::Show("Order submitted");

	if (isValid) {
		Orders^ sif = gcnew Orders();
		sif->Show();
	
	}

}
};
}
	