// const �����ڸ� ���� ��� ����
// int& ref = 20 �� ���� but, const int& ref = 20�� ����

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
	cout << "Adder(4,5): " << Adder(4, 5) << endl;// const int �����ڿ� ���� ��� ��� ����

	system("pause");

}