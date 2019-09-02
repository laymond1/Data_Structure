//
//  HanoiTower.c
//  Data_Structure
//
//  Created by 임원선 on 2019. 1. 22..
//  Copyright © 2019년 임원선. All rights reserved.
//

#include <stdio.h>

int count = 1;

void HanoiTower(int num, char from, char by, char to) {
    
   
    if(num == 1) {
        printf("원반 1을 %c에서 %c로 이동 %d \n", from, to, count);
        count++;
    }
    else {
        HanoiTower(num-1, from, to, by);
        printf("원반 %d을 %c에서 %c로 이동 %d \n", num, from, to, count);
        count++;
        HanoiTower(num-1, by, from, to);
    }
}


int main(void) {
    
    HanoiTower(5, 'A', 'B', 'C');
    return 0;
}
