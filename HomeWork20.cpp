#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void showArr(int a[], int len);
int searchIndex(int a[], int len, int key, int begin = 0);
int searchLastIndex(int a[], int len, int key, int begin = 0);
int maxElement(int a[], int len);
int minElement(int a[], int len);
int meanValue(int a[], int len);
void range(int a[], int len, int A, int B);
int counter(int a[], int len, int key);

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int n, m, k;
	int a[100];
	for (int i = 0; i < 100; i++)
		a[i] = rand() % 201 - 100;

	cout << "Массив:\n";
	showArr(a, 100);
	cout << "\n\n";

	cout << "Нахождение первого вхождения числа в массиве.\n";
	cout << "Вы хотите ввести точку отсчёта?(1 - да, 0 - нет)";
	cin >> k;
	if(k == 1){
		cout << "Введите точку отсчёта для нахождения индекса 1-го вхождения числа:";
		cin >> n;
		cout << endl;
		cout << "Введите число, первое вхождение в массиве которого хотите найти:";
		cin >> m;
		cout << endl;
		cout << "Индекс первого вхождения введённого числа:";
		cout << searchIndex(a, 100, m, n) << "\n\n";
	}
	else{
		cout << endl;
		cout << "Введите число, первое вхождение в массиве которого хотите найти:";
		cin >> m;
		cout << endl;
		cout << "Индекс первого вхождения введённого числа:";
		cout << searchIndex(a, 100, m) << "\n\n";
	}

	cout << "Нахождение последнего вхождения числа в массиве.\n";
	cout << "Вы хотите ввести точку отсчёта?(1 - да, 0 - нет) ";
	cin >> k;
	if (k == 1) {
		cout << "Введите точку отсчёта для нахождения индекса последнего вхождения числа: ";
		cin >> n;
		cout << endl;
		cout << "Введите число, последнее вхождение в массиве которого хотите найти: ";
		cin >> m;
		cout << endl;
		cout << "Индекс последнего вхождения введённого числа: ";
		cout << searchLastIndex(a, 100, m, n) << "\n\n";
	}
	else {
		cout << endl;
		cout << "Введите число, последнее вхождение в массиве которого хотите найти: ";
		cin >> m;
		cout << endl;
		cout << "Индекс последнего вхождения введённого числа: ";
		cout << searchLastIndex(a, 100, m) << "\n\n";
	}

	cout << "Максимальный элемент массива: ";
	cout << maxElement(a, 100) << "\n\n";

	cout << "Минимальный элемент массива: ";
	cout << minElement(a, 100) << "\n\n";

	cout << "Среднее арифметическое всех элементов массива: ";
	cout << meanValue(a, 100) << "\n\n";

	cout << "Введите диапозон элементов массива, которые нужно вывести: ";
	cin >> n >> m;
	cout << endl;
	cout << "Элементы массива в диапозоне от " << n << "-го элемента до " << m << "-го: ";
	range(a,100, n, m);
	cout << "\n\n";

	cout << "Введите число, кол-во вхождений в массиве которого хотите узнать: ";
	cin >> n;
	cout << endl;
	cout << counter(a, 100, n) << "\n\n";

	return 0;
}
void showArr(int a[], int len) {
	cout << "[";
	for (int i = 0; i < len; i++)
		cout << a[i] << ", ";
	cout << "\b\b]";
}
int searchIndex(int a[], int len, int key, int begin) {
	for (int i = begin; i < len; i++)
		if (a[i] == key)
			return i;
	return -1;
}
int searchLastIndex(int a[], int len, int key, int begin) {
	for (int i = len - 1; i > 0; i--)
		if (a[i] == key)
			return i;
	return -1;
}
int maxElement(int a[], int len) {
	int max = a[0];
	for (int i = 1; i <= len; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}
int minElement(int a[], int len) {
	int min = a[0];
	for (int i = 1; i < len; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}
int meanValue(int a[], int len) {
	int sum = 0;
	for (int i = 0; i < len; i++){
		sum += a[i];
	}
	return sum / 100;
}
void range(int a[], int len, int A, int B) {
	for (int i = A; i <= B; i++)
		cout << a[i] << ", ";
}
int counter(int a[], int len, int key) {
	int count = 0;
	for (int i = 0; i < len; i++)
		if (a[i] == key)
			count++;
	return count;
}
