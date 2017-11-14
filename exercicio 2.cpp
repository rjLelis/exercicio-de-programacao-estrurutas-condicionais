#include<iostream>
#include<math.h>
using namespace std;
main(){
       float x,y,z,r;
       cout<<"digite 3 valores:"<<"\n";
       cin>>x>>y>>z;
       if(y>0){
               if(cos(z)-2!=0){
                               r=(x/2*sqrt(y))+(3/cos(z)-2);
                               cout<<"resultado: "<<r;
                               }
                               }
                               else{
                                    cout<<"operacao nao pode continuar"<<"\n";
                                    }
                                    system("pause");
                                    }
