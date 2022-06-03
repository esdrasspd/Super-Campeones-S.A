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
	/// Resumen de Jugadores
	/// </summary>
	public ref class Jugadores : public System::Windows::Forms::Form
	{
	public:
		Jugadores(void)
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
		~Jugadores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_patrocinador;
	protected:

	private: System::Windows::Forms::TextBox^ txt_division;
	protected:

	private: System::Windows::Forms::TextBox^ txt_equipo;

	private: System::Windows::Forms::TextBox^ txt_nacionalizado;
	private: System::Windows::Forms::TextBox^ txt_id;


	private: System::Windows::Forms::TextBox^ txt_valor;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_pierna;

	private: System::Windows::Forms::TextBox^ txt_habilidades;

	private: System::Windows::Forms::TextBox^ txt_edad;

	private: System::Windows::Forms::TextBox^ txt_posicion;

	private: System::Windows::Forms::TextBox^ txt_camisola;

	private: System::Windows::Forms::TextBox^ txt_nombre;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::DataGridView^ data_grid;
	private: DB^ data;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Label^ txt_user;







	protected:

	private:
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
			this->txt_patrocinador = (gcnew System::Windows::Forms::TextBox());
			this->txt_division = (gcnew System::Windows::Forms::TextBox());
			this->txt_equipo = (gcnew System::Windows::Forms::TextBox());
			this->txt_nacionalizado = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_valor = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_pierna = (gcnew System::Windows::Forms::TextBox());
			this->txt_habilidades = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->txt_posicion = (gcnew System::Windows::Forms::TextBox());
			this->txt_camisola = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->txt_user = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_patrocinador
			// 
			this->txt_patrocinador->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_patrocinador->Location = System::Drawing::Point(996, 279);
			this->txt_patrocinador->Multiline = true;
			this->txt_patrocinador->Name = L"txt_patrocinador";
			this->txt_patrocinador->Size = System::Drawing::Size(187, 46);
			this->txt_patrocinador->TabIndex = 7;
			// 
			// txt_division
			// 
			this->txt_division->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_division->Location = System::Drawing::Point(996, 200);
			this->txt_division->Multiline = true;
			this->txt_division->Name = L"txt_division";
			this->txt_division->Size = System::Drawing::Size(187, 46);
			this->txt_division->TabIndex = 6;
			// 
			// txt_equipo
			// 
			this->txt_equipo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_equipo->Location = System::Drawing::Point(996, 121);
			this->txt_equipo->Multiline = true;
			this->txt_equipo->Name = L"txt_equipo";
			this->txt_equipo->Size = System::Drawing::Size(187, 46);
			this->txt_equipo->TabIndex = 5;
			// 
			// txt_nacionalizado
			// 
			this->txt_nacionalizado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nacionalizado->Location = System::Drawing::Point(996, 48);
			this->txt_nacionalizado->Multiline = true;
			this->txt_nacionalizado->Name = L"txt_nacionalizado";
			this->txt_nacionalizado->Size = System::Drawing::Size(187, 46);
			this->txt_nacionalizado->TabIndex = 4;
			// 
			// txt_id
			// 
			this->txt_id->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_id->Location = System::Drawing::Point(996, 438);
			this->txt_id->Multiline = true;
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(187, 46);
			this->txt_id->TabIndex = 9;
			// 
			// txt_valor
			// 
			this->txt_valor->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_valor->Location = System::Drawing::Point(996, 359);
			this->txt_valor->Multiline = true;
			this->txt_valor->Name = L"txt_valor";
			this->txt_valor->Size = System::Drawing::Size(187, 46);
			this->txt_valor->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(543, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 21);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre";
			// 
			// txt_pierna
			// 
			this->txt_pierna->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pierna->Location = System::Drawing::Point(654, 438);
			this->txt_pierna->Multiline = true;
			this->txt_pierna->Name = L"txt_pierna";
			this->txt_pierna->Size = System::Drawing::Size(187, 46);
			this->txt_pierna->TabIndex = 16;
			// 
			// txt_habilidades
			// 
			this->txt_habilidades->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_habilidades->Location = System::Drawing::Point(654, 359);
			this->txt_habilidades->Multiline = true;
			this->txt_habilidades->Name = L"txt_habilidades";
			this->txt_habilidades->Size = System::Drawing::Size(187, 46);
			this->txt_habilidades->TabIndex = 15;
			// 
			// txt_edad
			// 
			this->txt_edad->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_edad->Location = System::Drawing::Point(654, 279);
			this->txt_edad->Multiline = true;
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(187, 46);
			this->txt_edad->TabIndex = 14;
			// 
			// txt_posicion
			// 
			this->txt_posicion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_posicion->Location = System::Drawing::Point(654, 200);
			this->txt_posicion->Multiline = true;
			this->txt_posicion->Name = L"txt_posicion";
			this->txt_posicion->Size = System::Drawing::Size(187, 46);
			this->txt_posicion->TabIndex = 13;
			// 
			// txt_camisola
			// 
			this->txt_camisola->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_camisola->Location = System::Drawing::Point(654, 121);
			this->txt_camisola->Multiline = true;
			this->txt_camisola->Name = L"txt_camisola";
			this->txt_camisola->Size = System::Drawing::Size(187, 46);
			this->txt_camisola->TabIndex = 12;
			// 
			// txt_nombre
			// 
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(654, 48);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(187, 46);
			this->txt_nombre->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(528, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 21);
			this->label2->TabIndex = 17;
			this->label2->Text = L"No. Camisola";
			this->label2->Click += gcnew System::EventHandler(this, &Jugadores::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(543, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 21);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Posicion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(544, 289);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 21);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Edad";
			this->label4->Click += gcnew System::EventHandler(this, &Jugadores::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(528, 370);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 21);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Habilidades";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(543, 437);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 21);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Pierna";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(546, 463);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 21);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Habil";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(853, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 21);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Nacionalizado";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(881, 136);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 21);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Equipo";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(881, 214);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 21);
			this->label10->TabIndex = 25;
			this->label10->Text = L"División";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(859, 290);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 21);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Patrocinador";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(887, 348);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 21);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Valor";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(851, 374);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(139, 21);
			this->label13->TabIndex = 28;
			this->label13->Text = L"En Mercado (€)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(867, 452);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(111, 21);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Id Selección";
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::LawnGreen;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->Location = System::Drawing::Point(13, 492);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(166, 49);
			this->btn_guardar->TabIndex = 30;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Jugadores::btn_guardar_Click);
			// 
			// data_grid
			// 
			this->data_grid->BackgroundColor = System::Drawing::SystemColors::Info;
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_grid->Location = System::Drawing::Point(13, 24);
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
			this->data_grid->Size = System::Drawing::Size(509, 434);
			this->data_grid->TabIndex = 31;
			this->data_grid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Jugadores::data_grid_CellClick);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::IndianRed;
			this->btn_eliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminar->Location = System::Drawing::Point(216, 492);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(180, 49);
			this->btn_eliminar->TabIndex = 32;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &Jugadores::btn_eliminar_Click);
			// 
			// txt_user
			// 
			this->txt_user->AutoSize = true;
			this->txt_user->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_user->Location = System::Drawing::Point(407, 511);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(129, 21);
			this->txt_user->TabIndex = 33;
			this->txt_user->Text = L"Seleccionado:";
			// 
			// Jugadores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1195, 573);
			this->Controls->Add(this->txt_user);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->data_grid);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_pierna);
			this->Controls->Add(this->txt_habilidades);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->txt_posicion);
			this->Controls->Add(this->txt_camisola);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->txt_valor);
			this->Controls->Add(this->txt_patrocinador);
			this->Controls->Add(this->txt_division);
			this->Controls->Add(this->txt_equipo);
			this->Controls->Add(this->txt_nacionalizado);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Jugadores";
			this->Text = L"Jugadores";
			this->Load += gcnew System::EventHandler(this, &Jugadores::Jugadores_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Jugadores_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();

}
public: void Consulta()
{
	this->data->AbrirConexion();
	this->data_grid->DataSource = this->data->getData2();
	this->data->CerrarConexion();
}


