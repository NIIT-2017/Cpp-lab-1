#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <cstring>

void freeMemory(char** str,int size) {
	for (int x = 0; x <size; x++) {
		delete[] str[x];
	}
	delete[]str;
}

void split(char ***result, int *N, char *buf, char ch) {
	// N - ����������, � ��� - ���-�� ��������(������)
	
	
	char *strPtr=new char[strlen(buf)];// ������ ���������� �� �������
	strcpy(strPtr, buf);
	int i = 0;
	int beg = 0;
	int count = 0;
	
	while (strPtr[i] == ch) {
		i++;
	}
	if (i != 0)
		beg = i + 1;
	while (strPtr[i]!='\0')
	{
		if (strPtr[i] == ch && strPtr[i + 1] != ch)
			count++;
		i++;

	}
	if (strPtr[strlen(buf) - 1] == ch)
	{
		*N = count;
	}
	else
	{
		*N = count + 1;
	}

	char **arr = new char*[*N];
	int res = 0;
	while (*strPtr != '\0') 
	{
		while (*strPtr == ch)
		{
			strPtr++;
		}
		int len = 0;
		while (*strPtr!=ch && *strPtr !='\0')
		{
			strPtr++;
			len++;
		}
		arr[res] = new char[len + 1];
		memcpy(arr[res], strPtr - len, len);
		arr[res][len] = '\0';
		res++;
	}
	*result = arr;
	

	//strPtr[i] = strtok(buf, &ch);
	//++i;

	//while (strPtr[i - 1] != NULL) //��������� ������ �� ������� � ��������� �� ������ ������� ������� � ������ strPtr
	//{
	//	strPtr[i] = strtok(NULL, &ch);
	//	i++;
	//}

	//M = i - 1;
	//*N = M;
	//for (int j = 0; j < M; j++) {
	//	cout << strPtr[j] << endl;
	//}
	//
	//*result = strPtr;
	

	
}






