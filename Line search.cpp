#include<iostream>
using namespace std;
int LinearSearch (int A[100]={1,2,3,4,5}, int n, int key)
{
	cout<<"Vvedite chislo:"
	cin>>key;
    for (int i=0; i<n; i++)
        if (A[i]==key)
            return i;
    return -1;
}
