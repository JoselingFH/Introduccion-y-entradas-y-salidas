/*3. Realice un programa que lea de la entrada estandar los siguientes datos de
una persona: Edad: dato de tipo entero; Sexo: dato de tipo caracter; 
Altura en metros: dato de tipo real. Tras leer los datos, el programa debe mostrarlos
en la salida estandar. */

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[9];
	float alturaenmetros;
	
	cout<<"Digite la edad de la persona: "; cin>>edad;
	cout<<"Digite el sexo de la persona: "; cin>>sexo;
	cout<<"Digite la altura en metros de la persona: "; cin>>alturaenmetros;
	
	
	cout<<"\nLa edad de la persona es: "<<edad<<endl;
	cout<<"El sexo de la persona es: "<<sexo<<endl;
	cout<<"La altura en metros de la persona es: "<<alturaenmetros<<endl;
	
		
	return 0;
}

