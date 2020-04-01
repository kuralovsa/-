#include <stdio.h>
double fact(int n);
main(){
int n=6;
double f;
f=fact(n);
printf("6!=%10.0f\n",f);
return (0);}
double fact(int n)
{if (n<1) 
return(1.0);
else
return(n*fact(n-1));
}
