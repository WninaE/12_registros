//registros4.cpp
//Nina Estuco, William André
#include <iostream>
#include <string>
using namespace std;

struct atletas{
	string nombres[1000];
	string pais[100];
	string disciplina[100];
	int numero_de_medallas[50];
};

int main(){
	int n;
	cout<<endl<<"Cantidad de atletas: "; cin>>n;
	atletas A;
	for(int i=0; i<n; i++){
		cout<<endl<<endl<<"Atleta "<<i+1;
		cout<<endl<<"Nombres: "; cin>>A.nombres[i];
		cout<<"Pais: "; cin>>A.pais[i];
		cout<<"Disciplina: "; cin>>A.disciplina[i];
		cout<<"Numero de medallas: "; cin>>A.numero_de_medallas[i];
	}
	string p; int MNM=0;
	cout<<endl<<endl<<"Ingrese un pais: "; cin>>p;
	cout<<endl<<"Los atletas que son del pais "<<p<<" son: ";
	for(int j=0; j<n; j++){
		if(A.pais[j]==p){
			cout<<endl<<"Atleta "<<j+1;
			cout<<endl<<"Nombres: "<<A.nombres[j];
			cout<<endl<<"Pais: "<<A.pais[j];
			cout<<endl<<"Disciplina: "<<A.disciplina[j];
			cout<<endl<<"Numero de medallas: "<<A.numero_de_medallas[j];
			if(A.numero_de_medallas[j]>MNM){
				MNM=A.numero_de_medallas[j];
			}
		}
	}
	cout<<endl<<endl<<"El atleta con mayor medallas del pais de "<<p<<" es: ";
	for(int k=0; k<n; k++){
		if(A.numero_de_medallas[k]==MNM){
			cout<<endl<<"Atleta "<<k+1;
			cout<<endl<<"Nombres: "<<A.nombres[k];
			cout<<endl<<"Pais: "<<A.pais[k];
			cout<<endl<<"Disciplina: "<<A.disciplina[k];
			cout<<endl<<"Numero de medallas: "<<A.numero_de_medallas[k];
		}
	}
	system("pause");
	return 0;
}
