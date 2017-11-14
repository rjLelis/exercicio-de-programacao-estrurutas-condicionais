#include<iostream>
#include<math.h>
using namespace std;
main(){
	int ni;
	float n1,n2,n3,me,ma;
	cout<<"digite o numero de indentificacao do aluno:"<<"\n";
	cin>>ni;
	cout<<"digite a primeira nota do aluno:"<<"\n";
	cin>>n1;
	cout<<"digite a segunda nota do aluno:"<<"\n";
	cin>>n2;
	cout<<"digite a terceira nota do aluno:"<<"\n";
	cin>>n3;
	cout<<"digite a media de exercicios do aluno"<<"\n";
	cin>>me;
	cout<<"o numero de indentificacao do aluno e :"<<ni<<"\n";
	cout<<"a primeira nota e: "<<n1<<"\n";
	cout<<"a segunda nota e: "<<n2<<"\n";
	cout<<"a terceira nota e: "<<n3<<"\n";
	cout<<"a media de exercicios e: "<<me<<"\n";
	ma=(n1+n2*2+n3*3+me)/7;
	cout<<"a media de aproveitamento do aluno e: "<<ma<<"\n";
	if(ma<4.0){
			cout<<"o aluno tirou 'e'"<<"\n";
			cout<<"reprovado!"<<"\n";
		}
	else if(ma==4.0||ma<6){
			cout<<"o aluno tirou 'd'"<<"\n";
			cout<<"reprovado!"<<"\n";	
}
	else if(ma==6.0||ma<7.5){
		cout<<"o aluno tirou 'c'"<<"\n";
		cout<<"aprovado!"<<"\n";
}
	else if(ma==7.5||ma<9)
	){
		cout<<"o aluno tirou 'b'"<<"\n";
		cout<<"aprovado!"<<"\n";
	}
	else if(ma==9.0){
		cout<<"o aluno tirou 'a'"<<"\n";
		cout<<"aprovado!"<<"\n";
	}
}
