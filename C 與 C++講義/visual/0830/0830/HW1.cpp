#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i1=0;
	int i2;
	int i3;
	scanf("%d" ,&i1);//��J 
	i2 = i1 % 2;//�B�� 
	
	i3 = i1 \ 2;	
	printf("i2=%d\n",i2);
	if (i2=1)
	{
		//printf("���\n");	
	}
	if (i2=2)
		printf("����\n");
	system("pause");
}
