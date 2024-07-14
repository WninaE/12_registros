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
	system("pause");
	return 0;
}
