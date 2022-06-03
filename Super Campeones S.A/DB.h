#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class DB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	DB();
	DataTable^ getData();
	DataTable^ getData2();
	DataTable^ getData3();
	void AbrirConexion();
	void CerrarConexion();
	void Insertar(String^, String^, String^, String^, String^, String^, String^);
	void Insertar2(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
	void Insertar3(String^, String^, String^, String^, String^, String^, String^, String^);
	void Eliminar(String^);
	void Eliminar2(String^);
	void Eliminar3(String^);
};

