#include<iostream>
using namespace std;
int sum(int a,int b);
int main(){
	int a=2,b=3,c,d;
	c=sum(a,b);
	cin>>d;
	cout<<sum(c,d);
}
int sum(int a, int b){
	return(a+b);
}
