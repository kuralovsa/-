#include<iostream>
#include<windows.h>
#include<time.h>

using namespace std;

int main(){
	setlocale(0, "");
	srand(unsigned (time(NULL))); //sbross generatora
	int a,b,i;
	a=rand()%10+1;
	cout<<"���� ������ �����. \n\n";
	cout<<"��������� ������� �����  �� 1 �� 10.\n";
	cout<<"������� ����� � ����� �� <ENTER> \n\n";
	for(i=1;i<6;i++)
	{
	cout<<"---->";
	cin>>b;
	if(b==a)
	{
	cout<<"�� ��������! ����������!\n";
	cout<<"�� �������� ����� � "  << i << "�� �������!\n";
	break;
	}
	if(b>a)
	{
	cout<<"NET, chislo ������ \"���������\"����������\n";
	}
	if(b<a) {
	cout<<"NET, chislo ������\"���������\"����������\n";
	}
	}
	if(b!=a&&i==5)//Priverka
	{
	cout<<"� ��������� �� ��� � �� ������ ������� �����...\n";
	}
}

