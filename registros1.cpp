//registros1.cpp
//Nina Estuco, William André
#include <iostream>
#include <string>
using namespace std;

struct empleado{
	string nombre[200];
	char sexo[100];
	float sueldo[100];
};
	
int main(){
	empleado E;
	int n, SMa=0, SMe=9999;
	cout<<endl<<"Empresa DataTech"<<endl;
	cout<<endl<<"Informacion de los trabajadores"<<endl;
	cout<<"Cantidad de empleados: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<endl<<"Empleado "<<i+1<<endl;
		cout<<"Nombre: "; cin>>E.nombre[i];
		cout<<"Sexo: "; cin>>E.sexo[i];
		cout<<"Sueldo: "; cin>>E.sueldo[i];
		if(E.sueldo[i]>SMa){
			SMa=E.sueldo[i];
		}
		if(E.sueldo[i]<SMe){
			SMe=E.sueldo[i];
		}
	}
	for(int j=0; j<n; j++){
		if(E.sueldo[j]==SMa){
			cout<<endl<<"Datos del empleado con mayor sueldo";
			cout<<endl<<"Nombre: "<<E.nombre[j];
			cout<<endl<<"Sexo: "<<E.sexo[j];
			cout<<endl<<"Sueldo: "<<E.sueldo[j];
		}
		if(E.sueldo[j]==SMe){
			cout<<endl<<endl<<"Datos del empleado con menor sueldo";
			cout<<endl<<"Nombre: "<<E.nombre[j];
			cout<<endl<<"Sexo: "<<E.sexo[j];
			cout<<endl<<"Sueldo: "<<E.sueldo[j];
		}
	}
	system("pause");
	return 0;
}
