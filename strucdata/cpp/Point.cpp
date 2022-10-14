//
//  cppevan.cpp
//  strucdata
//
//  Created by 某某 陈 on 18/7/22.
//  Copyright © 2018年 123. All rights reserved.
//

#include "Point.hpp"
#include <iostream>
#include <iomanip>

#include <cmath>

using namespace std;

class Point
{
public:
    Point(int xx= 0,int yy = 0)
    {
        X = xx;
        Y = yy;
    }
    Point(Point &p);
    
    int GetX(){
        return X;
    }
    int GetY(){
        return Y;
    }
    
private:
    int X,Y;
};

Point::Point(Point &p) // Copy Constructor
{
    X = p.X;
    Y = p.Y;
    cout<<"Point copy Contructor called."<< endl;
}


// Line
class Line
{
public:
    Line(Point xp1,Point xp2);
    Line(Line &Line);
    
    double GetLen()
    {
        return len;
    }
    
private:
    Point p1,p2;
    double len;
};
// Line Constructor
Line::Line(Point xp1,Point xp2)
:p1(xp1),p2(xp2)
{
    cout<<"Line Constructor called."<<endl;
    double x = double(p1.GetX()-p2.GetX());
    double y = double(p1.GetY()-p2.GetY());
    
    len = sqrt(x*x+y*y);
}

// Line Copy Constructor
Line::Line(Line &L): p1(L.p1),p2(L.p2)
{
    cout<<"Line copy Constructor called."<<endl;
    len = L.len;
}


int main(int argc, const char * argv[])
{
   cout << setw(5) << setprecision(5) << 3.1415 << endl;  // 3.14
   
   Point myp1(1,1),myp2(4,5);
   Line line(myp1,myp2);
   Line line2(line); // using Line copy Construtor
   
   cout<<"The Lenght of the line is:";
   cout<<line.GetLen()<<endl;
   
   cout<<"The Lenght of the line2 is:";
   cout<<line2.GetLen()<<endl;

}

