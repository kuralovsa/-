#include <iostream>
#include <stdlib.h>

using namespace std;
#define SIZE 1000 

void cls()
{
  if (system("clear")) system( "cls" ); 
}
 
class lib
{
	
  int num=0,id[SIZE],hand[SIZE]; 
  string author[SIZE], title[SIZE]; 
 
  bool libis(); 
 
  public:
  bool is(int n); 
  int qnty(); 
  void show(int n); 
  void showall(); 
  int store(string auth, string tit, int hd); 
  void del(int n); 
  void give(int n); 
  void bring(int n); 
};
 
bool lib::libis()
{
  if (num==0) {
   	 setlocale(LC_ALL, "Russian");
     cout << "���� � ���������� ���!\n";
     return false;
  }
  return true;
}
 
bool lib::is(int n)
{
  int i;
  for (i=0;i<num;i++){
      if (i==n) return true;
  }
  return false;
}
 
int lib::qnty()
{
  if ((num-1) >= 0 ) return num-1;
  else return 0;
}
 
void lib::show(int n)
{
  if ( (n>=0) && (n<num) ) {
  	setlocale(LC_ALL, "Russian");
     cout << "id: " << id[n] << " �����: " << author[n] << endl;
     cout << "��������: " << title[n] << endl;
     cout << "������: " << hand[n] << endl;
     return;
 
  } else cout << "����� � ����� id �� ����������. id: " << n << endl;
}
 
void lib::showall()
{
  int i;
  libis();
  for (i=0;i<num;i++) {
    setlocale(LC_ALL, "Russian");
     cout << "id: " << id[i] << " �����: " << author[i] << endl;
     cout << "��������: " << title[i] << endl;
  }
}
 
int lib::store(string auth, string tit, int hd)
{
  if (num == SIZE) {
  	setlocale(LC_ALL, "Russian");
     cout << "���������� �����������! ���������� ����: " << num << endl;
     cout << "������ �������� ������ ����\n";
     return -1;
  }
  id[num] = num;
  cout << "id: " << id[num] << endl;
  author[num] = auth;
  title[num] = tit;
  hand[num] = hd;
  num = num+1;
  return id[num];
}
 
void lib::del(int n)
{
  int i,j=0;
  libis();
  if (!is(n)) {
     setlocale(LC_ALL, "Russian");
     cout << "����� � ����� id �� ����������. id: " << n << endl;
     return;
  }
  for (i=0;i<num;i++) {
      if (i==n) {
          continue;
      } else {
         id[j] = j;
         author[j] = author[i];
         title[j] = title[i];
         hand[j] = hand[i];
         j++;
      }
  }
  num--;
}
 
void lib::give(int n)
{
  libis();
  is(n);
  hand[n]++;
}
 
void lib::bring(int n)
{
  libis();
  is(n);
  if (hand[n] == 0) {
  	 setlocale(LC_ALL, "Russian");
     cout << "�� ���� ���������� � ���, ��� ����� ���� ������";
  } else hand[n]--;
}
 
void mainscreen()
{
  cls();
  setlocale(LC_ALL, "Russian");
  cout << "��������� ����������\n";
  cout << "1 - ���������� ����\n";
  cout << "2 - �������� �����\n";
  cout << "3 - �������� �����\n";
  cout << "4 - ������� �����\n";
  cout << "5 - ������ �����\n";
  cout << "6 - ������� �����\n";
  cout << "9 - �����\n";
 
}
 
int main()
{
  int i,j,k,hand,command;
  string author;
  string title;
  lib mylib;
  setlocale(LC_ALL, "Russian");
 
  mylib.store("���������","����� ���������",1);
  mylib.store("������","���� ����",0);
  mylib.store("����������","�����",0);
  mylib.store("���������","��������� ����������",0);
  mylib.store("������","�����",0);
 
 
  while(1) {
     mainscreen();
     setlocale(LC_ALL, "Russian");
     cout << "����� ����: ";
     cin >> command;
     switch (command) {
 
     case 1:
     	 setlocale(LC_ALL, "Russian");
         cout << "���������� ���� � ����������: " << mylib.qnty() << endl;;
         break;
 
     case 2:
         if (mylib.qnty() <= 0) {
         	setlocale(LC_ALL, "Russian");
             cout << "� ���������� ��� ����.\n";
             break;
         }
         cls();
         setlocale(LC_ALL, "Russian");
         cout << "����� ����������\n";
         cout << "������� ����� ���� ��� ����������� �� ������\n";
         cin >> k;
         j=0;
         do {
             for (i=0;i<k;i++) {
                 mylib.show(j);
                 cout << endl;
                 j++;
                 if (j>mylib.qnty()) {
                 	setlocale(LC_ALL, "Russian");
                      cout << "��� ��� �����, ������� ���� � ����������\n";
                     break;
                 }
             }
             if (j<=mylib.qnty()) {
             	setlocale(LC_ALL, "Russian");
                 cout << "��� ����������� ��������� ���� ������� ����� �����, ����� 0, � ������� ���� \n";
                 cout << "��� ���������� ����������� ���� ������� 0 � ������� ���� ";
                 cin >> i;
                 cls();
             }
         } while ( ( j<=mylib.qnty() ) && (i != 0) );
         break;
 
     case 3:
     	setlocale(LC_ALL, "Russian");
         cls();
         cout << "���������� �����\n";
         cout << "������� ������ (��������� ��� ��������): ";
         cin >> author;
         cout << "������� �������� (��������� ��� ��������): ";
         cin >> title;
         cout << "������� ��������� ������� �� ���� �����������: ";
         cin >> hand;
         mylib.store(author, title, hand);
         cout << "����� ���������:\n";
         mylib.show(mylib.qnty());
         break;
 
     case 4:
     	setlocale(LC_ALL, "Russian");
         cls();
         cout << "�������� �����\n";
         cout << "������� id ����� ��� ��������: ";
         cin >> i;
         if (mylib.is(i)) {
             cout << "�� ����������� ������� �����: ";
             mylib.show(i);
             cout << "������� 1 ��� �������� ��� ����� ������ ����� ��� ������: ";
             cin >> k;
             if (k==1) {
                 mylib.del(i);
                 cout << "����� �������\n";
             }
         } else cout << "����� � ����� id �� �������. id: " << i << endl;
         break;
     case 5:
     	setlocale(LC_ALL, "Russian");
         cls();
         cout << "������ �����\n";
         cout << "������� id ����� ��� ������: ";
         cin >> i;
         if (mylib.is(i)) {
             mylib.give(i);
             cout << "����� ������\n";
             mylib.show(i);
         } else cout << "����� � ����� id �� �������. id: " << i << endl;
         break;
     case 6:
     	setlocale(LC_ALL, "Russian");
         cls();
         cout << "���� �����\n";
         cout << "������� id �������� �����: ";
         cin >> i;
         if (mylib.is(i)) {
             mylib.bring(i);
             cout << "����� �������\n";
             mylib.show(i);
         } else cout << "����� � ����� id �� �������. id: " << i << endl;
         break;
     case 9: return 0;
         break;
     }
     setlocale(LC_ALL, "Russian");
     cout<<"��� ����������� ������ ������� ����� ����� � ������� ���� ";
     cin >> k;
  }
  return 0;
}
