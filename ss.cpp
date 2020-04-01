#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
struct student
{
string fam;
int baga[3];
};
int main()
{
const int n=2;
student top[n];
for(int i=0;i<=n;i++)
{
	cout<<"\n"<<i<<"-stud.Fam:";
	cin>>top[i].fam;
	cout<<"\n"<<i<<"-stud.4 sabaktan bagalari:";
	for(int j=0;j<=3;j++)
	cin>>top[i].baga[j];
}
cout<<"\n";
string k;
cout<<"\n Kaget studenttin fam. engiz:";
cin>>k;
cout<<"\n"<<"Stud."<<k<<"-nin ortasha bagasi:";
for(int i=0;i<=n;i++)
if(top[i].fam==k)
{float s=0;
for (int j=0;j<=3;j++)
s=s+(float) top[i].baga[j];
s=s/4; cout<<s;
}
getch();
}
