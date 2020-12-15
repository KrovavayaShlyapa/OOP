#pragma once
#include"Classes.h"
namespace Factorial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
public ref class Song {
public:
	String^ Author;
	String^ Album;
	String^ Name;
	String^ Genre;
	String^ Singers;
	int Year;
	int Duration;
	int Rating;
	int Plays;
	Song(String^ g, String^ c, String^ a, String^ s, String^ b, int y, int d) {
		Author = a;
		Album = b;// Если альбома нет - None 
		Singers = s;
		Name = c;
		Year = y;
		Genre = g;
		Duration = d;
		Rating = d;
		Plays = 0;
	};
	void PlaySong(Song^ a) {
		a->Rating += 0.05;
	};
	void Reset() {
		this->Rating = 0;
	}

};
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
	protected:
	protected:
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ Start;
	private: System::Windows::Forms::Label^ HitParadeLabel;
	private: System::Windows::Forms::Label^ RequestsLabel;
	private: System::Windows::Forms::Label^ CatalogLabel;


	private: System::Windows::Forms::Button^ ButtonStatistics;
	private: System::Windows::Forms::Button^ ButtonStep;
	private: System::Windows::Forms::DataGridView^ HitParade;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridView^ Requests;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridView^ Catalog;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;
	private:
	private: System::Collections::Generic::LinkedList<Song^> lst;
	private: System::Collections::Generic::LinkedListNode <Song^>^ node;
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{

			this->components = (gcnew System::ComponentModel::Container());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->ButtonStep = (gcnew System::Windows::Forms::Button());
			this->ButtonStatistics = (gcnew System::Windows::Forms::Button());
			this->CatalogLabel = (gcnew System::Windows::Forms::Label());
			this->RequestsLabel = (gcnew System::Windows::Forms::Label());
			this->HitParadeLabel = (gcnew System::Windows::Forms::Label());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Requests = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HitParade = (gcnew System::Windows::Forms::DataGridView());
			this->Catalog = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Requests))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HitParade))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Catalog))->BeginInit();
			this->SuspendLayout();
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(702, 433);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Rock";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(783, 433);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Hip-hop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(780, 491);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Rap";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(783, 462);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Metal";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(702, 462);
			this->button5->Name = L"button5";
			this->button5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Classic";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// Start
			// 
			this->Start->Location = System::Drawing::Point(702, 21);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(156, 44);
			this->Start->TabIndex = 6;
			this->Start->Text = L"Start Working";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(702, 491);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Bass";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// ButtonStep
			// 
			this->ButtonStep->Location = System::Drawing::Point(731, 71);
			this->ButtonStep->Name = L"ButtonStep";
			this->ButtonStep->Size = System::Drawing::Size(97, 34);
			this->ButtonStep->TabIndex = 10;
			this->ButtonStep->Text = L"Шаг моделирования";
			this->ButtonStep->UseVisualStyleBackColor = true;
			// 
			// ButtonStatistics
			// 
			this->ButtonStatistics->Location = System::Drawing::Point(731, 111);
			this->ButtonStatistics->Name = L"ButtonStatistics";
			this->ButtonStatistics->Size = System::Drawing::Size(97, 34);
			this->ButtonStatistics->TabIndex = 11;
			this->ButtonStatistics->Text = L"Статистика";
			this->ButtonStatistics->UseVisualStyleBackColor = true;
			// 
			// CatalogLabel
			// 
			this->CatalogLabel->AutoSize = true;
			this->CatalogLabel->Location = System::Drawing::Point(12, 20);
			this->CatalogLabel->Name = L"CatalogLabel";
			this->CatalogLabel->Size = System::Drawing::Size(43, 13);
			this->CatalogLabel->TabIndex = 12;
			this->CatalogLabel->Text = L"Catalog";
			// 
			// RequestsLabel
			// 
			this->RequestsLabel->AutoSize = true;
			this->RequestsLabel->Location = System::Drawing::Point(12, 211);
			this->RequestsLabel->Name = L"RequestsLabel";
			this->RequestsLabel->Size = System::Drawing::Size(52, 13);
			this->RequestsLabel->TabIndex = 13;
			this->RequestsLabel->Text = L"Requests";
			// 
			// HitParadeLabel
			// 
			this->HitParadeLabel->AutoSize = true;
			this->HitParadeLabel->Location = System::Drawing::Point(12, 399);
			this->HitParadeLabel->Name = L"HitParadeLabel";
			this->HitParadeLabel->Size = System::Drawing::Size(57, 13);
			this->HitParadeLabel->TabIndex = 14;
			this->HitParadeLabel->Text = L"Hit Parade";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Рейтинг";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Длительность";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Год";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Альбом";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Исполнители";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Автор";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Название";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Жанр";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// Requests
			// 
			this->Requests->AllowUserToAddRows = false;
			this->Requests->AllowUserToResizeColumns = false;
			this->Requests->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Requests->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Requests->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8
			});
			this->Requests->Location = System::Drawing::Point(12, 227);
			this->Requests->Name = L"Requests";
			this->Requests->ReadOnly = true;
			this->Requests->Size = System::Drawing::Size(684, 162);
			this->Requests->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"Рейтинг";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Длительность";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Год";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Альбом";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Исполнители";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Автор";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Название";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Жанр";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// HitParade
			// 
			this->HitParade->AllowUserToAddRows = false;
			this->HitParade->AllowUserToResizeColumns = false;
			this->HitParade->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->HitParade->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->HitParade->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16
			});
			this->HitParade->Location = System::Drawing::Point(12, 415);
			this->HitParade->Name = L"HitParade";
			this->HitParade->Size = System::Drawing::Size(684, 120);
			this->HitParade->TabIndex = 9;
			// 
			// Catalog
			// 
			this->Catalog->AllowUserToAddRows = false;
			this->Catalog->AllowUserToResizeColumns = false;
			this->Catalog->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Catalog->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Catalog->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn17,
					this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19, this->dataGridViewTextBoxColumn20, this->dataGridViewTextBoxColumn21,
					this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24
			});
			this->Catalog->Location = System::Drawing::Point(12, 36);
			this->Catalog->Name = L"Catalog";
			this->Catalog->ReadOnly = true;
			this->Catalog->Size = System::Drawing::Size(684, 162);
			this->Catalog->TabIndex = 15;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"Жанр";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"Название";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"Автор";
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"Исполнители";
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"Альбом";
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->HeaderText = L"Год";
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			this->dataGridViewTextBoxColumn22->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"Длительность";
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			this->dataGridViewTextBoxColumn23->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"Рейтинг";
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			this->dataGridViewTextBoxColumn24->ReadOnly = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(728, 151);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 16;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(728, 203);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(728, 177);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(699, 154);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"K";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(699, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"M";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(700, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 13);
			this->label3->TabIndex = 22;
			this->label3->Text = L"N";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(728, 298);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 50);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Random Request";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 565);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Catalog);
			this->Controls->Add(this->HitParadeLabel);
			this->Controls->Add(this->RequestsLabel);
			this->Controls->Add(this->CatalogLabel);
			this->Controls->Add(this->ButtonStatistics);
			this->Controls->Add(this->ButtonStep);
			this->Controls->Add(this->HitParade);
			this->Controls->Add(this->Requests);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Factorial";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Requests))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HitParade))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Catalog))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
					  System::IO::StreamReader^ inFile = gcnew System::IO::StreamReader("input.txt");
					  String^ line;
					  int rowIndex = 0;
					  while ((line = inFile->ReadLine()) != nullptr)
					  {
						  cli::array<String^>^ temp = line->Split(' ');
						  this->Catalog->Rows->Add();
						  for (int i = 0; i < temp->Length; ++i)
						  {
							  this->Catalog->Rows[rowIndex]->Cells[i]->Value = temp[i];
						  }
						  ++rowIndex;
						  int z;
						  int d;
						  bool res;
						  bool res2;
						  res = Int32::TryParse(temp[5], z);
						  res2 = Int32::TryParse(temp[6], d);
						  Song^ a = gcnew Song(temp[0], temp[1], temp[2], temp[3], temp[4], z, d);
						  lst.AddLast(a);

					  }
		}

