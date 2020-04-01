#import <iostream>
using namespace std;

int factorial(int n)
{
    if(n <= 1)  // ������� ������
    {
        return 1;
    }
    return n  * factorial(n - 1); //����������� ����� � ������ ����������
}
// factorial(1):     return 1
// factorial(2):     return 2 * factorial(1) (return 2 * 1)
// factorial(3):     return 3 * factorial(2) (return 3 * 2 * 1)
// factorial(4):     return 4 * factorial(3) (return 4 * 3 * 2 * 1)
// ��������� ��������� ����� n (n ������ ���� ��������� ��-�� ���� int
// ������������� ��������. �� �������� ����� ������� long long  � ������
// �������� �������� ������. ���� ����� �������� ��������� � �� ����� ������, ��
// ����� ������ ���������� �� ������� � ������������ ������ � ��������������
// ������������ ������������).

void reverseBinary(int n)
{
    if (n == 0)  // ������� ������
    {
        return;
    }
    cout << n%2;
    reverseBinary(n/2); //����������� ����� � ������ ����������
}
// �������� �������� ������������� ����� � �������� �������

void forvardBinary(int n)
{
    if (n == 0)  // ������� ������
    {
        return;
    }
    forvardBinary(n/2); //����������� ����� � ������ ����������
    cout << n%2;
}
// �������� ������� ��� ��������� ����������
// �������� �������� ������������� ����� � ������ �������
// ������� �������� �������� �������� �����

void ReverseForvardBinary(int n)
{
    if (n == 0)  // ������� ������
    {
        return;
    }
    cout << n%2; // �������� � �������� �������
    ReverseForvardBinary(n/2); //����������� ����� � ������ ����������
    cout << n%2; // �������� � ������ �������
}
// ������� �������� ������� �������� ������������� � �������� �������,
// � ����� � ������ �������


int product(int x, int y)
{
    if (y == 0)  // ������� ������
    {
        return 0;
    }
    return (x + product(x, y-1)); //����������� ����� � ������ ����������
}
// ������� ��������� ������������ x * y ( ���������� x y ���)
// ������� �������� � ����� ������ ��������,
// ��������� ��� ������� ��������� ��������
