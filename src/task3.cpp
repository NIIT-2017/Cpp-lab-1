#include "task2.h"

unsigned long long sumPrime(unsigned int hbound) // ����� ���� ����� �� hbound(�� ������� ���)
{
	unsigned long long sum{0};
	for (unsigned int i = 2; i < hbound; i++)
		if (checkPrime(i) == true)
			sum += i;
	return sum;
}