#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a ;
	int sum=0 ;
	int i ;
	
	printf("input a number : ");
	scanf("%d", &a);
	
	for (i=1; i<=a; i++)
	{
		sum = sum + i;
	}
 	printf("sum is %d", sum);
	return 0;
}
