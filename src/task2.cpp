bool checkPrime(unsigned int value) // �������� ����� �� ��������.
{
	bool res{ true};
	for (unsigned int i = value - 1; i > 1; i--)
		if (value %i == 0) res=false;
	return res;
}

unsigned long long nPrime(unsigned n) // ���������� n - ��� �������� �����(� ����).
{
	int x{ 1 };
	for (int i = 0; i < n;)
	{
		x++;
		if (checkPrime(x) == true)
			i++;
	}
	return x;
}
unsigned long long nextPrime(unsigned long long value) // ���������� ���������� ���������� �������� ����� � value.
{

	if (checkPrime(value+1) == true)
		return value+1;
	else
		nextPrime(value+1);
}
