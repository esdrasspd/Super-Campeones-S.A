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
	/// Resumen de Selecciones
	/// </summary>
	public ref class Selecciones : public System::Windows::Forms::Form
	{
	public:
		Selecciones(void)
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
		~Selecciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_pais;
	protected:
	private: System::Windows::Forms::TextBox^ txt_estadio;
	private: System::Windows::Forms::TextBox^ txt_fisioterapeuta;
	private: System::Windows::Forms::TextBox^ txt_tecnico;
	private: System::Windows::Forms::TextBox^ txt_ranking;
	private: System::Windows::Forms::TextBox^ txt_confederacion;
	private: System::Windows::Forms::TextBox^ txt_entrenador_porteros;
	private: System::Windows::Forms::Button^ btn_guardar;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ data_grid;

	private: DB^ data;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Label^ label_pais;


		   /// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->txt_pais = (gcnew System::Windows::Forms::TextBox());
			this->txt_estadio = (gcnew System::Windows::Forms::TextBox());
			this->txt_fisioterapeuta = (gcnew System::Windows::Forms::TextBox());
			this->txt_tecnico = (gcnew System::Windows::Forms::TextBox());
			this->txt_ranking = (gcnew System::Windows::Forms::TextBox());
			this->txt_confederacion = (gcnew System::Windows::Forms::TextBox());
			this->txt_entrenador_porteros = (gcnew System::Windows::Forms::TextBox());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->label_pais = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_pais
			// 
			this->txt_pais->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pais->Location = System::Drawing::Point(870, 38);
			this->txt_pais->Multiline = true;
			this->txt_pais->Name = L"txt_pais";
			this->txt_pais->Size = System::Drawing::Size(308, 45);
			this->txt_pais->TabIndex = 0;
			this->txt_pais->TextChanged += gcnew System::EventHandler(this, &Selecciones::txt_pais_TextChanged);
			// 
			// txt_estadio
			// 
			this->txt_estadio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_estadio->Location = System::Drawing::Point(870, 113);
			this->txt_estadio->Multiline = true;
			this->txt_estadio->Name = L"txt_estadio";
			this->txt_estadio->Size = System::Drawing::Size(308, 45);
			this->txt_estadio->TabIndex = 1;
			// 
			// txt_fisioterapeuta
			// 
			this->txt_fisioterapeuta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fisioterapeuta->Location = System::Drawing::Point(870, 260);
			this->txt_fisioterapeuta->Multiline = true;
			this->txt_fisioterapeuta->Name = L"txt_fisioterapeuta";
			this->txt_fisioterapeuta->Size = System::Drawing::Size(308, 45);
			this->txt_fisioterapeuta->TabIndex = 3;
			this->txt_fisioterapeuta->TextChanged += gcnew System::EventHandler(this, &Selecciones::txt_fisioterapeuta_TextChanged);
			// 
			// txt_tecnico
			// 
			this->txt_tecnico->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_tecnico->Location = System::Drawing::Point(870, 185);
			this->txt_tecnico->Multiline = true;
			this->txt_tecnico->Name = L"txt_tecnico";
			this->txt_tecnico->Size = System::Drawing::Size(308, 45);
			this->txt_tecnico->TabIndex = 2;
			this->txt_tecnico->TextChanged += gcnew System::EventHandler(this, &Selecciones::txt_tecnico_TextChanged);
			// 
			// txt_ranking
			// 
			this->txt_ranking->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ranking->Location = System::Drawing::Point(870, 493);
			this->txt_ranking->Multiline = true;
			this->txt_ranking->Name = L"txt_ranking";
			this->txt_ranking->Size = System::Drawing::Size(308, 45);
			this->txt_ranking->TabIndex = 6;
			this->txt_ranking->TextChanged += gcnew System::EventHandler(this, &Selecciones::txt_ranking_TextChanged);
			// 
			// txt_confederacion
			// 
			this->txt_confederacion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_confederacion->Location = System::Drawing::Point(870, 418);
			this->txt_confederacion->Multiline = true;
			this->txt_confederacion->Name = L"txt_confederacion";
			this->txt_confederacion->Size = System::Drawing::Size(308, 45);
			this->txt_confederacion->TabIndex = 5;
			this->txt_confederacion->TextChanged += gcnew System::EventHandler(this, &Selecciones::txt_confederacion_TextChanged);
			// 
			// txt_entrenador_porteros
			// 
			this->txt_entrenador_porteros->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_entrenador_porteros->Location = System::Drawing::Point(870, 337);
			this->txt_entrenador_porteros->Multiline = true;
			this->txt_entrenador_porteros->Name = L"txt_entrenador_porteros";
			this->txt_entrenador_porteros->Size = System::Drawing::Size(308, 45);
			this->txt_entrenador_porteros->TabIndex = 4;
			this->txt_entrenador_porteros->TextChanged += gcnew System::EventHandler(this, &Selecciones::txt_entrenador_porteros_TextChanged);
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::SpringGreen;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->Location = System::Drawing::Point(1, 484);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(183, 54);
			this->btn_guardar->TabIndex = 7;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Selecciones::btn_guardar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(749, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 21);
			this->label1->TabIndex = 8;
			this->label1->Text = L"País";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(738, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 21);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Estadio";
			this->label2->Click += gcnew System::EventHandler(this, &Selecciones::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(734, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 21);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Técnico";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(709, 274);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 21);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Fisioterapeuta";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(679, 350);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(183, 21);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Entrenador Porteros";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(697, 428);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 21);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Confederación";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(740, 505);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 21);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Ranking";
			// 
			// data_grid
			// 
			this->data_grid->BackgroundColor = System::Drawing::SystemColors::Info;
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_grid->Location = System::Drawing::Point(12, 23);
			this->data_grid->Name = L"data_grid";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->data_grid->RowHeadersVisible = false;
			this->data_grid->RowHeadersWidth = 51;
			this->data_grid->RowTemplate->Height = 24;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(665, 452);
			this->data_grid->TabIndex = 15;
			this->data_grid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Selecciones::data_grid_CellClick);
			this->data_grid->DoubleClick += gcnew System::EventHandler(this, &Selecciones::data_grid_DoubleClick);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::IndianRed;
			this->btn_eliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminar->Location = System::Drawing::Point(190, 484);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(183, 54);
			this->btn_eliminar->TabIndex = 16;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &Selecciones::btn_eliminar_Click);
			// 
			// label_pais
			// 
			this->label_pais->AutoSize = true;
			this->label_pais->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pais->Location = System::Drawing::Point(379, 498);
			this->label_pais->Name = L"label_pais";
			this->label_pais->Size = System::Drawing::Size(129, 21);
			this->label_pais->TabIndex = 17;
			this->label_pais->Text = L"Seleccionado:";
			this->label_pais->Click += gcnew System::EventHandler(this, &Selecciones::label8_Click);
			// 
			// Selecciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1195, 573);
			this->Controls->Add(this->label_pais);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->data_grid);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->txt_ranking);
			this->Controls->Add(this->txt_confederacion);
			this->Controls->Add(this->txt_entrenador_porteros);
			this->Controls->Add(this->txt_fisioterapeuta);
			this->Controls->Add(this->txt_tecnico);
			this->Controls->Add(this->txt_estadio);
			this->Controls->Add(this->txt_pais);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Selecciones";
			this->Text = L"Selecciones";
			this->Load += gcnew System::EventHandler(this, &Selecciones::Selecciones_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txt_ranking_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_confederacion_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_entrenador_porteros_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_fisioterapeuta_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_tecnico_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Selecciones_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();
}

