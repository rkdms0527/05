#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int c ;
	int cnt=0 ;
	
	printf("input a string : ");
	
	while ( (c = getchar() ) != '\n' )
	{
		if (c >= '0' && c<= '9')
		{
			cnt++;
		}
	}

	printf("number of digits is %d", cnt);
		
 
	return 0;
}
