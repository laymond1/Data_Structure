//
//  RecursiveFunc.c
//  Data_Structure
//
//  Created by 임원선 on 2019. 1. 21..
//  Copyright © 2019년 임원선. All rights reserved.
//

#include <stdio.h>

void Recursive(int num) {
    
    if(num <= 0)
        return;
    printf("Recursive call! %d\n", num);
    Recursive(num- 1);
}

int main() {
    
    Recursive(3);
    return 0;
}
