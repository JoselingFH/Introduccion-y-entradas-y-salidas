/*2.Escribe un programa que lea de la entrada estandar el precio de un producto y 
muestre en la salida estandar el precio del producto al aplicarle el IVA. */

#include<iostream>

using namespace std;

int main(){
	float precio,IVA,precioconIVA; 
	
	cout<<"Digite el precio del producto: "; cin>>precio;
	
	IVA = precio * 0.15;
	precioconIVA = precio + IVA;
	
	cout<<"\nEl precio con IVA es: "<<precioconIVA<<endl;
	
	
	return 0;
}
