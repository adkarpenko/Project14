#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task1()
{
	setlocale(LC_ALL, "");
	int h, m, s;
	start:
    printf("Введите количество минут:");
	scanf_s("%d", &m);

	printf("Введите количество часы:");
	scanf_s("%d", &h);
	if (h > 24)
	{
		printf("Ошибка!Вы превысили диапазон!\n");
		goto start;
	}
	if (m > 60)
	{
		printf("Ошибка!Вы превысили диапазон!\n");
		goto start;
	}
	s = h * m * 60;

	printf("Итого секунд: %d\n", s);

}
void task2()
{
	int m, d;
	printf("Введите месяц:");
	scanf_s("%d", &m);
	d = m * 30;
	printf("Всего дней: %d\n", d);
}
void task3()
{
	int m1, m0, N;
	printf("Число N:");
	scanf_s("%d",&N);
	m1 = N / 10;
	m0 = N % 10;
	printf("Первое число: %d\n", m1);
	printf("Второе число: %d\n", m0);
}
void task4()
{
	int m1, m2, m3;
	printf("Первое число:");
	scanf_s("%d", &m1);
	printf("Второе число:");
	scanf_s("%d", &m2);
	printf("Третье число:");
	scanf_s("%d", &m3);
	if (m1<m2 && m1<m3)
	{
		printf("Наименьшее число: %d\n", m1);
	}
	else if(m2<m1 &&m2<m3)
	{
		printf("Наименьшее число: %d\n", m2);
	}
	if(m3<m1 && m3<m2)
	{
		printf("Наименьшее число: %d\n", m3);
	}
}

void task5()
{
	int m, n;
	printf("Число m:");
	scanf_s("%d", &m);
	printf("Число n:");
	scanf_s("%d", &n);
	if (n%m==0)
	{
		printf("Число n кратно m \n");
	}
	else
	{
		printf("Число n не кратно m\n");
	}
}


int main()
{
	setlocale(LC_ALL, "");
	int task;
	int flag;
start:
	printf("Введите номер задания: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();
	}
	break;
	case 2:
	{
		task2();
	}
	break;
	case 3 :
	{
		task3();
	}
	break;
	case 4 :
	{
		task4();
	}
	break;
	case 5:
	{
		task5();
	}
	break;
	default:
		break;
	}
	printf("Хотите продолжить 1/0? \n");
	scanf_s("%d", &flag);

	if (flag == 1)
		goto start;

	system("pause");

}