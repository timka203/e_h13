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
			case 49:cout << "���� �������  "; break;
			case 50:cout << "��� ��������  "; break;
			case 51:cout << "��� ��������  "; break;
			case 52:cout << "������ ��������  "; break;
			case 53:cout << "���� ���������  "; break;
			case 54:cout << "�����  ���������  "; break;
			case 55:cout << "���� ���������  "; break;
			case 56:cout << "������  ���������  "; break;
			case 57:cout << "������ ���������    "; break;
			default:
				break;
			}
		}
			if (i == (f-6)||i==(f-3))
			{
				switch (str[i])
				{
				case 49:cout << "���  "; break;
				case 50:cout << "������  "; break;
				case 51:cout << "������  "; break;
				case 52:cout << "��������� "; break;
				case 53:cout << "�������  "; break;
				case 54:cout << "��������  "; break;
				case 55:cout << "�������  "; break;
				case 56:cout << "���������    "; break;
				case 57:cout << "���������    "; break;
				default:
					break;
				}
			}
			if (i == (f-5)||i==(f-2))
			{
				switch (str[i])
				{
				case 49:cout << "������  "; break;
				case 50:cout << "��������  "; break;
				case 51:cout << "��������  "; break;
				case 52:cout << "����� "; break;
				case 53:cout << "���������  "; break;
				case 54:cout << "����������  "; break;
				case 55:cout << "���������  "; break;
				case 56:cout << "�����������    "; break;
				case 57:cout << "���������    "; break;
				default:
					break;
				}
			}
			if (i == (f-4))
			{
				switch (str[i])
				{
				case 48:cout << " ����� "; break;
				case 49:cout << "������  "; break;
				case 50:cout << "��� ������  "; break;
				case 51:cout << "��� ������  "; break;
				case 52:cout << "������ ������ "; break;
				case 53:cout << "���� �����  "; break;
				case 54:cout << "����� �����  "; break;
				case 55:cout << "���� ����� "; break;
				case 56:cout << "������ �����    "; break;
				case 57:cout << "������ �����    "; break;
				default:
					break;
				}
			}
			if (i == f-1)
			{
				switch (str[i])
				{
				case 48:cout << "  "; break;
				case 49:cout << "����  "; break;
				case 50:cout << "���  "; break;
				case 51:cout << "���  "; break;
				case 52:cout << "������  "; break;
				case 53:cout << "����   "; break;
				case 54:cout << "�����   "; break;
				case 55:cout << "����  "; break;
				case 56:cout << "������     "; break;
				case 57:cout << "������     "; break;
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