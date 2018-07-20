﻿// Task_2.cpp: определяет точку входа для консольного приложения.
//

#include <locale.h>  
#include <iostream>

#include "task2.h"

using namespace std;


int main()
{
	// Для коректного вывода руссукого текста на консоль
	setlocale(LC_ALL, "RUS");
	while (1)
	{
		unsigned int value;
		// Проверка числа на простоту
		
		cout << "Введите число для проверки на простоту: " << endl;
		cin >> value;
		bool result = checkPrime(value);
		cout << "Результат: ";
		if(result == true)
			cout << "число простое" << endl;
		else 
			cout << "число не является простым" << endl;

		// Вычисление n простого числа
		cout << "Введите номер простого числа в ряду: " << endl;
		cin >> value;
		cout << "Результат: " << nPrime(value) << endl;

		// Нахождение ближайшего простого числа
		// Вычисление n простого числа
		cout << "Введите число для нахождения ближайшего следующего к нему простого числа: " << endl;
		cin >> value;
		cout << "Результат: " << nextPrime(value) << endl;
	}
    return 0;
}

