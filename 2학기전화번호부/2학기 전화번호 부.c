#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern void Input();
extern void Output();
extern void Search();
extern void Remove();

/*
1)�����Ҵ� ũ�� �Է¹����� ������ �ƴ� ������ �ԷµǸ� �ٽ� �Է¹ް��ϱ�
2)�۾��� �ϴ� ���� 0��ư�� ������ �߰��� �ϴ� �۾��� ������ ó�� ȭ������ ���ư���
*/
typedef struct   //��ȭ��ȣ �� �̸�,��ȭ��ȣ ����Ʈ
{   char Name[20];         //�ִ� ���� �� 20�ڸ�
    char PhoneNumber[15]; //��ȭ��ȣ �Է� �� �ϴ� 15��
    int  length;//��ȭ��ȣ�� ����
}PhoneBook_Info;

PhoneBook_Info* PhoneBook_Address;
int main(void)
{   
    PhoneBook_Address=(PhoneBook_Info*)malloc(sizeof(PhoneBook_Info)); //���� �Ҵ�
    PhoneBook_Address->length=0;

    int* length;
    length = &PhoneBook_Address->length;
    
    //�޸� �Ҵ翡 �����ϸ� �������� ���ɴϴ�
    if (PhoneBook_Address == NULL)
    {   
        printf("malloc error �޸� �Ҵ翡 �����߽��ϴ�.");
    }
    
    int num = -1;

    while (num != 0) {
        printf("\n");
        printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
        printf("0.���� 1.�����߰� 2.������� 3.�������� 4.�����˻�\n");
        printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
        printf("���Ͻô� �۾��� �����Ͻʽÿ�:");
        scanf_s("%d", &num);
        switch (num) //�Լ� ����  0.���� 1.�Է� 2.��� 3.����
        {
        case 0:
            printf("����Ǿ����ϴ�");
            break;
        case 1: Input();//�Է� ���� �Լ� ����
            break;
        case 2: Output();//��� ���� �Լ� ����
            break;
        case 3: Remove();//���� ���� �Լ� ����
            break;
        case 4: Search(); //�˻�
            break;
        default:
            printf("�߸��� �Է��Դϴ� �ٽ� �������ֽʽÿ�");
            break;
        }//switch �� ����
    }//while�� ����    
}//main �Լ� ����