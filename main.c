#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ans=50;
	int input ;
	int cnt=0 ;
	
	do
	{
	
		printf("input a number : ");
		scanf("%i", &input);
	
	
		if (input > ans)
			printf("too high\n");
		
		else if (input < ans)
			printf("too low\n");
		
		cnt++;
	}
	while(input != ans);
	
	printf("congratulation! trials : %i ", cnt);
	return 0;
}
