/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on February 5, 2020, 1:59 PM
 */

#include <iostream>
using namespace std;


class TwoValues {
    int a;
    int b;
    
    public:
    
    TwoValues(int i, int j) {a = i; b = j;}
    friend class Min;
    
};

class Min{
    
    public:
    int min(TwoValues x);
};
int Min::min(TwoValues x)
{
    return x.a < x.b ? x.a : x.b;
}
int main()
{
    TwoValues ob(10, 20);
    Min m;
    
    cout << m.min(ob);
    return 0;
}