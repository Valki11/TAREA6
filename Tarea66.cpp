#include <iostream>
using namespace std;
//funcion que sume dos valores 
int suma2(int num1,int num2){
	int resultado=0;
	resultado=num1+num2;
	return resultado;
}
int suma3(int num1,int num2, int num3){
	int resultado=0;
	resultado=num1+num2+num3;
	return resultado;
	}
	
main(){
	cout<<suma2(10,20)<<endl;
	cout<<suma3(10,20,40)<<endl;
	
	system("pause");
	
	
	
	
}
