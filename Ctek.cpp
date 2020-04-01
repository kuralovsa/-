#include<iostream>

struct stek
{
    int value;
    struct stek *next;                      
};
 
void push(stek* &NEXT, const int VALUE)
{
    stek *MyStack = new stek;               
    MyStack->value = VALUE;                 
    MyStack->next = NEXT;                   
    NEXT = MyStack;                         
}
 
int pop(stek* &NEXT)
{
    int temp = NEXT->value;                 
    stek *MyStack = NEXT;                                                               
    NEXT = NEXT->next;                      
    delete MyStack;                         
    std::cout << temp;             
    return temp;                   
	}
 
int main()
{
    stek *p=0;
 
    push(p,100);                           
    push(p,300);                                                           
    pop(p);                                
 
    return 0;
}
