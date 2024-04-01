#include<iostream>
using namespace std;
main(void){
	/*este programa muestra la interacion del usuiario con la consola
	para solicitar 2 numeros y mostrar el resultado de las 4 operaciones bacicas*/
	double num1;
	double num2;
	double resultadosuma;
	double resultadoresta;
	double resultadomulti;	
	double resultadodivi;
	cout<<"Ingrese un numero:";
	cin>>num1;
	
	cout<<"Ingrese otro numero:";
	cin>>num2;
	
	resultadosuma=num1+num2;
	resultadoresta=num1-num2;
	resultadomulti=num1*num2;
	resultadodivi=num1/num2;
	
	cout<<"la suma es: "<<resultadosuma<<endl;
	cout<<"la resta es: "<<resultadoresta<<endl;
	cout<<"la multiplicacion es: "<<resultadomulti<<endl;
	cout<<"la divicion es: "<<resultadodivi<<endl;
}
