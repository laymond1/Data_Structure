//
//  main.c
//  Data_Structure
//
//  Created by 임원선 on 2018. 12. 28..
//  Copyright © 2018년 임원선. All rights reserved.
//

#include <stdio.h>

int calculate_sum(int array[]);

int main() {
    
    int sum, i, average;
    int num[10];
    for (i=0; i<10; i++)
        scanf("%d", &num[i]);
    sum = calculate_sum(num);
    average = sum/10;
    printf("%d\n", average);
    return 0;
    
}

int calculate_sum(int *array) { // int array[]로 매개변수를 받을 수 있음.
    int sum, i;
    sum = 0;
    for (i=0; i<10; i++)
        sum = sum + array[i]; // *(array+i)
    return sum;
}
