#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task1()
{
	setlocale(LC_ALL, "");
	int h, m, s;
	start:
    printf("������� ���������� �����:");
	scanf_s("%d", &m);

	printf("������� ���������� ����:");
	scanf_s("%d", &h);
	if (h > 24)
	{
		printf("������!�� ��������� ��������!\n");
		goto start;
	}
	if (m > 60)
	{
		printf("������!�� ��������� ��������!\n");
		goto start;
	}
	s = h * m * 60;

	printf("����� ������: %d\n", s);

}
void task2()
{
	int m, d;
	printf("������� �����:");
	scanf_s("%d", &m);
	d = m * 30;
	printf("����� ����: %d\n", d);
}
void task3()
{
	int m1, m0, N;
	printf("����� N:");
	scanf_s("%d",&N);
	m1 = N / 10;
	m0 = N % 10;
	printf("������ �����: %d\n", m1);
	printf("������ �����: %d\n", m0);
}
void task4()
{
	int m1, m2, m3;
	printf("������ �����:");
	scanf_s("%d", &m1);
	printf("������ �����:");
	scanf_s("%d", &m2);
	printf("������ �����:");
	scanf_s("%d", &m3);
	if (m1<m2 && m1<m3)
	{
		printf("���������� �����: %d\n", m1);
	}
	else if(m2<m1 &&m2<m3)
	{
		printf("���������� �����: %d\n", m2);
	}
	if(m3<m1 && m3<m2)
	{
		printf("���������� �����: %d\n", m3);
	}
}

void task5()
{
	int m, n;
	printf("����� m:");
	scanf_s("%d", &m);
	printf("����� n:");
	scanf_s("%d", &n);
	if (n%m==0)
	{
		printf("����� n ������ m \n");
	}
	else
	{
		printf("����� n �� ������ m\n");
	}
}


int main()
{
	setlocale(LC_ALL, "");
	int task;
	int flag;
start:
	printf("������� ����� �������: ");
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
	printf("������ ���������� 1/0? \n");
	scanf_s("%d", &flag);

	if (flag == 1)
		goto start;

	system("pause");

}