#include <stdio.h>
#include <iostream>
using namespace std;
double fact(int n);
main(){
int n;
double f;
cout<<"Enter num:"<<6<<"\n";
n=6;
f=fact(n);
cout<<n<<"!="<<f;
return (0);}
double fact(int n)
{if (n<1) 
return(1.0);
else
return(n*fact(n-1));
}
