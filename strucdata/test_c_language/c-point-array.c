//
//  c-point-array.c
//  strucdata
//
//  Created by 十度 on 17/3/29.
//  Copyright © 2017年 123. All rights reserved.
//

#include "c-point-array.h"

#include <stdio.h>
#include <string.h>

#define MAX_LEN 9
#define N       5

int main(int argc, const char * argv[]){
    printf("c-learn main() p278 \n");
    
    int i,j;
    char *temp = NULL;
    char *ptr[N] = {"Pascal","Basci","Fortran","Java","Visual C"};
    
    printf("Before sorted:\n");
    for (i=0; i<N; i++) {
        puts(ptr[i]);
    }
    
    for (i=0; i<N-1; i++) {
        for (j=i+1; j<N; j++) {
            if (strcmp(ptr[j], ptr[i])<0) {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    
    printf("After sorted:\n");
    for (i=0; i<N; i++) {
        puts(ptr[i]);
    }

    return 0;
}
