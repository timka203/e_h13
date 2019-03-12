#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#include<cstring>
using namespace std;
void task1()
{
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	int f = strnlen_s(str, 100);
	for (size_t i = 0; i <= f; i++)
	{
		if (i ==(f-7))
		{
			switch (str[i])
			{
			case 49:cout << "один миллион  "; break;
			case 50:cout << "два миллиона  "; break;
			case 51:cout << "три миллиона  "; break;
			case 52:cout << "четыре миллиона  "; break;
			case 53:cout << "п€ть миллионов  "; break;
			case 54:cout << "шесть  миллионов  "; break;
			case 55:cout << "семь миллионов  "; break;
			case 56:cout << "восемь  миллионов  "; break;
			case 57:cout << "дев€ть миллионов    "; break;
			default:
				break;
			}
		}
			if (i == (f-6)||i==(f-3))
			{
				switch (str[i])
				{
				case 49:cout << "сто  "; break;
				case 50:cout << "двести  "; break;
				case 51:cout << "триста  "; break;
				case 52:cout << "четыреста "; break;
				case 53:cout << "п€тьсот  "; break;
				case 54:cout << "шестьсот  "; break;
				case 55:cout << "семьсот  "; break;
				case 56:cout << "восемьсот    "; break;
				case 57:cout << "дев€тьсот    "; break;
				default:
					break;
				}
			}
			if (i == (f-5)||i==(f-2))
			{
				switch (str[i])
				{
				case 49:cout << "дес€ть  "; break;
				case 50:cout << "двадцать  "; break;
				case 51:cout << "тридцать  "; break;
				case 52:cout << "сорок "; break;
				case 53:cout << "п€тьдес€т  "; break;
				case 54:cout << "шестьдес€т  "; break;
				case 55:cout << "семьдес€т  "; break;
				case 56:cout << "восемьдес€т    "; break;
				case 57:cout << "дев€носто    "; break;
				default:
					break;
				}
			}
			if (i == (f-4))
			{
				switch (str[i])
				{
				case 48:cout << " тыс€ч "; break;
				case 49:cout << "тыс€ча  "; break;
				case 50:cout << "две тыс€чи  "; break;
				case 51:cout << "три тыс€чи  "; break;
				case 52:cout << "четыре тыс€чи "; break;
				case 53:cout << "п€ть тыс€ч  "; break;
				case 54:cout << "шесть тыс€ч  "; break;
				case 55:cout << "семь тыс€ч "; break;
				case 56:cout << "восемь тыс€ч    "; break;
				case 57:cout << "дев€ть тыс€ч    "; break;
				default:
					break;
				}
			}
			if (i == f-1)
			{
				switch (str[i])
				{
				case 48:cout << "  "; break;
				case 49:cout << "один  "; break;
				case 50:cout << "два  "; break;
				case 51:cout << "три  "; break;
				case 52:cout << "четыре  "; break;
				case 53:cout << "п€ть   "; break;
				case 54:cout << "шесть   "; break;
				case 55:cout << "семь  "; break;
				case 56:cout << "восемь     "; break;
				case 57:cout << "дев€ть     "; break;
				default:
					break;
				}
			}
		}

	}



int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}