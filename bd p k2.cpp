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
     cout << "Книг в библиотеке нет!\n";
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
     cout << "id: " << id[n] << " Автор: " << author[n] << endl;
     cout << "Название: " << title[n] << endl;
     cout << "Выдано: " << hand[n] << endl;
     return;
 
  } else cout << "Книги с таким id не обнаружено. id: " << n << endl;
}
 
void lib::showall()
{
  int i;
  libis();
  for (i=0;i<num;i++) {
    setlocale(LC_ALL, "Russian");
     cout << "id: " << id[i] << " Автор: " << author[i] << endl;
     cout << "Название: " << title[i] << endl;
  }
}
 
int lib::store(string auth, string tit, int hd)
{
  if (num == SIZE) {
  	setlocale(LC_ALL, "Russian");
     cout << "Библиотека переполнена! Количество книг: " << num << endl;
     cout << "Нельзя добавить больше книг\n";
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
     cout << "Книги с таким id не обнаружено. id: " << n << endl;
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
     cout << "Не было информации о том, что книга была выдана";
  } else hand[n]--;
}
 
void mainscreen()
{
  cls();
  setlocale(LC_ALL, "Russian");
  cout << "Программа библиотека\n";
  cout << "1 - Количество книг\n";
  cout << "2 - Показать книги\n";
  cout << "3 - Добавить книгу\n";
  cout << "4 - Удалить книгу\n";
  cout << "5 - Выдать книгу\n";
  cout << "6 - Принять книгу\n";
  cout << "9 - Выход\n";
 
}
 
int main()
{
  int i,j,k,hand,command;
  string author;
  string title;
  lib mylib;
  setlocale(LC_ALL, "Russian");
 
  mylib.store("Кунанбаев","Слова Назидания",1);
  mylib.store("Ауезов","Абай жолы",0);
  mylib.store("Алтынсарин","Стихи",0);
  mylib.store("Уалиханов","География Казахстана",0);
  mylib.store("Жабаев","Стихи",0);
 
 
  while(1) {
     mainscreen();
     setlocale(LC_ALL, "Russian");
     cout << "Номер меню: ";
     cin >> command;
     switch (command) {
 
     case 1:
     	 setlocale(LC_ALL, "Russian");
         cout << "Количество книг в библиотеке: " << mylib.qnty() << endl;;
         break;
 
     case 2:
         if (mylib.qnty() <= 0) {
         	setlocale(LC_ALL, "Russian");
             cout << "В библиотеке нет книг.\n";
             break;
         }
         cls();
         setlocale(LC_ALL, "Russian");
         cout << "Книги библиотеки\n";
         cout << "Введите число книг для отображения на экране\n";
         cin >> k;
         j=0;
         do {
             for (i=0;i<k;i++) {
                 mylib.show(j);
                 cout << endl;
                 j++;
                 if (j>mylib.qnty()) {
                 	setlocale(LC_ALL, "Russian");
                      cout << "Это все книги, которые есть в библиотеке\n";
                     break;
                 }
             }
             if (j<=mylib.qnty()) {
             	setlocale(LC_ALL, "Russian");
                 cout << "Для отображения следующих книг введите любое число, кроме 0, и нажмите Ввод \n";
                 cout << "Для завершения отображения книг введите 0 и нажмите Ввод ";
                 cin >> i;
                 cls();
             }
         } while ( ( j<=mylib.qnty() ) && (i != 0) );
         break;
 
     case 3:
     	setlocale(LC_ALL, "Russian");
         cls();
         cout << "Добавление книги\n";
         cout << "Введите автора (латиницей без пробелов): ";
         cin >> author;
         cout << "Введите название (латиницей без пробелов): ";
         cin >> title;
         cout << "Введите колчество выданны на руки экземпляров: ";
         cin >> hand;
         mylib.store(author, title, hand);
         cout << "Книга добавлена:\n";
         mylib.show(mylib.qnty());
         break;
 
     case 4:
     	setlocale(LC_ALL, "Russian");
         cls();
         cout << "Удаление книги\n";
         cout << "Введите id книги для удаления: ";
         cin >> i;
         if (mylib.is(i)) {
             cout << "Вы собираетесь удалить книгу: ";
             mylib.show(i);
             cout << "Введите 1 для удаления или любое другое число для отмены: ";
             cin >> k;
             if (k==1) {
                 mylib.del(i);
                 cout << "Книга удалена\n";
             }
         } else cout << "Книги с таким id не найдено. id: " << i << endl;
         break;
     case 5:
     	setlocale(LC_ALL, "Russian");
         cls();
         cout << "Выдача книги\n";
         cout << "Введите id книги для выдачи: ";
         cin >> i;
         if (mylib.is(i)) {
             mylib.give(i);
             cout << "Книга выдана\n";
             mylib.show(i);
         } else cout << "Книги с таким id не найдено. id: " << i << endl;
         break;
     case 6:
     	setlocale(LC_ALL, "Russian");
         cls();
         cout << "Приём книги\n";
         cout << "Введите id принятой книги: ";
         cin >> i;
         if (mylib.is(i)) {
             mylib.bring(i);
             cout << "Книга принята\n";
             mylib.show(i);
         } else cout << "Книги с таким id не найдено. id: " << i << endl;
         break;
     case 9: return 0;
         break;
     }
     setlocale(LC_ALL, "Russian");
     cout<<"Для продолжения работы введите любое число и нажмите Ввод ";
     cin >> k;
  }
  return 0;
}
