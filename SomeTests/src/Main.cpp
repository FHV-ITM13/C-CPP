#include <iostream>
#include <string>
#include <vector>
using namespace std;

int byValVolume(int, int, int);
int byRefVolume(int&, int&, int&);

int main() {
	cout << "Size of test" << endl;
	vector<int> v;
	enum testEnum { test, test2 };

	cout << "int: " << sizeof(int) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "bool: " << sizeof(bool) << endl;
	cout << "short: " << sizeof(short) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "string:" << sizeof(string) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "vector: " << sizeof(v) << endl;
	cout << "enum: " << sizeof(testEnum) << endl;

	cout << endl << endl;

	cout << "call by ref/by val test" << endl;
	int a = 2, b = 2, c = 2;
	cout << "variable addresses:" << endl;
	cout << "adr a: " << &a << endl;
	cout << "adr b: " << &b << endl;
	cout << "adr c: " << &c << endl;
	cout << "call by value" << endl;
	cout << byValVolume(a, b, c) << endl << endl;
	cout << "call by ref" << endl;
	cout << byRefVolume(a, b, c) << endl;

	cout << endl << endl;

	cout << "bit operators" << endl;
	int x = 1, y = 2, res;

	res = x & y;
	cout << "0x01 & 0x10: " << res << endl;
	res = x | y;
	cout << "0x01 | 0x10: " << res << endl;
	res = x ^ y;
	cout << "0x01 ^ 0x10: " << res << endl;
	res = x << y;
	cout << "0x01 << 0x10: " << res << endl;
	res = x >> y;
	cout << "0x01 >> 0x10: " << res << endl;
	res = y >> x;
	cout << "0x10 >> 0x01: " << res << endl;


	unsigned int z = 2;
	cout << "not unsigned ~0x10: " << ~y << endl;
	cout << "unsigned ~0x10: " << ~z << endl;

	return 0;
}

int byValVolume(int width, int height, int length) {
	cout << "adr a: " << &width << endl;
	cout << "adr b: " << &height << endl;
	cout << "adr c: " << &length << endl;
	return width * height * length;
}

int byRefVolume(int &width, int &height, int &length) {
	cout << "adr a: " << &width << endl;
	cout << "adr b: " << &height << endl;
	cout << "adr c: " << &length << endl;

	return (width) * (height) * (length);
}
