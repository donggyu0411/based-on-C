// 참조자의 선언 가능 범위
// 참조자는 변수에 "별명"을 붙인다. c언어에서는 포인터를 통해.
// c++은 참조자를 통해.
#include <iostream>
using namespace std;

int main()
{
	int arr[3] = { 1,2,3 };

	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	int* ptr1 = &arr[0];
	int* ptr2 = &arr[1];
	int* ptr3 = &arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	cout << ptr1 << endl;
	cout << ptr2 << endl;
	cout << ptr3 << endl;

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
	cout << *ptr3 << endl;

	system("pause");
}