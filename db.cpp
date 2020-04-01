#include <fstream>
#include <iostream>
#define n 255

using namespace std;
struct automobil
{	char imya[10];
	int god;
	int probeg;
	automobil *next;
	automobil *prev;
};

automobil *head = NULL;

int main()
{
	int meniu = 8;
	setlocale(LC_ALL, "rus");
	while (1)
	{
		if ((1 <= meniu && meniu <= 9) || (meniu == 11) || (meniu == 12) || (meniu == 31) || (meniu == 32) || (meniu == 33) || (meniu == 41) || (meniu == 42))
		{
			if (meniu == 1)
			{
			}
			if(meniu==11)
			{setlocale(LC_ALL, "rus");
			char buff[n];
    		ifstream fin("D.txt");
    		fin>>buff;
			fin.getline(buff, n); 
    		cout<<buff<<"\n"<<"конец файла";
    		fin.close();
			 
			}
			if(meniu == 12)
			{FILE*fin, * fout;
			fin=fopen ("D.txt","r");
			fout=fopen ("D.txt", "w");
			}
			if(meniu == 2)
			{ofstream D ;
			D.open("D.txt",ios::out);
			}
			if(meniu == 31)
			{
				;
			}
			if(meniu == 32)
			{
			FILE*fin, * fout;
			fout=fopen ("D.txt", "w");
			}
			if(meniu == 33)
			{
				;
			}
			if(meniu == 41)
			{
				;
			}
			if(meniu == 42)
			{
				;
			}
			if(meniu == 5)
			{
				;
			}
			if(meniu == 6)
			{
				
			}
			if (meniu == 7)
			{
			cout<<"Kuralov Serikbay ENU->inf-11";
			}
			if (meniu == 8)
			{
				system("cls");
				cout << " МЕНЮ:\n";
				cout << "  1.Ввод БД:\n";
				cout << "    11.из файла\n";
				cout << "    12.с клавиатуры\n";
				cout << "  2.Просмотр всей БД\n";
				cout << "  3.Редактирование данных:\n";
				cout << "    31.очистить БД\n";
				cout << "    32.добавить запись\n";
				cout << "    33.удалить запись\n";
				cout << "  4.Вывод БД:\n";
				cout << "    41.в файл\n";
				cout << "    42.на экран\n";
				cout << "  5.Поиск данных по пробегу\n";
				cout << "  6.Сортировка по году выпуска\n";
				cout << "  7.О разработчике\n";
				cout << "  8.Очистить экран\n";
				cout << "  9.Выход\n\n";
			}
			if (meniu == 9)
			{
				break;
			}
		}
		else
		{
			cout << "ERROR! \n\n";
		}
		cout << "меню ";
		cin >> meniu;
	}
	system("pause");
	return 0;
}
