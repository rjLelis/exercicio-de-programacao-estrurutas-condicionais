#include<iostream>
using namespace std;
main(){
	float a,b,c;
	cout<<"digite tres valores:"<<"\n";
	cin>>a>>b>>c;
	if(a>b&a>c){
		cout<<a<<" e o maior!"<<"\n";
	}
	else if(b>a&b>c){
		cout<<b<<" e o maior"<<"\n";
	}
	else if(c>a&c>b){
		cout<<c<<" e o maior"<<"\n";
	}
}
