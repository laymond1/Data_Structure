//
//  ex3.c
//  Data_Structure
//
//  Created by 임원선 on 2018. 12. 28..
//  Copyright © 2018년 임원선. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int * array = (int *)malloc(4*sizeof(int));
    array[0] = 1;
    array[1] = 2;
    array[3] = 3; // *(array + 2) = 3
    
    int * tmp = (int *)malloc(8*sizeof(int));
    int i;
    for (i=0; i<4; i++)
        tmp[i] = array[i];
    
    array = tmp;
    
    *(array+3) = 4;
    array[5] = 5;
    
    printf("%d", array[5]);
    
    
}
