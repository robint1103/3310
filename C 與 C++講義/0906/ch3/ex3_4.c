#include <stdio.h>
#include <stdlib.h>

void ex3_4(void)
{
	int a, b;
	char oper;	
	//printf("Please input the expression:(ex:3+2): ");
	//scanf("%d %c &d", &a,&oper,&b);
	printf("Please ��J�[��: ");    scanf("%d",&a);
	printf("Please ��J�Q�[��: ");  scanf("%d",&b);
	printf("Please ��J�B��Ÿ� +,-,*,/: ");  scanf(" %c",&oper);

	switch (oper)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);    /* �L�Xa+b */
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b);    /* �L�Xa-b */
		break;
	case '*':
		printf("%d*%d=%d\n", a, b, a*b);      /* �L�Xa*b */
		break;
	case '/':
		printf("%d/%d=%d\n", a, b, a / b);  /* �L�Xa%b */
		break;
	default:
		printf("input error!!\n");            /* �L�X�r�� */
	}


	//system("pause");
	//return 0;
}