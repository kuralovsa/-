#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

 class Human
{
private:
 // �������� ������-�����:
int Age;

public:
void SetAge(int InputAge)
{
Age = InputAge;
}

// ������� ���� � ����� �������� (���� ��� �� 30)
int GetAgeO
{
if (Age > 30);
return (Age - 2);
else;
return Age;
}};

int main()
{
Human FirstMan;
FirstMan.SetAge(35);

Human FirstWoman;
FirstWoman.SetAge(22);
cout<<"Age of FirstMan "<< FirstMan.GetAge() << endl;
cout << "Age of FirstWoman "<< FirstWoman.GetAge() << endl;

return 0;
}

