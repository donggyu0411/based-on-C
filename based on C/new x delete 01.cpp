// new와 delete을 통한 힙 영역 동적 메모리 할당
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

	strcpy_s(mystr, 20, "I am so happy."); // "I am so happy 라는 문자열을 mystr에 복사하는 함수 
	cout << mystr << endl;

	delete[]mystr; // delete[]는 배열로 동적할당한 다수의 메모리를 해제할 때 사용
	// 그냥 delete는 단일로 동적할당한 메모리를 해제할 때 사용

	system("pause");
}