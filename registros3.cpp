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
	
	do{
		cout<<endl<<endl<<"Ingrese un mes: "; cin>>m;
		cout<<"Las personas que cumplen años en el mes "<<m<<" son:";
		for(int j=0; j<n;j++){
			if(p.mes_de_nacimiento[j]==m){
				cout<<endl<<endl<<"Persona "<<j+1<<endl;
				cout<<"Nombre: "<<p.nombre[j];
				cout<<endl<<"Dia de nacimiento: "<<p.dia_de_nacimiento[j];
				cout<<endl<<"Mes de nacimiento: "<<p.mes_de_nacimiento[j];
				cout<<endl<<"Anio de nacimiento: "<<p.anio_de_nacimiento[j];
			}
		}
	} while(m!=0);
	system("pause");
	return 0;
}
