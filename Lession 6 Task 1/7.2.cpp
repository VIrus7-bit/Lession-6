#include <iostream>
#define MODE 1
int add(int a, int b);

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int a = 0, b = 0;

#ifndef MODE
#endif
#if MODE == 0
	cout << "Работаю в режиме тренировки" << endl;
#elif MODE == 1
	cout << "Работаю в боевом режиме\n";
	cout << "Введите число 1: "; cin >> a;
	cout << "Введите число 2: "; cin >> b;
	cout << "Результат сложения: " <<add(a,b)<<endl;
#elif MODE == 2
	cout << "Неизвестный режим. Завершение работы" << endl;
#endif

	system("pause");
}

int add(int a, int b) {return a + b;}