#include<stdio.h>
#include "2�б� ��ȭ��ȣ ��.c"
extern int* length;

void Input()//�Է¿� ���� �Լ�
{
        int* length;
        printf("\n�̸��� �Է��Ͻʽÿ�: ");
        scanf_s("%s", PhoneBook_Address[*length].Name);
        printf("��ȭ��ȣ�� �Է��Ͻʽÿ�"); //(10~14�ڸ��� ���ڸ��� �ٿ��� �Է����ֽʽÿ�)�� �� ����ó�� 
        scanf_s("%s", PhoneBook_Address[*length].PhoneNumber);


        //10~14�ڸ� ���� 
        /*
        for (int j = 0; j < (int)strlen(PhoneBook_Address[i].PhoneNumber); j++)
        {
    
            while (strlen(PhoneBook_Address[i].PhoneNumber) < 10 || strlen(PhoneBook_Address[i].PhoneNumber) > 14 || !isdigit(PhoneBook_Address[i].PhoneNumber[j]))
            {
                printf("�߸��� �Է��Դϴ�. ���Ŀ� �°� �ٽ� �Է����ֽʽÿ�>> ");
                scanf("%s", PhoneBook_Address[i].PhoneNumber);

            }
        }//for�� ��
        */
}
  //  save_to_txt();

/*
void save_to_txt() {
    FILE* file = fopen("c��� ��ȭ��ȣ��.txt", "w");

    if (file == NULL) {
        printf("������ �� �� �����ϴ�.");
        return;
    }

    //for�� �ٽ� �����
    for (int i = 0; i < Size_Of_PhoneBook; i++)
    {
        //   fprintf(file, "�̸�: %s, ��ȭ��ȣ: %s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
    }

    fclose(file);
    printf("��ȭ��ȣ�ΰ� ���������� ����Ǿ����ϴ�.\n");
}*/