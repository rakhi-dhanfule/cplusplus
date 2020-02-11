/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ANURADHA
 *
 * Created on February 11, 2020, 12:25 PM
 */

#include <iostream>
using namespace std;

class space
{
    int x;
    int y;
    int z;
    
public:
    
    void getdata(int a, int b,int c);
    void display(void);
    void operator- ();
};
void space :: getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void space :: display(void)
{
    cout<<"x = "<<x<<" ";
    cout<<"y = "<<y<<" ";
    cout<<"z = "<<z<<"\n";
}

void space :: operator-()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    space S;
    S.getdata(10, -20, 30);
    cout << "S : ";
    S.display();
    
    -S;
    cout << "-S : ";
    S.display();
    return 0;
}