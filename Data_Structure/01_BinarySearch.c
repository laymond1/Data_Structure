//
//  BinarySearch.c
//  Data_Structure
//
//  Created by 임원선 on 2019. 1. 9..
//  Copyright © 2019년 임원선. All rights reserved.
//

#include <stdio.h>

int BSearch(int ar[], int len, int target){
    
    int first = 0;
    int last = len-1;
    int mid;
    
    while(first <= last) {
        
        mid = (first + last) / 2;
        
        if(target == ar[mid]) {
            return mid;
        }
        else {
            if(target < ar[mid])
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    return -1; // 찾지 못했을 때 반환되는 값 -1
}

int main(void) {
    
    int arr[] = {1,3,5,7,9};
    int idx;
    
    idx = BSearch(arr, sizeof(arr)/sizeof(int), 7);
    if(idx == -1)
        printf("탐색 실패 \n");
    else
        printf("타겟 저장 인덱스: %d \n", idx);
    
    idx = BSearch(arr, sizeof(arr)/sizeof(int), 4);
    if(idx == -1)
        printf("탐색 실패 \n");
    else
        printf("타겟 저장 인덱스:%d \n", idx);
    
    return 0;
}
