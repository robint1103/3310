#include <stdio.h>
#include <stdlib.h>

int main(void){
	//�Ĺs�D
	int s1;
	//�Ĥ@�D
	int i1;
	int i2;
	//�ĤG�D
	int i3;
	int i4;
	//�ĤT�D
	int i5;
	//�ĥ|�D
	int i6;
	int i7;
	int i8;
	int i9;
	int i10;
	//�Ĥ��D
	int i11;
	int i12;
	int i13;
	int i14;
	int i15;
	//�Ĥ��D
	int i16;
	int i17;
	int i18;
	int i19;


	printf("�ĤG���@�~�A�п�J�@�~�D��\n");
	scanf("%d", &s1);//��J�D�����
	if (s1 > 7)//��J�S�����D��
		s1 = 7;
	while (true)//����
	{
		switch (s1)
		{
		
		case 1://�Ĥ@�D
			printf("�Ĥ@�D\n");
			printf("�_�ư��ƧP�_��\n");
			printf("�п�J�Ʀr\n");
			scanf("%d", &i1);
			i2 = i1 % 2;
			if (i2 == 1) {
				printf("�P�_���_��\n");
			}
			if (i2 == 0) {
				printf("�P�_������\n");
			}
			system("pause");//�P�_����
			printf("���D����\n");
			printf("�п�J�D��\n");
			scanf("%d", &s1);//��J�D�����
			break;
		case 2://�ĤG�D
			printf("�ĤG�D\n");
			printf("���ū��ഫ��\n");
			printf("�п�J�Ʀr\n");
			scanf("%d", &i3);//����L��J��i3
			i4 = (i3*1.8) + 32;//�ഫ����
			printf("�ؤ�ū׬�%d\n",i4);//���
			system("pause");//����
			printf("���D����\n");
			printf("�п�J�D��\n");
			scanf("%d", &s1);//��J�D�����
			break;
		case 3://�ĤT�D
			printf("�ĤT�D\n");
			printf("�Ѯ�P�_��\n");
			printf("�п�J�Ʀr\n");
			scanf("%d", &i5);//��J�Ѯ�ū�
			if (i5 == 20 || i5 == 21 || i5==22)
				printf("�Х[�@�����~�M!\n");
			if (i5 == 14 || i5 == 15 || i5 == 16 || i5 == 17 || i5 == 18 || i5 == 19)
				printf("�Ѯ�N, �Ь�W�~�M!\n");
			if (i5 <14)
				printf("�X�����ʪ`�N�O���O�x\n");
			if (i5 >22)
				printf("�X�����ʪ`�N����\n");
			if (i5 ==87)
				printf("�X�h�|���H��\n");
			system("pause");//����
			printf("���D����\n");
			printf("�п�J�D��\n");
			scanf("%d", &s1);//��J�D�����

			break;
		case 4://�ĥ|�D
			printf("�ĥ|�D\n");
			printf("�۰��ʶR��\n");
			printf("�ï]������45��\n"); //��ï]�����P�Q�s���K�ʶR�`�ƶW�L15�~, �åB�`�B�F(�t) 800��, ����ɦ�9���u�f
			printf("�Q�s���K��55��\n");
			printf("��ï]�����P�Q�s���K�ʶR�`�ƶW�L15�~, �åB�`�B�F(�t) 800��, ����ɦ�9���u�f\n");
			printf("�п�J�ï]�����ʶR�ƶq\n");
			scanf("%d", &i6);
			printf("�п�J�Q�s���K�ʶR�ƶq\n");
			scanf("%d", &i7);
			i10 = 0;//�_�k
			i8 = i6 + i7;//�`�ƭp��
			i9 = (i6 * 45) + (i7 * 55);//����p��
			if (i8 > 15 || i9 > 800)//�������
				i10 = (i9*0.9);
			else if (i8 < 15 || i9 < 800)//�S�����
			i10 = i9;
			printf("�`�@%d��\n",i10);
			system("pause");//����
			printf("���D����\n");
			printf("�п�J�D��\n");
			scanf("%d", &s1);//��J�D�����
			break;
		case 5://�Ĥ��D
			printf("�Ĥ��D\n");
			printf("�۰��ʶR��\n");
			printf("�ï]������45��\n"); //��ï]�����P�Q�s���K�ʶR�`�ƶW�L12�~, �άO�`�B�F(�t) 700��, �άO�ï]�����ʶR�F(�t)10�~, ����ɦ�95���u�f
			printf("�Q�s���K��55��\n");
			printf("��ï]�����P�Q�s���K�ʶR�`�ƶW�L12�~, �άO�`�B�F(�t) 700��, �άO�ï]�����ʶR�F(�t)10�~, ����ɦ�95���u�f\n");
			printf("�п�J�ï]�����ʶR�ƶq\n");
			scanf("%d", &i11);
			printf("�п�J�Q�s���K�ʶR�ƶq\n");
			scanf("%d", &i12);
			i15 = 0;//�_�k
			i13 = i11 + i12;//�`�ƭp��
			i14 = (i11 * 45) + (i12 * 55);//����p��
			if (i13 > 15 || i14 > 800)//�������
				i15 = i14*0.95;
			else if (i13 < 15 || i14 < 800)//�S�����
				i15 = i14;
			printf("�`�@%d��\n", i15);
			system("pause");//����
			printf("���D����\n");
			printf("�п�J�D��\n");
			scanf("%d", &s1);//��J�D�����
			break;	
		case 6://�Ĥ��D
			printf("�Ĥ��D\n");
			printf("�X�L�X�U�C�P��\n");
			printf("�п�J�P�P���?\n");
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
	   



			system("pause");//����
			printf("���D����\n");
			printf("�п�J�D��\n");
			scanf("%d", &s1);//��J�D�����
			break;
		case 7://���~(��L�D��)
			printf("��J�D���i�঳�~\n");
			printf("�Э��s��J�D��(1-6)\n");
			scanf("%d", &s1);//��J�D�����
			break;
		case 0://���~(��L�D��)
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

			printf("�Э��s��J�D��(1-6)\n");
			scanf("%d", &s1);//��J�D�����
			break;
		}
	}
}