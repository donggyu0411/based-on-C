// 객체의 생성은 반드시 new와 delete 사용
#include <iostream>
using namespace std;

class Simple
{
public:
	Simple()
	{
		cout << "I'm a simple constructor!" << endl;
	}
};

int main()
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple)*1);

	cout << endl << "end of main" << endl;

	delete sp1;
	free(sp2);

	system("pause");
}