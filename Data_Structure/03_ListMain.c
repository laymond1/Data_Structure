//
//  ListMain.c
//  Data_Structure
//
//  Created by 임원선 on 2019. 1. 25..
//  Copyright © 2019년 임원선. All rights reserved.
//

#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    ///*
    // List 생성 및 초기화
    List list;
    int data;
    int sum = 0;
    ListInit(&list);

    for (int i=1; i<10; i++) {
        LInsert(&list, i);
    }
    
    // 저장된 데이터의 전체 출력
    printf("현재 데이터의 수: %d \n", LCount(&list));
    
    if(LFirst(&list, &data))
    {
        sum  = data;
        while(LNext(&list, &data))
        {
            sum += data;
        }
    } printf("%d\n\n" , sum);
    
    if(LFirst(&list, &data))
    {
        if(data % 2 == 0 || data % 3 == 0)
            LRemove(&list);
        
        while(LNext(&list, &data))
        {
            if(data % 2 == 0 || data % 3 == 0)
                LRemove(&list);
        }
    }
    
    // 삭제 후 남은 데이터 전체 출력
    printf("현재 데이터의 수: %d \n", LCount(&list));
    
    if(LFirst(&list, &data))
    {
        printf("%d ", data);
        
        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    return 0;

     //*/
    
    /*
    // ArrayList의 생성 및 초기화
    List list;
    int data;
    ListInit(&list);
    
    // 5개의 데이터 저장
    LInsert(&list, 11); LInsert(&list, 11);
    LInsert(&list, 22); LInsert(&list, 22);
    LInsert(&list, 33);
    
    // 저장된 데이터의 전체 출력
    printf("현재 데이터의 수: %d \n", LCount(&list));
    
    if(LFirst(&list, &data))
    {
        printf("%d ", data);
        
        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    
    // 22를 탐색하여 모두 삭제
    if(LFirst(&list, &data))
    {
        if(data == 22)
            LRemove(&list);
        
        while(LNext(&list, &data))
        {
            if(data == 22)
                LRemove(&list);
        }
    }
    
    // 삭제 후 남은 데이터 전체 출력
    printf("현재 데이터의 수 : %d \n", LCount(&list));
    
    if(LFirst(&list, &data))
    {
        printf("%d ", data);
        
        while(LNext(&list, &data))
            printf("%d ",  data);
    }
    printf("\n\n");
    return 0;
     */
}
