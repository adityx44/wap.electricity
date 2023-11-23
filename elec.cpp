#include<iostream>
using namespace std;
 
 int main()
 {
  
   int unit,b,c,d,e,a;
   cout<<"Enter the number of units"<<endl;
   cin>>unit;
   if(unit<50)
     {
      a=unit+50;
      cout<<"Money"<<a;     
     }
   if(unit>50 && unit<=150)
     {
      c=unit-50;
      b=(c*2)+100;
      cout<<"Money"<<b;
     }
   if(unit>150)
     {
      d=unit-150;
      e=(d*5)+300;
      cout<<"Money"<<e;
     }  
     
   return 0;
 }
