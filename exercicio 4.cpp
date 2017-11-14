#include<iostream>
#include<math.h>
using namespace std;
main(){
	float x,y,z;
	cout<<"digite a primeira nota: "<<"\n";
	cin>>x;
	cout<<"digite a segunda nota: "<<"\n";
	cin>>y;
	cout<<"digite a terceira nota: "<<"\n";
	cin>>z;
	if(x+y+z/3>=6){
		cout<<"aprovado!"<<"\n";
	}
	else{
		cout<<"reprovado :("<<"\n";
	}

}
