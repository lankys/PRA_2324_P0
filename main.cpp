#include <iostream>
#include "brazo.h"
using namespace std;

int main()
{
brazo b1;
double a,b,c;
int x;
  cout<<"bievenido al proyecto de brazo robotico0 \nmueve el robot!\n ";
  cout<<"dame las coordenadas del brazo en orden de x,y,z\n";
 
  cin >> a >> b >> c;
  b1.mover(a,b,c);
 cout<<"el robot se encuentra en: \n:"<<b1.getx()<<";"<< b1.gety() << ";" << b1.getz() << endl;
 cout<<"\n ademas pon 0 si quieres que suelte un objeto o 1 para que coja uno\n";
 cin>>x;
 if (x==0){
 b1.soltar();
 }
 else{
 b1.coger(); }

	 
 if(b1.getsu() == 0) {
cout<<"\nno esta sujetando un objeto\n";
 
 }
 else{
 cout<<"\ntiene un objeto sujetado\n";
 }
 cout<<"fin de proyecto adioss -0w0-\n";

    return 0;
}


