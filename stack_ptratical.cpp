#include <iostream>
// #include <cstdlib>
// #include <ctype.h>
#include <string.h>
#include<fstream>

using namespace std;
#define M 50


int front = 0;
int top = -1;
int size = M;
char arr[M];


bool Isfull(void)
{
    if (top == size - 1)
    {

        return true;
    }
    return false;
}


bool Isempty(void)
{
    if (top == -1)
    {
        return true;
    }
    return false;
}
void Push(char val)
{
    if (!Isfull())
    {
        top++;
        arr[top] = val;
    }
    else
    {
        cout << "stack is oveflow push operation cannot perform" << endl;
    }
}
int Pop()
{
    char val;
    if (!Isempty())
    {
        val = arr[top];
        top--;
    }
    else
    {
        cout << "stack is empty  pop operation canot perform" << endl;
    }
    return val;
}

int main()
{
    int i, ch;
    char s[M], s1[M], b;
    cout << "1) Enter the string" << endl;
    cout << "2) to reverse a string " << endl;
    cout << "3) Palidrome or Not" << endl;

    do
    {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter the string" << endl;
             cin.getline(s1,M);
            break;
        }
        case 2:
        {
            for (i = 0; i <= strlen(s); i++)
            {
                s[i] = tolower(s1[i]);
            }
            cout << "The string " << s1 << " lower is :" << s << endl;

            cout << endl
                 << "Reverse of " << s1 << " is  :" << endl;
            for (int i = strlen(s); i >= 0; i--)
            {
                cout << s1[i];
                
            }
            cout<<endl;
            break;
        }

        case 3:
        {
            for (i = 0; s[i] != '\0'; i++) 
            {
                if (int(s[i]) >= 65 && int(s[i]) <= 122) 
                {

                    b = s[i]; 
                    Push(b);  
                }
            }

            for (i = 0; i < (strlen(s) / 2); i++) 
            {
                if (arr[top] == arr[front]) // comparision if front and top bit of stack is same or not
                {
                    Pop();   
                    front++; 
                }
                else
                {
                    cout << endl
                         << s << " is not a Palindrome"<<endl; 
                    break;
                }
            }
            if ((strlen(s) / 2) == front)
            { // condition if half of stringlength is equal to front
                cout << endl
                     << s1 << " is Palindrome"<<endl;
                

                front = 0; 
                top = -1;  
            }

            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);
    return 0;
}
