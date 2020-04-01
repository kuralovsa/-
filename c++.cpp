#include<iostream>
using namespace std;
main()
{int n,s;
float m,a;
cin>>n;
if(n>=10&&n<=99){
	s=n/10;
	a=n-s*10;
	s=m;
	if(a>m) m=a;
	cout<<m;
	if(n%11==0||n%22==0||n%33==0||n%44==0||n%55==0||n%66==0||n%77==0||n%88==0||n%99==0){
		cout<<"ekeui ten";
	}
}
else cout<<"kate terdyntz";}
