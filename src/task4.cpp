char *sum(char *x, char *y) // ����� ����� x � y
{
	

	int size = 0;
	bool j = false;

	while (j == false)
	{
		if (x[size] == 0)
			j = true;
		else
			size++;
	}
	int size_x = size - 1;
	
	size = 0;
	j = false;
	while (j == false)
	{
		if (y[size] == 0)
			j = true;
		else
			size++;
	}
	
	int size_y = size-1;
	int t{ 0 };
	int a, b, summ;
	if (size_x > size_y)
		size = size_x;
	else
		size = size_y;
	char *p_summ = new char[size+2];
	p_summ[size+1] = 0;
	for (int i = size; i >= 0; i--)
	{
		a = x[size_x] - 48;
		if (a == -100) a = 0;
		b = y[size_y] - 48;
		if (b == -100) b = 0;
		summ = a + b + t;
		p_summ[i] = summ % 10 + 48;
		t = summ / 10;
		size_x--;
		size_y--;
	}
	

	return p_summ;	
	delete[] p_summ;

}