// ������ ������ ������
// ���������� : �������� �ּҸ� �����ϴ� ������

#include <iostream>
using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num; // ptr�� ó������ num�� ����Ų��
	int** dptr = &ptr;

	int& ref = num; // int &ref = num �� ����
	int*& pref = ptr; // int* (&pref) = ptr�� ����
	int**& dpref = dptr; // int** (&dpref) = dptr�� ����

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	system("pause"); 
}
 
// �����غ���, 
// *dptr = ptr
// **dptr = *ptr = num 