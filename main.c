#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int L1,L2,L3;
	
	printf("�п�J�T���:\n");
	scanf("%d %d %d",&L1,&L2,&L3);
	
	if((L1>L2)&&(L1>L3)&&(L2+L3>L1))
		printf("�i�H�����@�ӤT����\n");
	else if((L2>L1)&&(L2>L3)&&(L1+L3>L2))
		printf("�i�H�����@�ӤT����\n");
	else if((L3>L1)&&(L3>L2)&&(L1+L2>L3))
		printf("�i�H�����@�ӤT����\n");
	else
		printf("�L�k�����@�ӤT����\n");
	system("pause");
	return 0;
}

