#include<iostream>
using namespace std;
main(){
	int i;
	cout<<"digite a idade do nadador:"<<"\n";
	cin>>i;
	if(i<5){
			cout<<"essa idade e invalida: "<<i<<"\n";
		}
	else if(i<=7){
			cout<<"infantial a"<<"\n";
	}
		else if(i<=10){
			cout<<"infantil b"<<"\n";
		}
		else if(i<=13){
			cout<<"juvenil a"<<"\n";
		}
		else if(i<=17){
			cout<<"juvenil b"<<"\n";
		}else if(i>18){
			cout<<"adulto"<<"\n";
		}
		else if(i<5){
			cout<<"essa idade e invalida: "<<i<<"\n";
		}

}
