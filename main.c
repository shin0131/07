#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sub(void);

int main(void)
{
	int i;
	for(i=0; i<3; i++)
		sub();
	return 0;
}

void sub(void)
{
	int auto_count = 0;   // 자동 할당 
	static int static_count = 0;   // 정적 할당 
	
	// 변수 1 증가 
	auto_count++;
	static_count++; 
	
	// 변수 내용 확인 
	printf("auto_count = %d\n", auto_count);
	printf("static_count = %d\n", static_count);
}
