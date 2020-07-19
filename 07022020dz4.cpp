/*
Задание 3: Пользователь вводит любое целое число.Необходимо из этого целого числа удалить все цифры 3 и 6 и вывести обратно на экран.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int namberout = 0, namberin;
	cout << "Введите число: ";
	cin >> namberin;
	while (namberin > 0)
	{
		if (namberin % 10 != 3 && namberin % 10 != 6)
		{
			namberout = namberout * 10;
			namberout = namberout + namberin % 10;
		}
		namberin = namberin / 10;
	}
	cout << "Полученное число: ";
	while (namberout > 0)
	{
		cout << namberout % 10;
		namberout = namberout / 10;
	}
	cout << endl;
	return 0;
}