private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion();
	this->data->Insertar2(this->txt_nombre->Text, this->txt_camisola->Text, this->txt_posicion->Text, this->txt_edad->Text, this->txt_habilidades->Text, this->txt_pierna->Text, this->txt_nacionalizado->Text, this->txt_equipo->Text, this->txt_division->Text, this->txt_patrocinador->Text, this->txt_valor->Text, this->txt_id->Text);
	this->data->CerrarConexion();
	this->Consulta();
}
private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ no_jugador = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ nombre = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	String^ numero_camisola = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
	String^ posicion = Convert::ToString(data_grid->SelectedRows[0]->Cells[3]->Value);
	String^ edad = Convert::ToString(data_grid->SelectedRows[0]->Cells[4]->Value);
	String^ habilidades = Convert::ToString(data_grid->SelectedRows[0]->Cells[5]->Value);
	String^ pierna_habil = Convert::ToString(data_grid->SelectedRows[0]->Cells[6]->Value);
	String^ nacionalizado = Convert::ToString(data_grid->SelectedRows[0]->Cells[7]->Value);
	String^ equipo = Convert::ToString(data_grid->SelectedRows[0]->Cells[8]->Value);
	String^ division = Convert::ToString(data_grid->SelectedRows[0]->Cells[9]->Value);
	String^ patrocinador = Convert::ToString(data_grid->SelectedRows[0]->Cells[10]->Value);
	String^ valor = Convert::ToString(data_grid->SelectedRows[0]->Cells[11]->Value);
	String^ id_seleccion = Convert::ToString(data_grid->SelectedRows[0]->Cells[12]->Value);
	DB^ data = gcnew DB();
	data->AbrirConexion();
	data->Eliminar2(no_jugador);
	data->CerrarConexion();
	this->Consulta();
}
private: System::Void data_grid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ nombre = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	txt_user->Text = "Seleccionado: " + nombre;
}
};
}
