/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on February 4, 2020, 3:10 PM
 */

#include <iostream>

using namespace std;

class dog{
    public:
    int legs;
    int eyes;
    
    dog(){
        legs=4;
        eyes=2;
    }
};
int main(){
    dog obj;
    cout<<"legs:"<<obj.legs<<endl;
    cout<<"eyes:"<<obj.eyes<<endl;
    return 0;
}