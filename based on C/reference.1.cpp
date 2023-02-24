// ������(reference)�� ����
#include <iostream>
using namespace std;

int main()
{
	int num1 = 20;
	int& num2 = num1; // num1�� ���� �޸� ������ ����Ű�� �� �ϳ��� ���� �̸�
	                  // ��, �����ڴ� ������ ���ؼ��� ������ �����ϰ�, ����� ���ÿ� ������ ������ �ʱ�ȭ �ؾ� �Ѵ�.
	int* num3 = &num1; // num1�� ���� �ּҸ� ����Ű�� ������

	cout << "num1�� �ּ�: " << &num1 << endl;
	cout << "num2�� �ּ�: " << &num2 << endl;
	cout << "num3�� �ּ�: " << &num3 << endl;

	cout << "sizeof num1: " << sizeof(num1) << endl;
	cout << "sizeof num2: " << sizeof(num2) << endl;
	cout << "sizeof num3: " << sizeof(num3) << endl;
	
	num2 = 3047; // int�� ���� num1ó�� int �����ڷ� ����� num2�� �������� �Ҵ��� �� �ִ�.

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;

	system("pause");
}