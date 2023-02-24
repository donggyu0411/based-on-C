#include <iostream>
#include <cstring>
#include <cmath>

int main()
{
	char str1[] = "Result";
	char str2[30];

	strcpy_s(str2, str1); // strcpy_s는 오버로딩되어 있음 (즉, 크기가 정해진 배열을 두 입력으로 사용할 수 있음)
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, fabs(-1.25));

	system("pause");
}