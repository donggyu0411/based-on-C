#include <iostream>
#include <cstring>
#include <cmath>

int main()
{
	char str1[] = "Result";
	char str2[30];

	strcpy_s(str2, str1); // strcpy_s�� �����ε��Ǿ� ���� (��, ũ�Ⱑ ������ �迭�� �� �Է����� ����� �� ����)
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, fabs(-1.25));

	system("pause");
}