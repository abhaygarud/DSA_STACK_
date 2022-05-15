#include <iostream>
#include <stdio.h>

using namespace std;

struct stack
{   
  public:
    int size;
    int top;
    int*arr;
};

int Isfull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        
        return 1; 
    }
    return 0;
    
}

int Isempty( struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;

}
void Push(stack*ptr)
{
    char val;
    cout<<"enter the element to push"<<endl;
    cin>>vall;
    if(Isfull(ptr)){
        cout<<"stack is full"<<endl;
    }
    else{
        ptr->size++;
        ptr->arr[ptr->top]=val;
    }
}
int Pop(stack*ptr)
{
    if(Isempty(ptr)){
        cout<<"stack is empty operation canot perform"<<endl;
    }
    else{
       int val=ptr->arr[ ptr->top];
       ptr->size--;
    }
}



int main(){
   


    
    
    return 0;
}