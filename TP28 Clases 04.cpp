#include <bits/stdc++.h>
using namespace std;

class Empleado{
	private:
		string Nombre;
		string Apellido;
		string Domicilio;
		int Hijos;
		float Sueldo;
		int Antiguedad;
		
	public:
		Empleado(string nombre, string apellido, string domicilio, int hijos, float sueldo, int antiguedad);
		
		string GetNombre(string nombre);
		string GetApellido(string apellido);
		string GetDomicilio(string domicilio);
		int GetHijos(int hijos);
		float GetSueldo(float sueldo);
		int GetAntiguedad(int antiguedad);
		
		float ObraSocial();
		float Jubilacion();
		float INSSJP();
		
		float SueldoTotal();
};

Empleado::Empleado(string nombre, string apellido, string domicilio, int hijos, float sueldo, int antiguedad){
	Nombre = GetNombre(nombre);
	Apellido = GetApellido(apellido);
	Domicilio = GetDomicilio(domicilio);
	Hijos = GetHijos(hijos);
	Sueldo = GetSueldo(sueldo);
	Antiguedad = GetAntiguedad(antiguedad);
}
		
string Empleado::GetNombre(string nombre){
	Nombre = nombre;
	return Nombre;
}

string Empleado::GetApellido(string apellido){
	Apellido = apellido;
	return Apellido;
}

string Empleado::GetDomicilio(string domicilio){
	Domicilio = domicilio;
	return Domicilio;
}

int Empleado::GetHijos(int hijos){
	Hijos = hijos;
	return hijos;
}

float Empleado::GetSueldo(float sueldo){
	Sueldo = sueldo;
	return Sueldo;
}

int Empleado::GetAntiguedad(int antiguedad){
	Antiguedad = antiguedad;
	return Antiguedad;
}

float Empleado::ObraSocial(){
	float obraSocial = Sueldo * 0.03;
	return obraSocial;
}

float Empleado::Jubilacion(){
	float jubilacion = Sueldo * 0.11;
	return jubilacion;
}

float Empleado::INSSJP(){
	float INSSJP = Sueldo * 0.03;
	return INSSJP;
}

float Empleado::SueldoTotal(){
	float sueldoTotal = Sueldo - ObraSocial() - Jubilacion() - INSSJP();
	return sueldoTotal;
}

int main(){
	string Nombre,Apellido,Domicilio;
	float Antiguedad,Sueldo;
	int Hijos;
	
	cout<<"Ingrese Nombre, Apellido, Domicilio, cantidad de hijos, Sueldo basico y anios de antiguedad"<<endl;
	cin>>Nombre>>Apellido>>Domicilio>>Hijos>>Sueldo>>Antiguedad;
	
	Empleado empleado(Nombre,Apellido,Domicilio,Hijos,Sueldo,Antiguedad);
	
	cout<<endl<<"Nombre: "<<empleado.GetNombre(Nombre)<<endl;
	cout<<"Apellido: "<<empleado.GetApellido(Apellido)<<endl;
	cout<<"Domicilio: "<<empleado.GetDomicilio(Domicilio)<<endl;
	cout<<"cantidad de hijos: "<<empleado.GetHijos(Hijos)<<" hijos"<<endl;
	cout<<"Sueldo basico: "<<empleado.GetSueldo(Sueldo)<<"$"<<endl;
	cout<<"Anios de antiguedad: "<<empleado.GetAntiguedad(Antiguedad)<<" anios"<<endl<<endl;
	
	cout<<"Sueldo Final: "<<empleado.SueldoTotal()<<"$"<<endl;
	return 0;
}
