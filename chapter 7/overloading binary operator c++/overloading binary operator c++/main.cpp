/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ANURADHA
 *
 * Created on February 11, 2020, 12:53 PM
 */
#include <iostream>
using namespace std;

class complex
{
    float x;      //real part
    float y;      //imaginary part
    
public:
    complex() { }                     // constructor 1
    complex(float real, float imag)   // constructor 2
    { x = real; y = imag; }
    complex operator+(complex);
    void display(void);
};

complex complex :: operator+(complex c)
{
    complex temp;             //temporary
    temp.x = x + c.x;         // these are 
    temp.y = y + c.y;         // float additions
    
    return(temp);
}

void complex :: display(void)
{
    cout << x << " + j" << y << "\n";
}
int main()
{
    complex c1,c2,c3;
    c1 = complex(2.5, 3.5);      //invokes constructor 1
    c2 = complex(1.6, 2.7);      // invokes constructor 2
    c3 = c1 + c2;
    
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c3 = "; c3.display();
    
    return 0;
}


