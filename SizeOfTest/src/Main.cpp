#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
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

	return 0;
}
