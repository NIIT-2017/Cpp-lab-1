#include<iostream>
#include <cstring>
#include "task5.h"

int main() {
	
	int N = 0;
	 char buf[] = "This string must be broke by lexems.";

	 char ch = ' ';
	
	char ** result=nullptr;
	

	split(&result, &N, buf, ch);// ��������� ������ buf �� ��������� � ������
	//	���������� � result, � ����������� �� ������ N ���������� ���������� ��������.
	for (int i = 0; i < N; i++) {
		cout << result[i] << endl;
	}

	for (int i = 0; i < N; i++) {
		delete[] result[i];
	}
		delete[] *result;
	
	
	return 0;
}