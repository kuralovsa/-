#include <iostream>
 #include <string>
 using namespace std;

 class Human
 {
 private:

 string Name;
 int Age;
public:
 Human ()
 {
 Age = 0; 
 cout << "COnstucted an instance of class Human" << endl;
}
void SetName (string HumansName){
Name = HumansName;	
}
void SetAge(int HumansAge){
	Age = HumansAge;
}


void IntroduceSelf()

{
 cout << "I am " + Name << " and am ";
 cout << Age << " years old" << endl;
 }
 };
 int main()
{
 Human FirstMan;
 FirstMan.SetName("Adam");
 FirstMan.SetAge(30);
 Human FirstWoman;
 FirstWoman.SetName("Eve");
 FirstWoman.SetAge (28);
 FirstMan.IntroduceSelf();
 FirstWoman.IntroduceSelf();
}
