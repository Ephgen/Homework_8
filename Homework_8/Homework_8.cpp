// Homework_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

//Задание 6: 
//Написать функцию, которая получает указатель на динамический массив и его размер.
//Функция должна удалить из массива все простые числа и вернуть указатель на новый динамический массив.
int* createViewArr(int& size)
{
	cout << " Введите размер массива \n";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		*(arr + i) = 1 + rand() % 100;
		cout << *(arr + i) << " ";
	}
	return arr;
}
void simpledel(int* arr,int* size)
{
	int  nsize = 0;
	for (int i = 0; i < *size; i++) {
		for (int j = 2; j < *(arr + i) / 2; j++) {
			if (*(arr + i) % j == 0) {
				nsize++;
				break;
			}
		}		
	}
	int* arr2 = new int[nsize];
	int n = 0;
	for (int i = 0; i < *size; i++) {
		for (int j = 2; j < *(arr + i) / 2; j++) {
			if (*(arr + i) % j == 0)
			{
				*(arr2 + n) = *(arr + i);
				n++;
				break;
			}
		}
		
	}
	cout << endl;
	for (int i = 0; i < nsize; i++) {
		cout << *(arr2 + i) << " ";
	}
}

//Задание 7:
//Написать функцию, которая получает указатель на статический массив и его размер.
//Функция распределяет положительные, отрицательные и нулевые элементы в отдельные динамические массивы.

void view(int* mass, int* size)
{
	for (int i = 0; i < *size; i++) {
		cout << *(mass + i) << " ";
	}
	cout << endl;
}
void createArr(int* mass,const int* size)
{
	for (int i = 0; i < *size; i++) {
		*(mass + i) = rand() % (10 - (-10)) + (-10);
		cout << *(mass + i) << " ";
	}
	cout << endl;
}

void raspred(int* mass,const int* size)
{
	int m = 0, p = 0, o = 0;
	for (int i = 0; i < *size; i++) {
		if (*(mass + i) < 0)
			m++;
		if (*(mass + i) > 0)
			p++;
		if (*(mass + i) == 0)
			o++;
	}
	int* M = new int[m];
	int* P = new int[p];
	int* O = new int[o];	
	m = 0; p = 0; o = 0;
	for (int i = 0; i < *size; i++) {
		if (*(mass + i) > 0) {
			*(P + p) = *(mass + i);
			p++;
		}
		if (*(mass + i) < 0) {
			*(M + m) = *(mass + i);
			m++;
		}
		if (*(mass + i) == 0) {
			*(O + o) = *(mass + i);
			o++;
		}
	}
	int* pp = &p;
	int* pm = &m;
	int* po = &o;
	view(P, pp);
	view(M, pm);
	view(O, po);
}

//Задание 1:
//Написать функцию, которая удаляет из строки символ с заданным номером.
void delsim(char* word, int simb)
{

	*(word + simb - 1) = '\0';	
}

//Задание 2:
//Написать функцию, которая удаляет из строки все вхождения в нее заданного символа.
void del(char* word,char simb)
{
	int i = 0;
	while (*(word + i) != '\0')
	{
		if (*(word + i) == simb)
			*(word + i) = '\0';
		i++;
	}
}

//Задание 3:
//Написать функцию, которая вставляет в строку в указанную позицию заданный символ.
void pozit(char* word, char simbol, int poz)
	{
	*(word + poz - 1) = simbol;
	}

//Задание 4:
//Написать программу, которая заменяет все символы точки "." в строке, введенной пользователем, на символы восклицательного знака "!".
void change(char* word, int size)
{
	for (int i = 0; i < size; i++) {
		if (*(word + i) == '.')
			*(word + i) = '!';
	}
}
//Задание 7:
//Дана строка символов.Заменить в ней все пробелы на табуляции.
void changeSpace(char* word, int size)
{
	for (int i = 0; i < size; i++) {
		if (*(word + i) == ' ')
			*(word + i) = '\t';
	}
}

