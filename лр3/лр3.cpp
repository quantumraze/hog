#include <iostream>
#include "stdio.h"
#include "windows.h" 
using namespace std;

int main()
{
	cout << "Hello World!"; // хелоу ворлд

    SetConsoleCP(1251);   // Відновлена версія після checkout
    SetConsoleOutputCP(1251);

	unsigned int C1 = 5, C2 = 11, C3 = 7;
	unsigned int t1 = 8, t2 = 5, t3 = 6;
	unsigned int k1, k2, k3, s;

	k1 = C1 * t1;
	k2 = C2 * t2;
	k3 = C3 * t3;

	s = k1 + k2 + k3;

	printf("k1 = %u\n", k1);
	printf("k2 = %u\n", k2);
	printf("k3 = %u\n", k3);
	printf("s = %u\n", s);
}
