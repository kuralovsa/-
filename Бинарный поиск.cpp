#include <iostream>
using namespace std;
// ������� � ���������� ��������� ������ 
int Search_Binary (int arr[], int left, int right, int key)
{
	int midd = 0;
	while (1)
	{
		midd = (left + right) / 2;
		if (key < arr[midd])       // ���� ������� ������ �������� � ������
			right = midd - 1;      // ������� ������ ������� ������
		else if (key > arr[midd])  // ���� ������� ������ �������� � ������
			left = midd + 1;	   // ������� ����� ������� ������
		else                       // ����� (�������� �����)
			return midd;           // ������� ���������� ������ ������
		if (left > right)          // ���� ������� ���������� 
			return -1;
	}
}

int main()
{
	setlocale (LC_ALL, "rus");
	const int SIZE = 12;
	int array[SIZE] = {};
	int key = 0;
	int index = 0; // ������ ������ � ������� ���������
	for (int i = 0; i < SIZE; i++) // ��������� � ���������� ������
	{
		array[i] = i + 1;
		cout << array[i] << " | ";
	}
	cout << "\n\n������� ����� �����: ";
	cin >> key;
	index = Search_Binary (array, 0, SIZE, key);
	if (index >= 0) 
		cout << "��������� ����� ��������� � ������ � ��������: " << index << "\n\n";
	else
		cout << "� ������� ��� ������ �����!\n\n";
		
	return 0;
}

