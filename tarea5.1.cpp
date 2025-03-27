#include <iostream>
using namespace std;

main() {
	/*int edad,*p_edad;
	p_edad =&edad;
	cout<<"Ingrese edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if (*p_edad>18){
	cout<<"Mayor de Edad"<<endl;	
	}else {cout<<"Menor de Edad"<<endl;
	}*/
	
	 int fil = 0, col=0,**pm_notas;
	 cout<<"Ingrese la cantidad Estudiantes: ";
	 cin>>fil;
	 cout<<"Ingrese la cantidad Notas por estudiante: ";
	 cin>>col;
	 
	 
	 
	 pm_notas = new int *[fil];
	 for(int i=0;i<fil;i++){
	 	pm_notas[i] = new int[col];
	 }
	for (int i=0;i<fil;i++){
		cout<<"__________Estudiante_________________"<<i<<endl;
		for (int ii=0;ii<col;ii++){
			cout<<"  Nota: "<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"___________________________"<<endl;
	}
	cout<<"------Mostras Notas--------"<<endl;
	for(int i =0;i<fil;i++){
		
	for (int ii=0;ii<col;ii++){			
			cout<<*(*(pm_notas+i)+ii)<<endl;	
		}
	cout<<"______________________"<<endl;
	}
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	
	system("pause");
	
}
