//
//  ex5_.c
//  Data_Structure
//
//  Created by 임원선 on 2018. 12. 29..
//  Copyright © 2018년 임원선. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 100

int main() {
    
    char *words[100]; // 입력되는 단어의 최대의 개수는 100개
    int n = 0; // numbers of strings
    char buffer[BUFFER_SIZE];
    
    // int일때, scanf("%d", &a)인데 문자열에서 buffer는 배열의 포인터주소이므로 그냥 사용함.
    while (n < 4 && scanf("%s", buffer) != EOF){
        
        words[n] = strdup(buffer); // strdup( ) : 매개변수를 복제해서 주소를 반환. 즉, buffer와 별개의 문자열을 복제하여 만들어줌.
        n++;
    }
    
    for (int i=0; i<4;i++)
        printf( "%s\n", words[i]);
}
/* strdup함수의 구조
char *strdup(char * s) {
    
    char *p;
    p = (char *)malloc(strlen(s)+1);
    if(p != NULL)
        strcpy(p, s);
    return p;
}
*/
