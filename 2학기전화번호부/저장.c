#include<stdio.h>
#include "2학기 전화번호 부.c"
extern int* length;

void Input()//입력에 관한 함수
{
        int* length;
        printf("\n이름을 입력하십시오: ");
        scanf_s("%s", PhoneBook_Address[*length].Name);
        printf("전화번호를 입력하십시오"); //(10~14자리의 숫자만을 붙여서 입력해주십시오)추 후 예외처리 
        scanf_s("%s", PhoneBook_Address[*length].PhoneNumber);


        //10~14자리 숫자 
        /*
        for (int j = 0; j < (int)strlen(PhoneBook_Address[i].PhoneNumber); j++)
        {
    
            while (strlen(PhoneBook_Address[i].PhoneNumber) < 10 || strlen(PhoneBook_Address[i].PhoneNumber) > 14 || !isdigit(PhoneBook_Address[i].PhoneNumber[j]))
            {
                printf("잘못된 입력입니다. 형식에 맞게 다시 입력해주십시오>> ");
                scanf("%s", PhoneBook_Address[i].PhoneNumber);

            }
        }//for문 끝
        */
}
  //  save_to_txt();

/*
void save_to_txt() {
    FILE* file = fopen("c언어 전화번호부.txt", "w");

    if (file == NULL) {
        printf("파일을 열 수 없습니다.");
        return;
    }

    //for문 다시 만들기
    for (int i = 0; i < Size_Of_PhoneBook; i++)
    {
        //   fprintf(file, "이름: %s, 전화번호: %s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
    }

    fclose(file);
    printf("전화번호부가 성공적으로 저장되었습니다.\n");
}*/