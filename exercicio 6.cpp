#include<iostream>
using namespace std;
main(){
	float c,qut,p;
	cout<<"digite o codigo: "<<"\n";
	cin>>c;
	cout<<"digite a quantidade: "<<"\n";
	cin>>qut;
	if(c==100){
		p=qut*1.20;
		cout<<"valor a se pagar: "<<p<<"\n";
	}
	else if(c==101){
		p=qut*1.30;
		cout<<"valor a se pagar: "<<p<<"\n";
	}
	else if(c==102){
		p=qut*1.50;
		cout<<"valor a se pagar: "<<p<<"\n";
	}
	else if(c==103){
		p=qut*1,20;
		cout<<"valor a se pagar: "<<p<<"\n";
	}
	else if(c==104){
		p=qut*1.30;
		cout<<"valor a se pagar: "<<p<<"\n";
	}
	else if(c==105){
		p=qut*1.00;
		cout<<"valor a se pagar: "<<p<<"\n";
	}
}
