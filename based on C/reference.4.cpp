// 참조자와 함수
// 참조자를 매개 변수로 하는 함수
#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2);

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main()
{
	int val1 = 10;
	int val2 = 20;

	cout << "---before swapping" << endl;
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	SwapByRef2(val1, val2);

	cout << "---after swapping" << endl;
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	system("pause");
}