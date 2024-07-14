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
	]
	system("pause");
	return 0;
}
