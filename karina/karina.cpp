﻿#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 20;
	cout << a << " " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;
	return 0;
}
Output: 10 20
	20 10
	//допустим тут ничего