// 함수의 변환형이 참조형(reference type)인 경우

#include <iostream>
using namespace std;

int& RefRetFunc1(int& ref)
{
	ref++;
	return ref;
}

int main()
{
	int num1 = 1;
	int& num2 = RefRetFunc1(num1);

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	cout << "========" << endl;

	num1++; //num2와 같음

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	cout << "========" << endl;

	num2++;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	system("pause");
}