#pragma endregion
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < Catalog->RowCount; i++)
		{
			System::String^ lineRating;//проверка рейтинга
			lineRating = Catalog[7, i]->Value->ToString();
			double rating;
			bool z = Double::TryParse(lineRating, rating);
			if (z && (rating < 0 || rating>1.00)) {
				this->Catalog->Rows->Remove(this->Catalog->Rows[i]);
				i--;
			}

		}
	}
	private: System::Void Catalog_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->HitParade->RowCount = 0;
		int cnt = 0;
		for (int i = 0; i < Catalog->RowCount; i++)
		{
			System::String^ tempstr = Catalog[7, i]->Value->ToString();
			System::String^ tempstr2 = Catalog[0, i]->Value->ToString();
			double rate;
			bool x = Double::TryParse(tempstr, rate);
			if (rate >= 0.7 && tempstr2 == "Rock") {
				this->HitParade->Rows->Add();
				for (int j = 0; j < this->Catalog->ColumnCount; j++) {
					this->HitParade[j, cnt]->Value = this->Catalog[j, i]->Value;
				}
				cnt++;
			}

		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->HitParade->RowCount = 0;
		int cnt = 0;
		for (int i = 0; i < Catalog->RowCount; i++)
		{
			System::String^ tempstr = Catalog[7, i]->Value->ToString();
			System::String^ tempstr2 = Catalog[0, i]->Value->ToString();
			double rate;
			bool x = Double::TryParse(tempstr, rate);
			if (rate >= 0.7 && tempstr2 == "Hip-Hop") {
				this->HitParade->Rows->Add();
				for (int j = 0; j < this->Catalog->ColumnCount; j++) {
					this->HitParade[j, cnt]->Value = this->Catalog[j, i]->Value;
				}
				cnt++;
			}

		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->HitParade->RowCount = 0;
		int cnt = 0;
		for (int i = 0; i < Catalog->RowCount; i++)
		{
			System::String^ tempstr = Catalog[7, i]->Value->ToString();
			System::String^ tempstr2 = Catalog[0, i]->Value->ToString();
			double rate;
			bool x = Double::TryParse(tempstr, rate);
			if (rate >= 0.7 && tempstr2 == "Classic") {
				this->HitParade->Rows->Add();
				for (int j = 0; j < this->Catalog->ColumnCount; j++) {
					this->HitParade[j, cnt]->Value = this->Catalog[j, i]->Value;
				}
				cnt++;
			}

		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->HitParade->RowCount = 0;
		int cnt = 0;
		for (int i = 0; i < Catalog->RowCount; i++)
		{
			System::String^ tempstr = Catalog[7, i]->Value->ToString();
			System::String^ tempstr2 = Catalog[0, i]->Value->ToString();
			double rate;
			bool x = Double::TryParse(tempstr, rate);
			if (rate >= 0.7 && tempstr2 == "Metal") {
				this->HitParade->Rows->Add();
				for (int j = 0; j < this->Catalog->ColumnCount; j++) {
					this->HitParade[j, cnt]->Value = this->Catalog[j, i]->Value;
				}
				cnt++;
			}

		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->HitParade->RowCount = 0;
		int cnt = 0;
		for (int i = 0; i < Catalog->RowCount; i++)
		{
			System::String^ tempstr = Catalog[7, i]->Value->ToString();
			System::String^ tempstr2 = Catalog[0, i]->Value->ToString();
			double rate;
			bool x = Double::TryParse(tempstr, rate);
			if (rate >= 0.7 && tempstr2 == "Bass") {
				this->HitParade->Rows->Add();
				for (int j = 0; j < this->Catalog->ColumnCount; j++) {
					this->HitParade[j, cnt]->Value = this->Catalog[j, i]->Value;
				}
				cnt++;
			}

		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->HitParade->RowCount = 0;
		int cnt = 0;
		for (int i = 0; i < Catalog->RowCount; i++)
		{
			System::String^ tempstr = Catalog[7, i]->Value->ToString();
			System::String^ tempstr2 = Catalog[0, i]->Value->ToString();
			double rate;
			bool x = Double::TryParse(tempstr, rate);
			if (rate >= 0.7 && tempstr2 == "Rap") {
				this->HitParade->Rows->Add();
				for (int j = 0; j < this->Catalog->ColumnCount; j++) {
					this->HitParade[j, cnt]->Value = this->Catalog[j, i]->Value;
				}
				cnt++;
			}

		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = rand() % this->Catalog->RowCount;
		this->Requests->Rows->Add();
		for (int j = 0; j < this->Catalog->ColumnCount; j++) {
			this->Requests[j, this->Requests->RowCount - 1]->Value = this->Catalog[j, index - 1]->Value;
		}
	}

};
}
