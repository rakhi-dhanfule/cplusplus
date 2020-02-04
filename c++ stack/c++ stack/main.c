/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on February 4, 2020, 11:57 AM
 */

#include <iostream>
using namespace std;

#define SIZE 100

//this creates the class stack.
class stack{
    int stack[SIZE];
    int tos;
    public:
    void init();
    void push(int i);
    int pop();
};
void stack:: init()
{
    tos=0;
}
void stack:: push(int i)
{
    if(tos==SIZE){
        cout <<"Stack is full.\n";
        return;
    }
    stack[ tos]=i;
    tos++;
}
int stack::pop()
{
    if(tos==0){
        cout << "stack underflow.\n";
        return 0;
        
    }
    tos--;
    return stack[tos];
    
}
int main()
{
    stack,stack1, stack2; //create two stack objects
    
    stack1.init();
    stack2.init();
    
    stack1.push(1);
    stack2.push(2);
    
    stack1.push(3);
    stack2.push(4);
    
    cout << stack1.pop() << "  ";    
    cout << stack1.pop() << "  ";    
    cout << stack2.pop() << "  ";  
    cout << stack2.pop() << "\n";    
    return 0;
}
