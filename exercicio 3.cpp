#include<iostream>
#include<math.h>
using namespace std;
main(){
      float a,b,c,x1,x2;
      cout<<"digite 3 numeros"<<"\n";
      cin>>a>>b>>c;
      if(a!=0){
               if(b*b-4*a*c>=0){
                                x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
                                cout<<"resultado 1: "<<x1<<"\n";
                                x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
                                cout<<"resultado 2: "<<x2<<"\n";
                                }
                                else{
                                     cout<<"operacao nao pode continuar"<<"\n";
                                     }
                                     }
                                     system("pause");
                                     }
