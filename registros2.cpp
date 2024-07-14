//registros2.cpp
//Nina Estuco, William André
#include <iostream>
#include <string>
using namespace std;

struct persona{
	string nombres[1000];
	int DNI[1000];
	int edad[500];
};

int main(){
	persona p;
	int n, e, s, EP;
	cout<<endl<<"Ingrese la cantidad de personas: ";
	cin>>n; EP=0;
	
	for(int i=0; i<n; i++){
		cout<<endl<<"Persona "<<i+1;
		cout<<endl<<"Nombres: "; cin>>p.nombres[i];
		cout<<"DNI: "; cin>>p.DNI[i];
		cout<<"Edad: "; cin>>p.edad[i];
		if(p.edad[i]>50){
			e++;
		}
		s=s+p.edad[i];
	}
	
	cout<<endl<<"Las personas mayores de 50 anios son "<<e;
	EP=s/n;
	cout<<endl<<"La edad promedio es "<<EP;
	
	for(int j=0; j<n; j++){
		cout<<endl<<endl<<"Persona "<<j+1;
		cout<<endl<<"Nombres: "<<p.nombres[j];
		cout<<endl<<"DNI: "<<p.DNI[j];
		cout<<endl<<"Edad: "<<p.edad[j];
	}
	system("pause");
	return 0;
}
