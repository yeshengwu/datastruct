//
//  c-learn.c
//  strucdata
//
//  Created by 某某 陈 on 16/12/6.
//  Copyright © 2016年 123. All rights reserved.
//

#include "c-learn.h"

#include <stdio.h>
#include <string.h>

#define MAX_LEN 9
#define N 5
/*
int main(int argc, const char * argv[]){
 
    printf("c-learn main() p278 \n");
 
    int i,j;
    char temp[MAX_LEN];
    char str[N][MAX_LEN] = {"Pascal","Basic","Fortran","Java","Visual C"};
    
    printf("Before sorted:\n");
    for (i=0; i<N; i++) {
        puts(str[i]);
    }
    
    printf("二维数组首地址为：&a = %p\n\n",str);
    printf("str[0][0] = %c  \n",str[0][0]);
    printf("str[0] = %p  \n",str[0]);
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            //二维数组的元素的地址
            printf("&a[%d][%d] = %p  ",i,j,&str[i][j]);
        }
        printf("\n");
    }
    
    for (i=0; i<N-1; i++) {
        for (j = i+1; j<N; j++) {
            if (strcmp(str[j], str[i])<0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    
    printf("After sorted:\n");
    for (i=0; i<N; i++) {
        puts(str[i]);
    }
    
    
    
    return 0;
}*/


