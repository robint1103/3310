#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex3_1();
void ex3_2();
void ex3_3();
void ex3_4();
void ex3_5();
void ex3_6();



void main(){

	int input;
	_Bool flag =1;

	while (flag){
		printf("1. ���W�P����B��l\n");
		printf("2. ����B��l���d��\n");
		printf("3. �_�� if �ԭz���m��\n");
		printf("4. switch �ԭz���d��\n");
		printf("5. while�j�骺�d��\n");
		printf("6. �H�_��while�j���g�E�E���k��\n");
		printf("7. �H�_���j��L�X�X��ϧ�\n");
		printf("8. �H�_���j��ϦL�Ʀr\n");
		printf("----------------------------------------------------\n");
		printf("�п�J�n���檺�d��?  1 ~10, ��'0' �h��������!   ?    ");
		scanf("%d", &input);

		//ex3_1();
		switch (input)
		{
		case 1:
			ex3_1();
			break;
		case 2:
			ex3_2();
			break;
		case 3:
			ex3_3();
			break;
		
		case 4:
			ex3_4();
			break;
		
		case 5:
			ex3_5();
			break;

		case 6:
			ex3_6();
			break;

		case 7:
			ex3_7();
			break;

		case 8:
			ex3_8();
			break;

		case 0:
			flag = 0;
			break;
		default:
			break;
		}

		system("pause");
		system("cls");
	}




}