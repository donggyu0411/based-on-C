// �����ڸ� ���� �� ���� ����
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int* ip = new int; // new int[1]�� ���� ǥ��
	int& ref = *ip; // �����ڸ� ���� �� ���� ����. ��, int ref�� ������ �ƴ� ������ ������ ȿ��

	*ip = 100;

	cout << std::hex << "ip: " << ip << endl; // �ּҰ� 16������ ǥ��
	cout << "ip: " << ip << endl; // <iomanip>�� ���� �ּҰ� �ڵ����� 16������ ǥ��
	cout << "*ip: " << *ip << endl;
	cout << "ref: " << ref << endl;
	cout << "ref �ּ�: " << &ref << endl;

	delete ip;

	system("pause");
}