/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ANURADHA
 *
 * Created on February 6, 2020, 12:45 PM
 */

#include<iostream>
using namespace std;

//Base class
class shape{
public:
    
    void setWidth(int w){
        width=w;
    }
    
    void setHeigth(int h){
        heigth =h;
    }
    
protected:
    int width;
    int heigth;
};

//Derived class
class Rectangle:public shape{
public:
    
    int getArea(){
        return (width * heigth);
    }
};

int main(void){
    Rectangle Rect;
    
    Rect.setWidth(5);
    Rect.setHeigth(7);
    
    //Print the area of the object.
    cout<<"Total area:"<<Rect.getArea()<<endl;
    
    return 0;
}