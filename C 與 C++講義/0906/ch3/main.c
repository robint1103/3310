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
		printf("1. 遞增與遞減運算子\n");
		printf("2. 條件運算子的範例\n");
		printf("3. 巢狀 if 敘述的練習\n");
		printf("4. switch 敘述的範例\n");
		printf("5. while迴圈的範例\n");
		printf("6. 以巢狀while迴圈改寫九九乘法表\n");
		printf("7. 以巢狀迴圈印出幾何圖形\n");
		printf("8. 以巢狀迴圈反印數字\n");
		printf("----------------------------------------------------\n");
		printf("請輸入要執行的範例?  1 ~10, 按'0' 則結束執行!   ?    ");
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