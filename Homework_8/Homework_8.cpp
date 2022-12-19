// Homework_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

//Задание 6:
//Написать функцию, которая получает указатель на динамический массив и его размер.
//Функция должна удалить из массива все простые числа и вернуть указатель на новый динамический массив.

//Задание 7:
//Написать функцию, которая получает указатель на статический массив и его размер.
//Функция распределяет положительные, отрицательные и нулевые элементы в отдельные динамические массивы.

//void view(int* mass, int* size)
//{
//	for (int i = 0; i < *size; i++) {
//		cout << *(mass + i) << " ";
//	}
//	cout << endl;
//}
//void createArr(int* mass,const int* size)
//{
//	for (int i = 0; i < *size; i++) {
//		*(mass + i) = rand() % (10 - (-10)) + (-10);
//		cout << *(mass + i) << " ";
//	}
//	cout << endl;
//}
//
//void raspred(int* mass,const int* size)
//{
//	int n = 0, m = 0, p = 0, o = 0;
//	for (int i = 0; i < *size; i++) {
//		if (*(mass + i) < 0)
//			m++;
//		if (*(mass + i) > 0)
//			p++;
//		else
//			o++;
//	}
//	int* M = new int[m];
//	int* P = new int[p];
//	int* O = new int[o];	
//	for (int i = 0; i < *size; i++) {
//		if (*(mass + i) > 0) {
//			*(P + n) = *(mass + i);
//			n++;
//		}
//		if (*(mass + i) < 0) {
//			*(M + n) = *(mass + i);
//			n++;
//		}
//		else 
//		{
//			*(O + n) = *(mass + i);
//			n++;
//		}
//	}
//	int* pp = &p;
//	int* pm = &m;
//	int* po = &o;
//	view(P, pp);
//	view(M, pm);
//	view(O, po);
//}

//Задание 1:
//Написать функцию, которая удаляет из строки символ с заданным номером.

int main()
{//Задание 7:    // Не знаю почему не работает, вроде все правильно. Заполняет массивы мусором.
	/*srand(time(NULL));
	setlocale(0, "");
	const int size = 10;
	int A[size];
	createArr(A, &size);
	raspred(A, &size);*/

	//Задание 1:
	char word

}

