//registros3.cpp
//Nina Estuco, William André
#include <iostream>
#include <string>
using namespace std;

struct personas{
	string nombre[1000];
	int dia_de_nacimiento[100];
	int mes_de_nacimiento[100];
	int anio_de_nacimiento[100];
};

int main(){
	int n, m;
	cout<<endl<<"Cantidad de personas: "; cin>>n;
	personas p;
	
	for(int i=0; i<n; i++){
		cout<<endl<<endl<<"Persona "<<i+1;
		cout<<endl<<"Nombre: "; cin>>p.nombre[i];
		cout<<"Dia de nacimiento: "; cin>>p.dia_de_nacimiento[i];
		cout<<"Mes de nacimiento: "; cin>>p.mes_de_nacimiento[i];
		cout<<"Anio de nacimiento: "; cin>>p.anio_de_nacimiento[i];
	}
	system("pause");
	return 0;
}
