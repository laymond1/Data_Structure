//
//  DLinkedList.c
//  Data_Structure
//
//  Created by 임원선 on 2019. 1. 31..
//  Copyright © 2019년 임원선. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List * plist)
{
    plist->head = (Node *)malloc(sizeof(Node));
    plist->head->next = NULL;
    plist->comp = NULL;
    plist->numOfData = 0;
}

void FInsert(List * plist, LData data)
{
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    
    newNode->next = plist->head->next;
    plist->head->next = newNode;
    
    (plist->numOfData)++;
}

void SInsert(List * plist, LData data)
{
    Node * newNode = (Node*)malloc(sizeof(Node));
    Node * pred = plist->head;
    newNode->data = data;
    
    while(pred->next != NULL && plist->comp(data, pred->next->data) != 0)
    {
        pred = pred->next;
    }
    
    newNode->next = pred->next;
    pred->next = newNode;
    
    (plist->numOfData)++;
}

void LInsert(List * plist, LData data)
{
    if(plist->comp == NULL)     // 정렬기준이 마련되지 않았다면
        FInsert(plist, data);   // 머리에 노드를 추가
    else                        // 정렬기준이 마련되었다면
        SInsert(plist, data);   // 정렬기준에 근거하여 노드를 추가
}


int LFirst(List * plist, LData * pdata)
{
    if(plist->head->next == NULL)
        return FALSE;
    
    plist->before = plist->head;
    plist->cur = plist->head->next;
    
    *pdata = plist->cur->data;
    return TRUE;
}

int LNext(List * plist, LData * pdata)
{
    if(plist->cur->next == NULL)
        return FALSE;
    
    plist->before = plist->cur;
//    plist->before = plist->before->next;
    plist->cur = plist->cur->next;
    
    *pdata = plist->cur->data;
    return TRUE;
}

LData LRemove(List * plist)
{
    Node * rpos = plist->cur;
    LData rdata = rpos->data;
    
    plist->before->next = plist->cur->next;
    plist->cur = plist->before;
    
    free(rpos);
    (plist->numOfData)--;
    return rdata;
}

int LCount(List * plist)
{
    return plist->numOfData;
}

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2))
{
    plist->comp = comp;
}
