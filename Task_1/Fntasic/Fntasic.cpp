// Fntasic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(0, "");

	string* str = new string();

	cout << "Введите строку: ";
	getline(cin, *str);
	transform(str->begin(), str->end(), str->begin(), tolower);

	string nstr;

	for (char x : *str)
	{
		if (str->find_first_of(x) == str->find_last_of(x))
			nstr.push_back('(');
		else
			nstr.push_back(')');
	}

	cout << "Новая строка: " << nstr;
}
