//
//  RecursiveFactorial.c
//  Data_Structure
//
//  Created by 임원선 on 2019. 1. 21..
//  Copyright © 2019년 임원선. All rights reserved.
//

#include <stdio.h>

int Factorial(int n) {
    
    if(n == 0)
        return 1;
    else
        return n * Factorial(n-1);
}

int main(void) {
    
    printf("1! = %d \n", Factorial(1));
    printf("2! = %d \n", Factorial(2));
    printf("3! = %d \n", Factorial(3));
    printf("4! = %d \n", Factorial(4));
    printf("9! = %d \n", Factorial(9));
    return 0;
}
