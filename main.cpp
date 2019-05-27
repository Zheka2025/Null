//NullTerminatedLInes
#include <iostream>
#include <windows.h>

using namespace std;
void InputLine(char str[], const int n);
int StrLen(char str[]);
void UpperCase(char str[]); //Переводит строку в верхний регистр
void LoverCase(char str[]);
void Capitalize(char str[]);
void main()
{
	setlocale(LC_ALL, "");
	/*char str[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char msg[] = "Hello";
	cout << msg << endl;*/
	const int n = 20;
	char str[n] = {};
	cout << "Введите строку: ";
	/*cin >> str;*/
	InputLine(str, n);
	cout << str << endl;
	cout << StrLen(str) << endl;
	UpperCase(str);
	cout << str << endl;
	LoverCase(str);
	cout << str << endl;
	Capitalize(str);
	cout << str << endl;

}
void InputLine(char str[], const int n)
{
	SetConsoleCP(1251);
	cin.getline(str, n);
	SetConsoleCP(866);
}
int StrLen(char str[])
{
	int Couter = 0;
	for (; *str; str++)
	{
		Couter++;

	}
	return Couter;
}
void UpperCase(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (
			str[i] >= 'a' && str[i] <= 'z' ||
			str[i] >= 'а' && str[i] <= 'я'
			)
			str[i] -= 32;
	}
}
void LoverCase(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (
			str[i] >= 'A' && str[i] <= 'Z' ||
			str[i] >= 'А' && str[i] <= 'Я'
			)
			str[i] += 32;
	}

}
void Capitalize(char str[])
{
	if (str[0] >= 'a' && str[0] <= 'z' || str[0] >= 'а' && str[0] <= 'я')
		str[0] -= 32;
	for (int i = 0; str[i]; i++)
	{
		if (
			(str[i] >= 'a' && str[i] <= 'z' ||
				str[i] >= 'а' && str[i] <= 'я') &&
			str[i - 1] == ' '
			)
			str[i] -= 32;
	}
}