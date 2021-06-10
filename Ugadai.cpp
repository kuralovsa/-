#include<iostream>
#include<windows.h>
#include<time.h>

using namespace std;

int main(){
	setlocale(0, "");
	srand(unsigned (time(NULL))); //sbross generatora
	int a,b,i;
	a=rand()%10+1;
	cout<<"èãðà óãàäàé ÷èñëî. \n\n";
	cout<<"Êîìïüþòåð çàäóìàë ÷èñëî  îò 1 äî 10.\n";
	cout<<"Ââåäèòå ÷èñëî è íàæìè íà <ENTER> \n\n";
	for(i=1;i<6;i++)
	{
	cout<<"---->";
	cin>>b;
	if(b==a)
	{
	cout<<"ÂÛ âûèãðàëè! Ïîçäðàâëÿþ!\n";
	cout<<"ÂÛ ÎÒÃÀÄÀËÈ ×ÈÑËÎ ñ "  << i << "îé ïîïûòêè!\n";
	break;
	}
	if(b>a)
	{
	cout<<"NET, chislo áîëüøå \"çàäóìàííî\"êîìïüþåðîì\n";
	}
	if(b<a) {
	cout<<"NET, chislo ìåíüøå\"çàäóìàííî\"êîìïüþåðîì\n";
	}
	}
	if(b!=a&&i==5)//Proverka
	{
	cout<<"Ê ñîæåëåíèþ âû òàê è íå ñìîãëè óãàäàòü ÷èñëî...\n";
	}
}

