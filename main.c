#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int trial=0;
	int a;
	
	do
	{
		printf("guess a number :");
		scanf("%d",&a);

		if(a>answer)
			{
				printf("high!\n");
				trial=trial+1;
			}
		else if(a<answer)
			{
				printf("low!\n");
				trial=trial+1;
			}
		else
			{
				printf("Congratulation!\n");
				trial=trial+1;
			}
 
	}
	
	while(a!=answer);

	printf("Number of trial=%i\n",trial);

	return 0;
}


