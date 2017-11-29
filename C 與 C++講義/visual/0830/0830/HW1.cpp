#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i1=0;
	int i2;
	int i3;
	scanf("%d" ,&i1);//輸入 
	i2 = i1 % 2;//運算 
	
	i3 = i1 \ 2;	
	printf("i2=%d\n",i2);
	if (i2=1)
	{
		//printf("基數\n");	
	}
	if (i2=2)
		printf("偶數\n");
	system("pause");
}
