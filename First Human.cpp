#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

 class Human
{
private:
 // Закрытые данные-члены:
int Age;

public:
void SetAge(int InputAge)
{
Age = InputAge;
}

// Человек лжет о своем возрасте (если ему за 30)
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

