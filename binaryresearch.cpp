#include <iostream>
using namespace std;
int main()
{
    int n;
  	cout<<"Enter the lenght of massiv: ";    
    cin>>n;
    int A[100]={};
    for(int i=0; i<n; i++)
    {
    	cout<<"A["<<i<<"]=";
		cin>>A[i];
    }
    int l=0,r=n,x;
    cout<<"Enter the key:";
    cin>>x;
    while (r>=l)           //для того чтобы если элемента не существует
    {
        int m=(l+r)/2;    //середина
        if(A[m]==x)      //если элемент найдет
        {
            cout<<"Element:"<<"A["<<m<<"]="<<x<<endl;
            break;
        }
        else if(A[m]<x)   //если искомый элемент находится справа 
        {
            l=m+1;   //левый двигаем на право
        }
        else
        {
            r=m-1;  //иначе правый двигаем влево
        }
    }
system("pause");
return 0;
}
