#include <iostream>
using namespace std;

unsigned long int factorial(unsigned long int);// прототип рекурсивной функции
int i = 1; // инициализация глобальной переменной для подсчёта кол-ва рекурсивных вызовов
unsigned long int result; // глобальная переменная для хранения возвращаемого результата рекурсивной функцией

int main(int argc, char* argv[])
{     
       int n; // локальная переменная для передачи введенного числа с клавиатуры
       cout << "Enter n!: ";
       cin >> n;
       cout << n << "!" << "=" << factorial(n) << endl; // вызов рекурсивной функции
       system("pause");
       return 0;
}

unsigned long int factorial(unsigned long int f) // рекурсивная функция для нахождения n!
{
       if (f == 1 || f == 0) // базовое или частное решение
             return 1; // все мы знаем, что 1!=1 и 0!=1
       cout << "Step\t" << i << endl;
       i++; // операция инкремента шага рекурсивных вызовов
       cout << "Result= " << result << endl;
       result = f * factorial(f - 1); // функция вызывает саму себя, причём её аргумент уже на 1 меньше
       return result;
}
