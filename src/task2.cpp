bool checkPrime(unsigned int value) // �������� ����� �� ��������.
{
	bool res{ false };
	for (unsigned int i = value - 1; i > 1; i--)
		if (value %i == 0) res=true;
	return res;
}

unsigned long long nPrime(unsigned n) // ���������� n - ��� �������� �����(� ����).
{
	int x{ 1 };
	for (int i = 0; i < n;)
	{
		x++;
		if (checkPrime(x) == false)
			i++;
	}
	return x;
}
unsigned long long nextPrime(unsigned long long value) // ���������� ���������� ���������� �������� ����� � value.
{
	unsigned long long n=value +1;
	if (checkPrime(n) == false)
		return n;
	else
		nextPrime(n);
}
