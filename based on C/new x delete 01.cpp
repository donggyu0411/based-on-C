// new�� delete�� ���� �� ���� ���� �޸� �Ҵ�
#include <iostream>
#include <string.h>

using namespace std;

char* MakeStr(int len)
{
	char* str = new char[len];
	return str;
}

int main()
{
	char* mystr = MakeStr(20);

	strcpy_s(mystr, 20, "I am so happy."); // "I am so happy ��� ���ڿ��� mystr�� �����ϴ� �Լ� 
	cout << mystr << endl;

	delete[]mystr; // delete[]�� �迭�� �����Ҵ��� �ټ��� �޸𸮸� ������ �� ���
	// �׳� delete�� ���Ϸ� �����Ҵ��� �޸𸮸� ������ �� ���

	system("pause");
}