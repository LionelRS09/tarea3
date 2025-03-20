#include <iostream>
using namespace std;
main() {
/*	string nombre;
	int dato;
	cout<<"Ingrese dato: ";
	cin>>dato;
	cin.ignore();
	cout<<"Ingrese nombre completo: ";
	getline(cin,nombre);
	
	cout<<nombre<<endl;*/
	
	string semana [7]={"Lunes","Martes","Miercoles","jueves","Viernes","Sabado","Domingo"	
	};
	
	semana[3]= "JUEVES";
	for (int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
	
	
	
	
	system("pause");
}
