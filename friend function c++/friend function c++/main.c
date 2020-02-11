/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on February 5, 2020, 12:15 PM
 */

#include <iostream>
using namespace std;

class myclass{
    int a,b;
    public:
    friend int sum (myclass x);
    void set_ab(int i,int 
};
void myclass::set_ab(int i,int j)
{
    a=i;
    b=j;
}
//Note: sum() is nit a member function of any class.
int sum(myclass x)
{
    /*because sum() is a friend of myclass, it can directly access a and b.*/
    return x.a + x.b;
}
int main()
{
    myclass n;
    
    n.set_ab(3,4);
    cout<<sum(n);
    return 0;
}

