﻿#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double a, b, c, x, y, z;
	cout << "Введите значение x: ";
	cin >> x;
	/*Два многочлена отличаются только двумя знаками,
	поэтому многие переменные мы можем использовать сразу для двух многочленов*/
	a = x * x;
	// Занесем значение x^2 в отдельную переменную "a"
	b = x * (23 * a + 32);
	//Вынесем x за скобки.Переменная "b" отличается знаком в двух многочленах
	c = a * 69 + 8;
	//Именно переменная "c" остается такой же в двух многочленах
	y = c + b;
	z = c - b;
	cout << "Значение 23x^3 + 69x^2 + 32x + 8 равно " << y << "\n";
	cout << "Значение -23x^3 + 69x^2 - 32x + 8 равно " << z << "\n";
}