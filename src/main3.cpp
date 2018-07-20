﻿// Task3.cpp: определяет точку входа для консольного приложения.
//
#include <locale.h>  
#include <iostream>

#include "task3.h"

using namespace std;

int main()
{
	// Для коректного вывода руссукого текста на консоль
	setlocale(LC_ALL, "RUS");
	while (1)
	{
		unsigned int value;
		//  Найти сумму всех простых чисел, меньше двух миллионов.
		// Вычисление n простого числа
		cout << "Введите число не превышающее 2 000 000 : " << endl;
		cin >> value;
		cout << "Сумма всех простых чисел меньше " << value << " равна:" << endl;
		cout << sumPrime(value) << endl << endl;
	}


	return 0;
}

