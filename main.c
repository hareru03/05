#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("정수 하나를 입력하시오 :");
	scanf("%d",&a);
	
	if(a==0)
		printf("절대값은 0입니다");
	else if(a>0)
		printf("절대값은 %d 입니다",a);
	else
		printf("절대값은 %d 입니다",-a);
	

	return 0;
}


