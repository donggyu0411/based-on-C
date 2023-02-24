// const 참조자를 통한 상수 참조
// int& ref = 20 는 에러 but, const int& ref = 20은 가능

#include <iostream>
using namespace std;

int Adder(const int& a, const int& b)
{
	return a + b;
}

int main()
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "num3: " << num3 << endl;
	cout << "Adder(4,5): " << Adder(4, 5) << endl;// const int 참조자에 정수 상수 사용 가능

	system("pause");

}