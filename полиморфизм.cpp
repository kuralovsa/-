#include <iostream>

using namespace std;

class A{
public:
    virtual int f() = 0;
};

class B : public A{
public:
    int f(){
        cout << "+" << endl;

        return 0;
    }
};

class C : public A{
public:
    int f(){
        cout << "-" << endl;

        return 0;
    }
};

int main(){
    B b;
    C c;
    // твой вариант
    void * p;
    p = (B*)&b;
    ((B*)p)->f();

    // вариант с виртуальным наследованием выгл€дит как то логичней и тратитс€ меньше процессорного времени на преобразование.
    A * a;
    a = &b;
  a->f();

    return 0;
}
