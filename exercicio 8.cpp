#include<iostream>
using namespace std;
main(){
	char c;
	float qut,p;
	cout<<"digite a quantidade: "<<"\n";
	cin>>qut;
	cout<<"digite o codigo: "<<"\n";
	cin>>c;
	if(strcmp(c,'abcd')==0){
		p=qut*5.30;
		cout<<"preco total: "<<p<<"\n";
	}
	else if(strcmp(c,'xypk')==0){
		p=qut*6.00;
		cout<<"preco total: "<<p<<"\n";
	}
	else if(strcmp(c,'klmp')==0){
		p=qut*3.20;
		cout<<"preco total: "<<p<<"\n";
	}
	else if(strcmp(c,'qrst')==0){
		p=qut*2.50;
		cout<<"preco total: "<<p<<"\n";
	}
	else{
		cout<<"codigo invalido!";
	}

}
