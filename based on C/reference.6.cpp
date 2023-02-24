// 참조형의 값 반환
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
	//-> 에러발생: 함수의 int 리턴값은 명시적 변수이름(즉, 메모리 공간)이 아니다.

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	num1 += 2;
	num2 += 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	system("pause");
}