//
//  Clock.cpp
//  strucdata
//
//  Created by 某某 陈 on 18/7/24.
//  Copyright © 2018年 123. All rights reserved.
//

// c++ 那本烂教材 p97
// 加上后期扩展加构造函数等新修改。

#include "Clock.hpp"

#include <iostream>

#include <iomanip>

using namespace std;

class Clock
{
    public:
//        Clock();  // Constructor.
        Clock(int NewH,int NewM,int NewS);
    
        void SetTime(int NewH = 0,int NewM = 0,int newS = 0);
        void ShowTime();
    
        ~Clock(){
            cout<<"deconstructor"<<endl;
        };
   
    private:
        int Hour,Minute,Second;

};

// Constructor.
Clock::Clock(int NewH,int NewM,int NewS)
{
    Hour = NewH;
    Minute = NewM;
    Second = NewS;
}

void Clock::SetTime(int NewH,int NewM,int newS)
{
    Hour = NewH;
    Minute = NewM;
    Second = newS;
}

inline void Clock::ShowTime()
{
    cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
}

int main(int argc, const char * argv[]){
{
   Clock myClock(1,2,3);
   cout<<"First time set and output:"<<endl;
   myClock.SetTime();
   myClock.ShowTime();
   
   cout<<"Second time set and output:"<<endl;
   myClock.SetTime(8,30,30);
   myClock.ShowTime();
}


