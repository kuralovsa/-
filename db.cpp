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
    		cout<<buff<<"\n"<<"����� �����";
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
				cout << " ����:\n";
				cout << "  1.���� ��:\n";
				cout << "    11.�� �����\n";
				cout << "    12.� ����������\n";
				cout << "  2.�������� ���� ��\n";
				cout << "  3.�������������� ������:\n";
				cout << "    31.�������� ��\n";
				cout << "    32.�������� ������\n";
				cout << "    33.������� ������\n";
				cout << "  4.����� ��:\n";
				cout << "    41.� ����\n";
				cout << "    42.�� �����\n";
				cout << "  5.����� ������ �� �������\n";
				cout << "  6.���������� �� ���� �������\n";
				cout << "  7.� ������������\n";
				cout << "  8.�������� �����\n";
				cout << "  9.�����\n\n";
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
		cout << "���� ";
		cin >> meniu;
	}
	system("pause");
	return 0;
}
