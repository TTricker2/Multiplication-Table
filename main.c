/* 
C ���丵 - �����ܰ���  ����
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <Windows.h> 
#include<conio.h>

void Start() // ���� �����Լ� 
{
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 13); 
	printf("������ ������ �����մϴ�~! \n\n\n");
	Sleep(1000); //�ð� ���� 
	
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 10); 
	printf("3 \n\n");
	Sleep(1000);
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14); 
	printf("2 \n\n"); 
	Sleep(1000);
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 11); 
	printf("1 \n\n");
	Sleep(1000);
}

void MultiplicationProblem()
{
	int i=0;
	srand(time(NULL)); 
	for(i=0; i<10; i++)
	{
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), (rand() % 15)+1 ); 
		printf("%d * %d = \n\n\n", (rand() % 8)+2,(rand() % 9)+1);
		Sleep(3000);
	}
} 

int main(void)
{
	Start();
	MultiplicationProblem();
	
	
} 
