/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ANURADHA
 *
 * Created on February 6, 2020, 1:12 PM
 */

#include <iostream>
using namespace std;

class printData{
public:
    
    void print(int i){
        cout << "printing int:"<< i<< endl;
        
    }
    void print(double f){
        cout<<"printing float:"<< f << endl;
    }
    
    void print(char*c){
        cout<< "printing character:"<< c << endl;
    }
};

int main(void){
    printData pd;
    
    //call print to print integer
    pd.print(5);
    
    //call print to print float
    pd.print(500.263);
    
    //call print to print character
    pd.print("Hello C++");
    
    return 0;
}
