// 참조자를 통한 힙 영역 접근
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int* ip = new int; // new int[1]과 같은 표현
	int& ref = *ip; // 참조자를 통한 힙 영역 접근. 즉, int ref를 스택이 아닌 힙에서 생성한 효과

	*ip = 100;

	cout << std::hex << "ip: " << ip << endl; // 주소가 16진수로 표시
	cout << "ip: " << ip << endl; // <iomanip>에 의해 주소가 자동으로 16진수로 표시
	cout << "*ip: " << *ip << endl;
	cout << "ref: " << ref << endl;
	cout << "ref 주소: " << &ref << endl;

	delete ip;

	system("pause");
}