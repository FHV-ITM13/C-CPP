#include <iostream>
#include <string>
#include <vector>
using namespace std;

int byValVolume(int, int, int);
int byRefVolume(int&, int&, int&); //C++ - wird automatisch von C++ gemacht
//int byRefVolume2(int*, int*, int* ); //C variante byRefVolume2(&a, &b, &c)

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


	cout << endl << endl << "Const test" << endl;
	const int *pI1 = &x; //increase pointer works, change content not
	int *const pI2 = &x; //change content works, increase pointer not (points always to same memory location)
	const int *const pI3 = &x; //nothing is allowed

	cout << "pI1 Adr: " << pI1 << " value: " << *pI1 << endl;
	cout << "pI2 Adr: " << pI2 << " value: " << *pI2  << endl;
	cout << "pI3 Adr: " << pI3 << " value: " << *pI3  << endl;
	//*pI1 = 10; //assignment of read-only location '* pI1'
	*pI2 = 15;
	//*pI3 = 20; //assignment of read-only location '*(const int*)pI3'
	cout << "changed value to 15 via pI2 - all others were read-only" << endl;
	cout << "pI1 Adr: " << &pI1 << " value: " << *pI1 << endl;
	cout << "pI2 Adr: " << pI2 << " value: " << *pI2  << endl;
	cout << "pI3 Adr: " << pI3 << " value: " << *pI3  << endl;

	++pI1;
	//++pI2;  //increment of read-only variable 'pI2'
	//++pI3; //increment of read-only variable 'pI3'
	cout << "increased pI1 - all others were read-only" << endl;
	cout << "pI1 Adr: " << &pI1 << " value: " << *pI1 << endl;
	cout << "pI2 Adr: " << pI2 << " value: " << *pI2  << endl;
	cout << "pI3 Adr: " << pI3 << " value: " << *pI3  << endl;

	cout << endl << endl << "String test" << endl;
	string *sPtr = new string("Stefan");
	*sPtr += " ist hier";
	cout << endl << endl << "sPtr content before delete: " << *sPtr << endl;
	cout << "sPtr adr before delete: " << sPtr << endl;
	delete sPtr; // don’t forget!!

	//wird Dangling Pointer genannt (defekter Verweis)
	cout << "sPtr adr after delete: " << sPtr << endl; //adr is the same!
	cout << "sPtr content after delete: " << *sPtr << endl << endl; //output is empty

	string *pStrTest1 = new string("Test 1234");
	string *pStrTest2 = pStrTest1;
	cout << "pStrTest1: " << *pStrTest1 << "(adr: " << pStrTest1 << ")" << " pStrTest2: " << *pStrTest2 << "(adr: " << pStrTest2 << ")" << endl;
	cout << "delete both..." << endl;
	//Dangling Pointer
	delete pStrTest1;
	delete pStrTest2;

	cout << "pStrTest1: " << *pStrTest1 << "(adr: " << pStrTest1 << ")" << " pStrTest2: " << *pStrTest2 << "(adr: " << pStrTest2 << ")" << endl;

	//avoid Danlgin Pointer
	pStrTest1 = pStrTest2 = NULL;
	cout << "pStrTest1: adr: " << pStrTest1 << " pStrTest2 adr: " << pStrTest2 << endl;

	//uninitialized pointer test
	string *pStrTest3;
	//program crash!!
	//cout << "length uninitialized pointer: " << pStrTest1->length() << endl;


	cout << endl << endl << "Array/Vector test" << endl;
	int intArr[2] = { 1, 2};
	int *pIntArr[2];
	vector<int> intVector(2);
	vector<int*> pPntVector(2);
	pIntArr[0] = &intArr[0];
	pIntArr[1] = &intArr[1];
	cout << "length intArr: " << sizeof(intArr)/sizeof(*intArr) << endl;
	cout << "length pIntArr: " << sizeof(pIntArr)/sizeof(*pIntArr) << endl;
	cout << "length intVector: " << intVector.size() << endl;
	cout << "length pIntVector: " << pPntVector.size() << endl;

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
