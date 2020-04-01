#include <iostream>
 
using namespace std;
 
int main()
{
   int a,b,c,t;
   cin>>a;
   int mas[a];
   for(b=0;b<a;b++){cin>>mas[b];}
   cout<<"\n massiv do sortirovki:\n";
   for(b=0;b<a;b++){cout << mas[b]<<",";}
 
 
   for(t=0;t<a;t++)
    for(c=a-1;c>=t;c--)
 
    if(mas[c-1]>mas[c]){
     b=mas[c-1];
     mas[c-1]=mas[c];
     mas[c]=b;
   }
    cout<<"\n massiv posle sortirovki:\n";
    for(b=0;b<a;b++){
	cout<<mas[b]<<",";}
    
 
   return 0;
}
