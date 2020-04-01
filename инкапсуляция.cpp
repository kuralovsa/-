#include <iostream>
using namespace std;
 
class CppStudio 
{
private: 
    int day, 
        month,
        year; 
public: 
    void message()    {
        cout << "\n incapsulyatsia C + +\n";
    }
    void setDate(int date_day, int date_month, int date_year)
    {
        day   = date_day; 
        month = date_month;
        year  = date_year;
    }
    void getDate() 
    {
        cout << "Date: " << day << "." << month << "." << year << endl;
    }
};
 
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RUS");
    int day, month, year;
    cout << "Vvedite datu!\n";
    cout << "Den: ";     cin >> day;
    cout << "mesets: ";    cin >> month;
    cout << "Got: ";  cin >> year;
    CppStudio objCppstudio;
    objCppstudio.message();
    objCppstudio.setDate(day, month, year); 
    objCppstudio.getDate(); 
    system("pause");
    return 0;
}
