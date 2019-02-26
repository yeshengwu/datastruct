//
//  main.cpp
//  strucdata
//
//  Created by 123 on 14-6-8.
//  Copyright (c) 2014年 123. All rights reserved.
//

#include <iostream>

#define add(a,b) a+b

//3_10.cpp hanoi

void move(char getone,char putone)
{
    std::cout<<getone << "-->"<<putone<<std::endl;
}

void hanoi(int n,char one,char two,char three)
{
//    void move(char getone,char putone);
    if (n==1) {
        move(one,three);
    }
    else{
        hanoi(n-1,one,three,two);
        move(one, three);
        hanoi(n-1, two, one, three);
    }

}

void foo(int n);
void Swap(int &a,int &b);
/*
int main(int argc, const char * argv[])
{

    // insert code here...
    printf("test\n");
    printf("%d\n",5*add(3,4));
//    foo(5);
//    printf("%d\n",));
    
//    void hanoi(int n,char one,char two,char three);
    
//    int m;
//    std::cout<<"Enter the numbers of diskes:";
//    std::cin>>m;
//    std::cout<<"the steps to moving "<<m<<" diskes:"<<std::endl;
//    hanoi(m, 'A', 'B', 'C');
    
    int x(5),y(10);
    std::cout << "x="<<x<<"    y="<<y<<std::endl;
    Swap(x,y);
    std::cout << "x="<<x<<"    y="<<y<<std::endl;
    
    int pos=3700;
    int delay=1000-(pos%1000);
    std::cout << "delay="<<delay<<"    pos%1000="<<pos%1000<<std::endl;
    
    
    return 0;
}
*/


void Swap(int &a,int &b)
{
    int t;
   
    t=a;
    a=b;
    b=t;
}