int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Задание 6: Указатели
//Написать функцию, которая получает указатель на динамический массив и его размер.
//Функция должна удалить из массива все простые числа и вернуть указатель на новый динамический массив.
	//int size;
	//int* arr1 = createViewArr(size);	
	//int* psize = &size;
	//simpledel(arr1,psize);


	//Задание 7:    // .
	/*srand(time(NULL));
	setlocale(0, "");
	const int size = 10;
	int A[size];
	createArr(A, &size);
	raspred(A, &size);*/

	//Задание 1:
	/*char word[] = "abrakadabra";
	int simbol;
	cout << word;
	char* pword = word;
	cout << endl << " Введите номер символа который надо удалить" << endl;
	cin >> simbol;
	delsim(word,simbol);
	for(int i = 0;i < 12;i++)
	{
		cout << *(word + i) << " ";
	}*/

	//Задание 2:
	/*char word[] = "abrakadabra";
	char simbol;
	cout << word;
	cout << endl << " Какой символ из строки надо удалить?"<< endl;
	cin >> simbol;
	del(word, simbol);
	for (int i = 0; i < 12; i++)
	{
		cout << *(word + i) << " ";
	}*/

	//Задание 3:
	/*char word[] = "abrakadabra";
	char simbol;
	int pozition;
	cout << word;
	cout << endl << " Какой символ хотите вставить?" << endl;
	cin >> simbol;
	cout << endl << " На какую позицию хотите вставить этот символ?" << endl;
	cin >> pozition;
	pozit(word, simbol,pozition);
	int i = 0;
	while (*(word + i) != '\0')
	{
		cout << *(word + i) << " ";
		i++;
	}*/

	//Задание 4:
	/*const int size = 100;
	char word[size];
	cout << " Введите свою строку." << endl;
	cin.getline(word, size);
	change(word, size);
	int i = 0;
	while (*(word + i) != '\0')
	{
		cout << *(word + i) << " ";
		i++;
	}*/

	//Задание 5:
	/*const int size = 100;
	char word[size];
	char simbol;
	cout << " Введите свою строку." << endl;
	cin.getline(word, size);
	cout << "\n Какой символ в строке хотели бы посчитать?\n";
	cin >> simbol;
	int i = 0, n = 0;
	while (*(word + i) != '\0')
	{
		if (*(word + i) == simbol)
			n++;
		i++;
	}	*/

	/*Задание 6:
	Пользователь вводит строку.Определить количество букв, количество цифр и количество остальных символов, присутствующих в строке.
		Рекомендации :
		Для проверки, что символ является числом, не обязательно сравнивать его со всеми 10 - ю цифрами, достаточно сравнить код символа с диапазоном 
		кодов цифр.Код символа 0 – 48, 1 – 49, 2 – 50 …. 9 – 57.*/

	char mass[300];
	cout << " Введите строку символов которую надо разложить на цифры, буквы и другие символы: " << endl;
	cin.getline(mass,300);
	int size = 0;           
	while (*(mass + size) != '\0')	
		size++; //Общее количество символов	
	cout << " В строке всего - " << size << " символов" <<endl;
	int rletter = 0, number = 0, eletter = 0, other = 0;
	for (int i = 0; i < size; i++) {
		if (mass[i] >= 48 && mass[i] <= 57)
			number++;
		else if (mass[i] >= 128 && mass[i] <= 175 || mass[i] >= 224 && mass[i] <= 241)
			rletter++;
		else if (mass[i] >= 65 && mass[i] <= 90 || mass[i] >= 97 && mass[i] <= 122)
			eletter++;
		else
			other++;
	}
	cout << number << " - чисел" << endl;
	cout << rletter << " - русских букв" << endl;
	cout << eletter << " - английских букв" << endl;
	cout << other << " - Всех остальных символов" << endl;

	//Задание 7:
	//Дана строка символов.Заменить в ней все пробелы на табуляции.
	/*const int size = 100;
	char word[size];
	cout << " Введите свою строку." << endl;
	cin.getline(word, size);
	changeSpace(word, size);
	int i = 0;
	while (*(word + i) != '\0')
	{
		cout << *(word + i);
		i++;
	}*/

	/*Задание 9:
	Подсчитать количество слов во введенном предложении.*/
	/*const int size = 100;
	char word[size];
	cout << " Введите свою строку." << endl;
	cin.getline(word, size);
	int i = 0,w = 0;
	while (*(word + i) != '\0')
	{
		if (*(word + i) == ' ' && i != 0 && *(word + i + 1) != '\0')
			w++;
		i++;
	}
	cout << " Количество слов в предложении - " << ++w;*/

	/*Задание 10:
	Дана строка символов.Необходимо проверить является ли эта строка палиндромом.*/
	/*const int size = 100;
	char word[size];
	cout << " Введите свою строку." << endl;
	cin.getline(word, size);
	int k = 0;
	while (*(word + k) != '\0')
		k++;
	int p = 0;
	for (int i = 0; i <= k/2; i++) {
		if (*(word + i) == *(word + k - 1 - i))
			p += 1;
	}
	if (p == (k / 2 + 1))
		cout << endl << " Ваше слово палиндром";
	else
		cout << endl << " Ваше слово не палиндром";*/
}

