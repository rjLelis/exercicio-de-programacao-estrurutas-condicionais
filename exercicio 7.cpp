#include<iostream>
#include<cstring>
using namespace std;
main(){
	float h,pi;
	char s;
	cout<<"digite o sexo(m ou f): "<<"\n";
	cin>>s;
	cout<<"digite a altura: "<<"\n";
	cin>>h;
	if(strcmp(s,m)==0){
		pi=(72.7*h)-58;
		cout<<"o peso ideal e: "<<pi<<"\n";
	}
	else if(strcmp(s,m)==0){
		pi=(62.1*h)-44.7;
		cout<<"peso ideal e: "<<pi<<"\n";
	}
}
