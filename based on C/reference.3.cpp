// 포인터 변수의 참조자
// 더블포인터 : 포인터의 주소를 저장하는 포인터

#include <iostream>
using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num; // ptr은 처음에는 num을 가리킨다
	int** dptr = &ptr;

	int& ref = num; // int &ref = num 과 같음
	int*& pref = ptr; // int* (&pref) = ptr과 같음
	int**& dpref = dptr; // int** (&dpref) = dptr과 같음

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	system("pause"); 
}
 
// 정리해보면, 
// *dptr = ptr
// **dptr = *ptr = num 