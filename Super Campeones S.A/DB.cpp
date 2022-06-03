#include "pch.h"
#include "DB.h"

DB::DB()
{
	this->connectionString = "datasource=localhost; username=root; password=root; database=supercampeonesdb;";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

void DB::AbrirConexion()
{
	this->conn->Open();
}

void DB::CerrarConexion()
{
	this->conn->Close();
}

DataTable^ DB::getData()
{
	String^ sql = "select * from selecciones";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::Insertar(String^ pais, String^ estadio, String^ tecnico, String^ fisioterapeuta, String^ entrenador, String^ confederacion, String^ ranking)
{
	String^ sql = "insert into  selecciones(Pais, Estadio, Tecnico, Fisioterapeuta, Entrenador_porteros, Confederacion, Ranking) values ('" + pais + "','" + estadio + "','" + tecnico + "', '" + fisioterapeuta + "', '" + entrenador + "', '" + confederacion + "', " + ranking + ")";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::Eliminar(String^ no_seleccion) {
	String^ sql = "delete from selecciones where No_seleccion = "+no_seleccion+"";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		MessageBox::Show("Eliminado correctamente");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::getData2()
{
	String^ sql = "select * from jugadores";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::Insertar2(String^ nombre, String^ numero_camisola, String^ posicion, String^ edad, String^ habilidades, String^ pierna_habil, String^ nacionalizado, String^ equipo, String^ division, String^ patrocinador, String^ valor, String^ id_seleccion)
{
	String^ sql = "insert into  jugadores(Nombre, Numero_camisola, Posicion, Edad, Habilidades, Pierna_habil, Nacionalizado, Equipo, Division, Patrocinador, Valor, id_seleccion) values ('"+nombre+ "',"+numero_camisola+",'"+posicion+"',"+edad+",'"+habilidades+"','"+pierna_habil+"','"+nacionalizado+"','"+equipo+"','"+division+"','"+patrocinador+"',"+valor+","+id_seleccion+")";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::Eliminar2(String^ no_jugador) {
	String^ sql = "delete from jugadores where No_jugador = "+no_jugador+"";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		MessageBox::Show("Eliminado correctamente");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::getData3()
{
	String^ sql = "select * from encuentros";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::Insertar3(String^ seleccion_local, String^ seleccion_visitante, String^ tipo_de_encuentro, String^ goles_local, String^ goles_visitante, String^ fecha, String^ estadio, String^ arbitro)
{
	String^ sql = "insert into  encuentros(seleccion_local, seleccion_visitante, tipo_de_encuentro, goles_local, goles_visitante, fecha, estadio, arbitro) values ('"+seleccion_local+"','"+seleccion_visitante+"','"+tipo_de_encuentro+"',"+goles_local+","+goles_visitante+",'"+fecha+"','"+estadio+"','"+arbitro+"')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
void DB::Eliminar3(String^ no_encuentros) {
	String^ sql = "delete from encuentros where no_encuentros = "+no_encuentros+"";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		MessageBox::Show("Eliminado correctamente");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
