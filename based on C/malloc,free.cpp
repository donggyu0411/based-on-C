// malloc�� free ����
// �޸� ���� ������ ���ڿ��� �ٷ궧�� char*�� ���� ����.
// char*�� ���ڿ��� ��Ÿ���� �� , ���� �������� ��� �̾��� ���� ���� �� ����

#include <iostream>
#include <string.h>

using namespace std;

char* MakrStr(int len)  
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main()
{
	char* mystr = MakrStr(20);

	strcpy_s(mystr, 20, "I am so happy.");
	cout << mystr << endl;

	free(mystr);

	system("pause");
}