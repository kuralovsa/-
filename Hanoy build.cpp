#include <iostream>
using namespace std;
void hanoy(int, int, int, int);
int main()
{
    hanoy(3, 1, 2, 3);
    cout << endl;
    return 0;
}
// val - количество дисков.
// start - 1 стержень (стартовый).
// buff - 2 стержень (переходный).
// end - 3 стержень (куда надо переместить).
void hanoy(int val, int start, int buff, int end)
{
    if (val == 0)
        return;
    hanoy(val - 1, start, end, buff);
    cout << start << " -- > " << end << endl;
    hanoy(val - 1, buff, start, end);
    return;
}
