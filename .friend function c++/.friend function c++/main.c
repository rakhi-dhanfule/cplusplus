/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on February 5, 2020, 12:52 PM
 */

#include<iostream>
using namespace std;
const int IDLE =0;
const int INUSE =1;

class c2; //forward declaration

class c1{
    int status; // IDLE if off, INUSE if on screen //...
    
    public:
    void set_status(int state);
    friend int idle(c1 a,c2 b);
    
};

class c2{
    int status; // IDLE if off, INUSE if on screen
    //...
    
    public:
    
    void set_status(int state);
    friend int idle(c1 a,c2 b);
};
void c1::set_status(int state)
{
    status = state;
}

void c2::set_status(int state)
{
 status = state;
}
int idle(c1 a,c2 b)
{
    if(a.status || b.status) return 0;
    else return 1;
}
int  main()
{
    c1 x;
    c2 y;
    
    x.set_status(IDLE);
    y.set_status(IDLE);
    
if (idle(x,y))cout<<"screen can be used.\n";
else cout << "In use.\n";

     x.set_status(INUSE);
     
if (idle(x,y))cout<<"screen can be used.\n";
else cout << "In use.\n";

 return 0;   
    
    
    
    
    
    
}