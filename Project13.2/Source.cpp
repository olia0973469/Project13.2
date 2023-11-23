/*
 lab_13_2.
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <iostream>
#define SQR(x) (x)*(x) 
#define CUBE(x) (x)*(x)*(x)
#define MOD(x) ((x)>=0)?(x):(-x)
#define MAX(y,z) ((y)>(z))?(y):(z) 
#define MIN(y,z) ((y)<(z))?(y):(z)
// виведення повідомлення та значення цілого числа
#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)
 // використовується символ продовження макроса '\'
// символ '#' використовується для об’єднання рядків
 // виведення повідомлення та значення дійсного числа
#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)


void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int a, b, c, 
		a_cube, 
		a_module1,
		a_module2,
		a_kvadr, 
		maxim, 
		minim;
	char ch; 
	float rad, s; 
	do
	{
		puts("define maximum of two numbers");
		puts("Input 3 integer numbers");
		scanf_s("%d", &a);
		PRINTI(a);
		scanf_s("%d", &b);
		PRINTI(b);
		scanf_s("%d", &c);
		PRINTI(c);

#if (c > 10) 
		{
			a_kvadr = SQR(a+b);
			PRINTI(a_kvadr);
			a_cube = CUBE(a);
			PRINTI(a_cube);
			maxim = MAX(a_kvadr, a_cube);
			PRINTR(maxim);
		}
#else
		{
			a_module1 = MOD(a - c);
			PRINTI(a_module1);
			a_module2 = MOD(a + c);
			PRINTI(a_module2);
			minim = MIN(a_module1, a_module2);
			PRINTR(minim);
		}
#endif
		printf("Repeat? y /n ");
		scanf("%c", &ch);
	} while (ch == 'y' || ch == 'Y');
}