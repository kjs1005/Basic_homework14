#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int L1,L2,L3;
	
	printf("請輸入三邊長:\n");
	scanf("%d %d %d",&L1,&L2,&L3);
	
	if((L1>L2)&&(L1>L3)&&(L2+L3>L1))
		printf("可以拼成一個三角形\n");
	else if((L2>L1)&&(L2>L3)&&(L1+L3>L2))
		printf("可以拼成一個三角形\n");
	else if((L3>L1)&&(L3>L2)&&(L1+L2>L3))
		printf("可以拼成一個三角形\n");
	else
		printf("無法拼成一個三角形\n");
	system("pause");
	return 0;
}

