#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[100]={};
    for(int i=0; i<n; i++)
    {
            cin>>A[i];
    }
    int l=0,r=n,x;
    cin>>x;
    while (r>=l)           //��� ���� ����� ���� �������� �� ����������
    {
        int m=(l+r)/2;    //��������
        if(A[m]==x)      //���� ������� ������
        {
            cout<<x<<endl;
            break;
        }
        else if(A[m]<x)   //���� ������� ������� ��������� ������ 
        {
            l=m+1;   //����� ������� �� �����
        }
        else
        {
            r=m-1;  //����� ������ ������� �����
        }
    }
system("pause");
return 0;
}
