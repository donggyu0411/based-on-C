// �������� �� ��ȯ
#include <iostream>
using namespace std;

int RefRetFunc2(int& ref)
{
	ref++;
	return ref;
}

int main()
{
	int num1 = 1;
	int num2 = RefRetFunc2(num1);

	// int& num2 = RefRetFunc2(num1); 
	//-> �����߻�: �Լ��� int ���ϰ��� ����� �����̸�(��, �޸� ����)�� �ƴϴ�.

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	num1 += 2;
	num2 += 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	system("pause");
}