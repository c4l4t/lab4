#include <iostream>

using namespace std;

int umnoj2(int* a, int n);
int powB(int x, int y);
int F(int i);
int G(int i);

int main()
{
	setlocale(LC_ALL, "Russian");
	int num;
	cout << "Введите номер задания(1, 2 или 3) или 0 для завершения работы: " << endl;
	cin >> num;
	cout << endl;
	system("cls");
	while (num)
	{
		if (num == 1)
		{
			int  n, count = 0;

			cout << "Введите размер массива: ";
			cin >> n;
			int* a = new int[n];
			for (int i = 0; i < n; i++)
			{
				cout << "Введите число: ";
				cin >> a[i];
			}
			cout << "Сумма равна: " << umnoj2(a, n) << endl;
		}
		if (num == 2)
		{
			int y, x;
			cout << "Введите 2 числа: " << endl;
			cout << "x=";
			cin >> x;
			cout << "y=";
			cin >> y;
			if ((x > 0 && y > 0) || (x < 0 && y < 0))
				cout << powB(abs(x), abs(y)) << endl;
			else
				cout << -(int)powB(abs(x), abs(y)) << endl;
			system("pause");
		}
		if (num == 3)
		{
printf("F(n):\n");
            for (int i = 1; i <= 10; i++) {
                printf("%6i|%2i\n", F(i), i);
            }
            printf("G(n):\n");
            for (int i = 1; i <= 10; i++) {
                printf("%6i|%2i\n", G(i), i);
            }
		}
		if (num > 3 || num < 1) cout << "Вы выбрали не существующую задачу. Повторите выбор." << endl;
		cout << endl << "Введите номер задания(1, 2 или 3) или 0 для завершения работы: " << endl;
		cin >> num; cout << endl;
		system("cls");
	}
	return 0;
}

int umnoj2(int* a, int n)
{
	int sum = 1;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0) {
			sum = sum * a[i];
		}
	return sum;
};

int powB(int x, int n)
{
	if (n == 0) return 1;
	if (n == 1) return x;
	if (n % 2 == 0) return powB(x * x, n / 2);
	return x * powB(x, n - 1);
}

int F(int i)
{
	if (i == 1) return -2;
	return F(i - 1) + G(i - 1);
}

int G(int i)
{
	if (i == 1) return 2;
	return F(i - 1) * G(i - 1);
}