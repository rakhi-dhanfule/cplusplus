/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on February 5, 2020, 1:45 PM
 */

#include<iostream>
using namespace std;

inline int max(int a,int b)
{
    
    return a>b ?  a : b;
}
int main()
{
    cout << max(10, 20);
    cout << " "<< max(99, 88);
    
    return 0;

}