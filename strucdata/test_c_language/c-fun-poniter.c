//
//  c-fun-poniter.c
//  strucdata
//
//  Created by 某某 陈 on 17/4/2.
//  Copyright © 2017年 123. All rights reserved.
//

#include "c-fun-poniter.h"

#include <stdio.h>

/**
 p370 函数指针求定积分
 */


float Fun1(float x){
    return 1.0+x*x;
}

float Fun2(float x){
    return x/(1+x*x);
}


float Intergral(float (*f)(float), float a,float b){
    
    float s,h,y;
    int n,i;
    
    s = ((*f)(a)+(*f)(b))/2.0;
    n = 100;
    h = (b-a)/n;
    
    for (i = 0; i<n; i++) {
        y = a+i*h;
        s += (*f)(y);
    }
    
    return s*h;
}


/**
 p370 函数指针求定积分
 */
int main(int argc, const char * argv[]){
    
    float y1,y2;
    
    y1 = Intergral(Fun1,0.0,1.0);
    
    
    y2 = Intergral(Fun2,0.0,3.0);
    
    printf("y1=%6.3f\n y2=%6.2f\n",y1,y2);
    
    
    return 0;
}



