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
1)동적할당 크기 입력받을때 정수가 아닌 형식이 입력되면 다시 입력받게하기
2)작업을 하던 도중 0버튼을 누르면 중간에 하던 작업을 끝내고 처음 화면으로 돌아가기
*/
typedef struct   //전화번호 부 이름,전화번호 리스트
{   char Name[20];         //최대 글자 수 20자를
    char PhoneNumber[15]; //전화번호 입력 수 일단 15개
    int  length;//전화번호의 길이
}PhoneBook_Info;

PhoneBook_Info* PhoneBook_Address;
int main(void)
{   
    PhoneBook_Address=(PhoneBook_Info*)malloc(sizeof(PhoneBook_Info)); //동적 할당
    PhoneBook_Address->length=0;

    int* length;
    length = &PhoneBook_Address->length;
    
    //메모리 할당에 실패하면 이쪽으로 들어옵니다
    if (PhoneBook_Address == NULL)
    {   
        printf("malloc error 메모리 할당에 실패했습니다.");
    }
    
    int num = -1;

    while (num != 0) {
        printf("\n");
        printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
        printf("0.종료 1.정보추가 2.정보출력 3.정보삭제 4.정보검색\n");
        printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
        printf("원하시는 작업을 선택하십시오:");
        scanf_s("%d", &num);
        switch (num) //함수 실행  0.종료 1.입력 2.출력 3.삭제
        {
        case 0:
            printf("종료되었습니다");
            break;
        case 1: Input();//입력 역할 함수 실행
            break;
        case 2: Output();//출력 역할 함수 실행
            break;
        case 3: Remove();//삭제 역할 함수 실행
            break;
        case 4: Search(); //검색
            break;
        default:
            printf("잘못된 입력입니다 다시 선택해주십시오");
            break;
        }//switch 문 종료
    }//while문 종료    
}//main 함수 종료