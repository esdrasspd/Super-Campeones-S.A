#pragma once
#include "DB.h"
namespace SuperCampeonesSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Encuentros
	/// </summary>
	public ref class Encuentros : public System::Windows::Forms::Form
	{
	public:
		Encuentros(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Encuentros()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_seleccion_local;
	private: System::Windows::Forms::TextBox^ txt_seleccion_visitante;
	private: System::Windows::Forms::TextBox^ txt_goles_local;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txt_tipo;
	private: System::Windows::Forms::TextBox^ txt_fecha;


	private: System::Windows::Forms::TextBox^ txt_goles_visitante;
	private: System::Windows::Forms::TextBox^ txt_estadio;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Button^ button1;
	private: DB^ data;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Label^ txt_selec;

	private: System::Windows::Forms::DataGridView^ data_gridd;
	private: System::Windows::Forms::TextBox^ txt_arbitro;
	private: System::Windows::Forms::Label^ label8;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->txt_seleccion_local = (gcnew System::Windows::Forms::TextBox());
			this->txt_seleccion_visitante = (gcnew System::Windows::Forms::TextBox());
			this->txt_goles_local = (gcnew System::Windows::Forms::TextBox());
			this->txt_tipo = (gcnew System::Windows::Forms::TextBox());
			this->txt_fecha = (gcnew System::Windows::Forms::TextBox());
			this->txt_goles_visitante = (gcnew System::Windows::Forms::TextBox());
			this->txt_estadio = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->txt_selec = (gcnew System::Windows::Forms::Label());
			this->data_gridd = (gcnew System::Windows::Forms::DataGridView());
			this->txt_arbitro = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_gridd))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_seleccion_local
			// 
			this->txt_seleccion_local->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_seleccion_local->Location = System::Drawing::Point(870, 23);
			this->txt_seleccion_local->Multiline = true;
			this->txt_seleccion_local->Name = L"txt_seleccion_local";
			this->txt_seleccion_local->Size = System::Drawing::Size(313, 49);
			this->txt_seleccion_local->TabIndex = 0;
			// 
			// txt_seleccion_visitante
			// 
			this->txt_seleccion_visitante->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_seleccion_visitante->Location = System::Drawing::Point(870, 80);
			this->txt_seleccion_visitante->Multiline = true;
			this->txt_seleccion_visitante->Name = L"txt_seleccion_visitante";
			this->txt_seleccion_visitante->Size = System::Drawing::Size(313, 49);
			this->txt_seleccion_visitante->TabIndex = 1;
			// 
			// txt_goles_local
			// 
			this->txt_goles_local->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_goles_local->Location = System::Drawing::Point(870, 216);
			this->txt_goles_local->Multiline = true;
			this->txt_goles_local->Name = L"txt_goles_local";
			this->txt_goles_local->Size = System::Drawing::Size(313, 49);
			this->txt_goles_local->TabIndex = 3;
			// 
			// txt_tipo
			// 
			this->txt_tipo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_tipo->Location = System::Drawing::Point(870, 148);
			this->txt_tipo->Multiline = true;
			this->txt_tipo->Name = L"txt_tipo";
			this->txt_tipo->Size = System::Drawing::Size(313, 49);
			this->txt_tipo->TabIndex = 2;
			// 
			// txt_fecha
			// 
			this->txt_fecha->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fecha->Location = System::Drawing::Point(870, 347);
			this->txt_fecha->Multiline = true;
			this->txt_fecha->Name = L"txt_fecha";
			this->txt_fecha->Size = System::Drawing::Size(313, 49);
			this->txt_fecha->TabIndex = 5;
			// 
			// txt_goles_visitante
			// 
			this->txt_goles_visitante->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_goles_visitante->Location = System::Drawing::Point(870, 279);
			this->txt_goles_visitante->Multiline = true;
			this->txt_goles_visitante->Name = L"txt_goles_visitante";
			this->txt_goles_visitante->Size = System::Drawing::Size(313, 49);
			this->txt_goles_visitante->TabIndex = 4;
			// 
			// txt_estadio
			// 
			this->txt_estadio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_estadio->Location = System::Drawing::Point(870, 414);
			this->txt_estadio->Multiline = true;
			this->txt_estadio->Name = L"txt_estadio";
			this->txt_estadio->Size = System::Drawing::Size(313, 49);
			this->txt_estadio->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(699, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 21);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Selección Local";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(685, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 21);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Selección Visitante";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(685, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 21);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Tipo de Encuentro";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(677, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 21);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Goles Equipo Local";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(655, 290);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(197, 21);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Goles Equipo Visitante";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(669, 360);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(183, 21);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Fecha Del Encuentro";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(661, 424);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(191, 21);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Estadio del Encuentro";
			this->label7->Click += gcnew System::EventHandler(this, &Encuentros::label7_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Chartreuse;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(30, 508);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 53);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Encuentros::button1_Click);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::IndianRed;
			this->btn_eliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminar->Location = System::Drawing::Point(227, 508);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(128, 53);
			this->btn_eliminar->TabIndex = 16;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &Encuentros::btn_eliminar_Click);
			// 
			// txt_selec
			// 
			this->txt_selec->AutoSize = true;
			this->txt_selec->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_selec->Location = System::Drawing::Point(376, 528);
			this->txt_selec->Name = L"txt_selec";
			this->txt_selec->Size = System::Drawing::Size(129, 21);
			this->txt_selec->TabIndex = 17;
			this->txt_selec->Text = L"Seleccionado:";
			// 
			// data_gridd
			// 
			this->data_gridd->BackgroundColor = System::Drawing::SystemColors::Info;
			this->data_gridd->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_gridd->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_gridd->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_gridd->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_gridd->Location = System::Drawing::Point(42, 23);
			this->data_gridd->Name = L"data_gridd";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_gridd->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->data_gridd->RowHeadersVisible = false;
			this->data_gridd->RowHeadersWidth = 51;
			this->data_gridd->RowTemplate->Height = 24;
			this->data_gridd->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_gridd->Size = System::Drawing::Size(509, 434);
			this->data_gridd->TabIndex = 32;
			this->data_gridd->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Encuentros::data_gridd_CellClick);
			// 
			// txt_arbitro
			// 
			this->txt_arbitro->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_arbitro->Location = System::Drawing::Point(870, 469);
			this->txt_arbitro->Multiline = true;
			this->txt_arbitro->Name = L"txt_arbitro";
			this->txt_arbitro->Size = System::Drawing::Size(313, 49);
			this->txt_arbitro->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(729, 484);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 21);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Arbitro";
			// 
			// Encuentros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1195, 573);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_arbitro);
			this->Controls->Add(this->data_gridd);
			this->Controls->Add(this->txt_selec);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_estadio);
			this->Controls->Add(this->txt_fecha);
			this->Controls->Add(this->txt_goles_visitante);
			this->Controls->Add(this->txt_goles_local);
			this->Controls->Add(this->txt_tipo);
			this->Controls->Add(this->txt_seleccion_visitante);
			this->Controls->Add(this->txt_seleccion_local);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Encuentros";
			this->Text = L"Encuentros";
			this->Load += gcnew System::EventHandler(this, &Encuentros::Encuentros_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_gridd))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Encuentros_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();

	}
	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->data_gridd->DataSource = this->data->getData3();
		this->data->CerrarConexion();
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->Insertar3(this->txt_seleccion_local->Text, this->txt_seleccion_visitante->Text, this->txt_tipo->Text, this->txt_goles_local->Text, this->txt_goles_visitante->Text, this->txt_fecha->Text, this->txt_estadio->Text, this->txt_arbitro->Text);
		this->data->CerrarConexion();
		this->Consulta();

	}
	private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ no_encuentros = Convert::ToString(data_gridd->SelectedRows[0]->Cells[0]->Value);
		String^ seleccion_local = Convert::ToString(data_gridd->SelectedRows[0]->Cells[1]->Value);
		String^ seleccion_visitante = Convert::ToString(data_gridd->SelectedRows[0]->Cells[2]->Value);
		String^ tipo = Convert::ToString(data_gridd->SelectedRows[0]->Cells[3]->Value);
		String^ goles_local = Convert::ToString(data_gridd->SelectedRows[0]->Cells[4]->Value);
		String^ goles_visitante = Convert::ToString(data_gridd->SelectedRows[0]->Cells[5]->Value);
		String^ fecha = Convert::ToString(data_gridd->SelectedRows[0]->Cells[6]->Value);
		String^ estadio = Convert::ToString(data_gridd->SelectedRows[0]->Cells[7]->Value);
		String^ arbitro = Convert::ToString(data_gridd->SelectedRows[0]->Cells[8]->Value);
		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->Eliminar3(no_encuentros);
		data->CerrarConexion();
		this->Consulta();

	}


private: System::Void data_gridd_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ no_encuentros = Convert::ToString(data_gridd->SelectedRows[0]->Cells[0]->Value);
	txt_selec->Text = "Seleccionado: " + no_encuentros;
}	
};
}
