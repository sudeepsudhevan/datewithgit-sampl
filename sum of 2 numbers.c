/*
 ============================================================================
 Name        : sum.c
 Author      : Sudeep Sudhevan
 Version     :let change merge
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1,number2,sum;
	printf("Enter two numbers"); /* prints enter two numbers */
	fflush( stdout );/*for printf to execute before scanf  */
	scanf("%d%d",&number1,&number2);
	sum=number1+number2;
	printf("Result is : %d",sum);

	return EXIT_SUCCESS;
}
