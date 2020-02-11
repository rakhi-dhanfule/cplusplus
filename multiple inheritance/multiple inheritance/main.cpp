/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ANURADHA
 *
 * Created on February 6, 2020, 12:28 PM
 */

#include<iostream>
using namespace std;

//Base class shape
class shape{
public:
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }
protected:
    int width;
    int height;
};

//Base class PaintCost
class paintCost{
public:
    int getCost(int area){
        return area*70;
    }
};

//Derived class
class Rectangle: public shape, public PaintCost {
public:
    
   int getArea(){
       return(width *  height);
   } 
  };
  
  int main(void){
      Rectangle Rect;
      int area;
      
      Rect.setWidth(5);
      Rect.setHeight(7);
      
      area=Rect.getArea();
      
      //Print the area of the object.
      cout<<" Total area:"<< Rect.getArea() << endl;
      
      //Print the total cost of painting
      cout<<"Total paint cost: $"<<Rect.getCost(area) << endl;
      
      return 0;
  }