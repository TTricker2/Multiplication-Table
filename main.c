/*
C ���丵 - �����ܰ���  ����
*/
#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <Windows.h> 
#include<conio.h>

void Start() // ���� �����Լ� 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf("������ ������ �����մϴ�~! �� ���� �� ���ѽð��� 3��! \n\n\n");
	Sleep(1000); //�ð� ���� 

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("3 \n\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	printf("2 \n\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("1 \n\n");
	Sleep(1000);
}

int CalculateScore(int num1, int num2) //���� ��� �Լ�
{

}

void MultiplicationProblem() // ������ �����ܹ���
{
	int i = 0;
	int sol;

	srand(time(NULL));
	for (i = 0; i<10; i++)
	{
		int a = (rand() % 8) + 2;
		int b = (rand() % 9) + 1;
		int solution = a*b;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (rand() % 8) + 7);
		printf("%d * %d = ", a, b);
		Sleep(3000);

		printf("\n\n\n");
	}
}


int main(void)
{
	Start();
	MultiplicationProblem();


}