public: void Consulta()
{
	this->data->AbrirConexion();
	this->data_grid->DataSource = this->data->getData();
	this->data->CerrarConexion();
}
private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion();
	this->data->Insertar(this->txt_pais->Text, this->txt_estadio->Text, this->txt_tecnico->Text, this->txt_fisioterapeuta->Text, this->txt_entrenador_porteros->Text, this->txt_confederacion->Text, this->txt_ranking->Text);
	this->data->CerrarConexion();
	this->Consulta();

}
private: System::Void txt_pais_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void data_grid_DoubleClick(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ no_seleccion = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ pais = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	String^ estadio = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
	String^ tecnico = Convert::ToString(data_grid->SelectedRows[0]->Cells[3]->Value);
	String^ fisioterapeuta = Convert::ToString(data_grid->SelectedRows[0]->Cells[4]->Value);
	String^ entrenador = Convert::ToString(data_grid->SelectedRows[0]->Cells[5]->Value);
	String^ confederacion = Convert::ToString(data_grid->SelectedRows[0]->Cells[6]->Value);
	String^ ranking = Convert::ToString(data_grid->SelectedRows[0]->Cells[7]->Value);
	DB^ data = gcnew DB();
	data->AbrirConexion();
	data->Eliminar(no_seleccion);
	data->CerrarConexion();
	this->Consulta();

}
private: System::Void data_grid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	String^ pais = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	label_pais->Text = "Seleccionado: " + pais;
}
};
}
