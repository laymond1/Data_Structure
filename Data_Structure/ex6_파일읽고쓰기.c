//
//  ex6_파일읽고쓰기.c
//  Data_Structure
//
//  Created by 임원선 on 2018. 12. 29..
//  Copyright © 2018년 임원선. All rights reserved.
//

#include <stdio.h>

void main() {
    FILE * in_fp = fopen("input.txt", "r");
    FILE * out_fp = fopen("output.txt", "w");
    char buffer[100];
    while(fscanf(in_fp, "%s", buffer) != EOF)
        fprintf(out_fp, "%s", buffer);
    fclose(in_fp);
    fclose(out_fp);
}
