#pragma once
#include "car.h"
using namespace std;
namespace kursah {

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checheco;
	private: System::Windows::Forms::CheckBox^  tarifkom;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  PAS;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label3;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checheco = (gcnew System::Windows::Forms::CheckBox());
			this->tarifkom = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PAS = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(500, 417);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(410, 69);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Пуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Location = System::Drawing::Point(76, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Протяженность пути";
			this->textBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseDoubleClick);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox2->Location = System::Drawing::Point(76, 162);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(189, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Время в пути";
			this->textBox2->Visible = false;
			this->textBox2->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox2_MouseDoubleClick_1);
			// 
			// checkBox1
			// 
			this->checkBox1->Location = System::Drawing::Point(76, 132);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(189, 24);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Использовать Яндекс. Карты";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(76, 277);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 27);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Выберите тариф";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checheco
			// 
			this->checheco->Location = System::Drawing::Point(76, 307);
			this->checheco->Name = L"checheco";
			this->checheco->Size = System::Drawing::Size(141, 20);
			this->checheco->TabIndex = 5;
			this->checheco->Text = L"Эконом";
			this->checheco->UseVisualStyleBackColor = true;
			this->checheco->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checheco_CheckedChanged);
			// 
			// tarifkom
			// 
			this->tarifkom->Location = System::Drawing::Point(76, 333);
			this->tarifkom->Name = L"tarifkom";
			this->tarifkom->Size = System::Drawing::Size(141, 20);
			this->tarifkom->TabIndex = 6;
			this->tarifkom->Text = L"Комфорт";
			this->tarifkom->UseVisualStyleBackColor = true;
			this->tarifkom->CheckedChanged += gcnew System::EventHandler(this, &MyForm::tarifkom_CheckedChanged);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(500, 255);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 19);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Итоговая стоимость поездки :";
			// 
			// PAS
			// 
			this->PAS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PAS->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->PAS->Location = System::Drawing::Point(76, 397);
			this->PAS->Name = L"PAS";
			this->PAS->Size = System::Drawing::Size(160, 20);
			this->PAS->TabIndex = 9;
			this->PAS->Text = L"Кол-ва пассажиров";
			this->PAS->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PAS_MouseDoubleClick);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(76, 423);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(127, 17);
			this->radioButton1->TabIndex = 10;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Общая информация";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(76, 446);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(94, 17);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Только такси";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(76, 469);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(190, 17);
			this->radioButton3->TabIndex = 12;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Только общественный транпорт";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(500, 284);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(410, 130);
			this->label3->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 512);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->PAS);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tarifkom);
			this->Controls->Add(this->checheco);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Передвигатор 1.0";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ s;
		String^ time;
		String^ pas;
		double x;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Car^ myC = gcnew Car();
		/*if (checkBox1->Checked) {
			time = textBox2->Text;
			int k = Int32::Parse(time);
			myC->set_time(k);
			double x = myC->bill(k);
			textBox3->Text = x.ToString();
		}*/
		//////////////////////
		pas = PAS->Text;
		int p = Int32::Parse(pas);
		s=textBox1->Text;
		myC->set_pas(p);
		int i = Int32::Parse(s);
		myC->set_S(i);
		//////////////////////
		if (checheco->Checked) {
			tarifkom->Visible = false;
			myC->set_tarif("eco");
		}
		if (tarifkom->Checked) {
			checheco->Visible = false;
			myC->set_tarif("kom");
		}
		if (checkBox1->Checked) {
			time = textBox2->Text;
			int k = Int32::Parse(time);
			myC->set_time(k);
			 x = myC->bill(k);
			//textBox3->Text = x.ToString();
		}
		if (!checkBox1->Checked) {
			 x = myC->bill(0);
			//textBox3->Text = x.ToString();
		}
		if (radioButton1->Checked) {
			label3->Text = " На такси : цена с человека - "+(x / (myC->get_pas())).ToString() + "руб , общая стоимость - " + x + "руб. Стоимость на общественном транпорте с человека - 55 руб" + ", общая стоимость -" + 55*myC->get_pas()+"руб.";
		}
		if (radioButton2->Checked) {
			label3->Text = " На такси : цена с человека - " + (x / myC->get_pas()).ToString() + "руб , общая стоимость - " + x+" руб.";
		}
		if (radioButton3->Checked) {
			label3->Text="Стоимость на общественном транпорте с человека - 55 руб" + ", общая стоимость - " + 55*(myC->get_pas())+" руб.";
		}
	}
	private: System::Void textBox1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		textBox1->Text = "";
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked) {
			textBox2->Visible = true;
			textBox2->Text = "Введите время в пути";
		}
		if (!checkBox1->Checked) {
			textBox2->Visible = false;
		}
	}
	private: System::Void checheco_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checheco->Checked) {
			tarifkom->Visible = false;
		}
		if (!checheco->Checked) {
			tarifkom->Visible = true;
		}
	}
	private: System::Void tarifkom_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (tarifkom->Checked) {
			checheco->Visible = false;

		}
		if (!tarifkom->Checked) {
			checheco->Visible = true;
		}
	}
	private: System::Void textBox2_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		textBox2->Text = "";
	}
	private: System::Void PAS_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		PAS->Text = "";
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton1->Checked) {
			radioButton2->Checked = false;
			radioButton3->Checked = false;
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton2->Checked) {
			radioButton1->Checked = false;
			radioButton3->Checked = false;
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton3->Checked) {
			radioButton2->Checked = false;
			radioButton1->Checked = false;
		}
	}
private: System::Void textBox2_MouseDoubleClick_1(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	textBox2->Text = "";
}
};
}
