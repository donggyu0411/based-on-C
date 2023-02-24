// malloc과 free 복습
// 메모리 문제 때문에 문자열을 다룰때는 char*를 많이 쓴다.
// char*는 문자열을 나타내는 것 , 글자 여러개가 계속 이어진 값을 가질 수 있음

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