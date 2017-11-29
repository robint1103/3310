#include <stdio.h>
#include <stdlib.h>

int main(void){
	//第零題
	int s1;
	//第一題
	int i1;
	int i2;
	//第二題
	int i3;
	int i4;
	//第三題
	int i5;
	//第四題
	int i6;
	int i7;
	int i8;
	int i9;
	int i10;
	//第五題
	int i11;
	int i12;
	int i13;
	int i14;
	int i15;
	//第六題
	int i16;
	int i17;
	int i18;
	int i19;


	printf("第二次作業，請輸入作業題號\n");
	scanf("%d", &s1);//輸入題號選擇
	if (s1 > 7)//輸入沒有的題數
		s1 = 7;
	while (true)//重複
	{
		switch (s1)
		{
		
		case 1://第一題
			printf("第一題\n");
			printf("奇數偶數判斷器\n");
			printf("請輸入數字\n");
			scanf("%d", &i1);
			i2 = i1 % 2;
			if (i2 == 1) {
				printf("判斷為奇數\n");
			}
			if (i2 == 0) {
				printf("判斷為偶數\n");
			}
			system("pause");//判斷完成
			printf("此題結束\n");
			printf("請輸入題號\n");
			scanf("%d", &s1);//輸入題號選擇
			break;
		case 2://第二題
			printf("第二題\n");
			printf("攝氏溫度轉換器\n");
			printf("請輸入數字\n");
			scanf("%d", &i3);//把鍵盤輸入到i3
			i4 = (i3*1.8) + 32;//轉換公式
			printf("華氏溫度為%d\n",i4);//顯示
			system("pause");//完成
			printf("此題結束\n");
			printf("請輸入題號\n");
			scanf("%d", &s1);//輸入題號選擇
			break;
		case 3://第三題
			printf("第三題\n");
			printf("天氣判斷器\n");
			printf("請輸入數字\n");
			scanf("%d", &i5);//輸入天氣溫度
			if (i5 == 20 || i5 == 21 || i5==22)
				printf("請加一件薄外套!\n");
			if (i5 == 14 || i5 == 15 || i5 == 16 || i5 == 17 || i5 == 18 || i5 == 19)
				printf("天氣冷, 請穿上外套!\n");
			if (i5 <14)
				printf("出門活動注意是身保暖\n");
			if (i5 >22)
				printf("出門活動注意中暑\n");
			if (i5 ==87)
				printf("出去會死人阿\n");
			system("pause");//完成
			printf("此題結束\n");
			printf("請輸入題號\n");
			scanf("%d", &s1);//輸入題號選擇

			break;
		case 4://第四題
			printf("第四題\n");
			printf("自動購買機\n");
			printf("珍珠奶茶為45元\n"); //當珍珠奶茶與烏龍拿鐵購買總數超過15瓶, 並且總額達(含) 800元, 售價享有9折優惠
			printf("烏龍拿鐵為55元\n");
			printf("當珍珠奶茶與烏龍拿鐵購買總數超過15瓶, 並且總額達(含) 800元, 售價享有9折優惠\n");
			printf("請輸入珍珠奶茶購買數量\n");
			scanf("%d", &i6);
			printf("請輸入烏龍拿鐵購買數量\n");
			scanf("%d", &i7);
			i10 = 0;//復歸
			i8 = i6 + i7;//總數計算
			i9 = (i6 * 45) + (i7 * 55);//價格計算
			if (i8 > 15 || i9 > 800)//有打折時
				i10 = (i9*0.9);
			else if (i8 < 15 || i9 < 800)//沒打折時
			i10 = i9;
			printf("總共%d元\n",i10);
			system("pause");//完成
			printf("此題結束\n");
			printf("請輸入題號\n");
			scanf("%d", &s1);//輸入題號選擇
			break;
		case 5://第五題
			printf("第五題\n");
			printf("自動購買機\n");
			printf("珍珠奶茶為45元\n"); //當珍珠奶茶與烏龍拿鐵購買總數超過12瓶, 或是總額達(含) 700元, 或是珍珠奶茶購買達(含)10瓶, 售價享有95折優惠
			printf("烏龍拿鐵為55元\n");
			printf("當珍珠奶茶與烏龍拿鐵購買總數超過12瓶, 或是總額達(含) 700元, 或是珍珠奶茶購買達(含)10瓶, 售價享有95折優惠\n");
			printf("請輸入珍珠奶茶購買數量\n");
			scanf("%d", &i11);
			printf("請輸入烏龍拿鐵購買數量\n");
			scanf("%d", &i12);
			i15 = 0;//復歸
			i13 = i11 + i12;//總數計算
			i14 = (i11 * 45) + (i12 * 55);//價格計算
			if (i13 > 15 || i14 > 800)//有打折時
				i15 = i14*0.95;
			else if (i13 < 15 || i14 < 800)//沒打折時
				i15 = i14;
			printf("總共%d元\n", i15);
			system("pause");//完成
			printf("此題結束\n");
			printf("請輸入題號\n");
			scanf("%d", &s1);//輸入題號選擇
			break;	
		case 6://第六題
			printf("第六題\n");
			printf("出印出下列星號\n");
			printf("請輸入星星行數?\n");
			scanf("%d", &i16);
			for (i18 = 1; i18 <= i16; i18++){
				for (i19 = i16; i19>i18; i19 = i19 - 1)
				{
					printf(" ");
				}
				for (i17 = 1; i17 <= (i18 * 2 - 1); i17 = i17 + 1)
				{
					printf("*");
				}
				printf("\n");
			}
	   



			system("pause");//完成
			printf("此題結束\n");
			printf("請輸入題號\n");
			scanf("%d", &s1);//輸入題號選擇
			break;
		case 7://錯誤(其他題數)
			printf("輸入題號可能有誤\n");
			printf("請重新輸入題號(1-6)\n");
			scanf("%d", &s1);//輸入題號選擇
			break;
		case 0://錯誤(其他題數)
			i16 = 500;
			for (i18 = 1; i18 <= i16; i18++){
				for (i19 = i16; i19>i18; i19 = i19 - 1)
				{
					printf(" ");
				}
				for (i17 = 1; i17 <= (i18 * 2 - 1); i17 = i17 + 1)
				{
					printf("*");
				}
				printf("\n");
			}

			printf("請重新輸入題號(1-6)\n");
			scanf("%d", &s1);//輸入題號選擇
			break;
		}
	}
}