#include<iostream>
#include<math.h>
using namespace std;
main(){
      float x,y,r;
      cout<<"digite 2 valores"<<"\n";
      cin>>x>>y;
      if(y+4!=0){
              r=(x-3)/(y+4)+sin(y);
              cout<<"resultado: "<<r<<"\n";
              }
              else{
                   cout<<"divisao por zero"<<"\n";
                   }
                   system("pause");
                   }
