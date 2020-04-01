#include<iostream>
#include<windows.h>
#include<time.h>

using namespace std;

int main(){
	setlocale(0, "");
	srand(unsigned (time(NULL))); //sbross generatora
	int a,b,i;
	a=rand()%10+1;
	cout<<"игра угадай число. \n\n";
	cout<<"Компьютер задумал число  от 1 до 10.\n";
	cout<<"Введите число и нажми на <ENTER> \n\n";
	for(i=1;i<6;i++)
	{
	cout<<"---->";
	cin>>b;
	if(b==a)
	{
	cout<<"ВЫ выиграли! Поздравляю!\n";
	cout<<"ВЫ ОТГАДАЛИ ЧИСЛО с "  << i << "ой попытки!\n";
	break;
	}
	if(b>a)
	{
	cout<<"NET, chislo больше \"задуманно\"компьюером\n";
	}
	if(b<a) {
	cout<<"NET, chislo меньше\"задуманно\"компьюером\n";
	}
	}
	if(b!=a&&i==5)//Priverka
	{
	cout<<"К сожелению вы так и не смогли угадать число...\n";
	}
}

