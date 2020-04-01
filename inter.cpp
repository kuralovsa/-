#include <iostream>
using namespace std;

int main()
{

	int MyArray[] { 1, 2, 4, 6, 7, 89, 123, 231, 1000, 1235 };

	int x = 0; 
	int a = 0; 
	int b = 9; 

	int WhatFind = 123; 
	bool found; 


	for (found = false; (MyArray[a] < WhatFind) && (MyArray[b] > WhatFind) && !found; )
	{

		x = a + ((WhatFind - MyArray[a]) * (b - a)) / (MyArray[b] - MyArray[a]);

		if (MyArray[x] < WhatFind)   
			a = x + 1;
		else if (MyArray[x] > WhatFind)   
			b = x - 1;
		else
			found = true;
	}

	if (MyArray[a] == WhatFind) 
		cout << WhatFind << " founded in element " << a << endl;
	else if (MyArray[b] == WhatFind) 
		cout << WhatFind << " founded in element " << b << endl;
	else
		cout << "Sorry. Not found" << endl; 
	
	return 0;
}
