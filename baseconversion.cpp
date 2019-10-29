
//Author:      Anamol Acharya
//Filename:    CS2413–002–Lab4–R11651561.cpp
//Speciation:  To convert the given decimal number to any conversion base between 2 to 27 except base 10 using stack. 
//For:         CS 2413 Data Structure Section 002


#include <iostream>
#define maximum 10                                                  // To hold maximum 10 elements
using namespace std;


typedef struct {                                                    //create a typedef function to create allies of struct
    int items[maximum],top=-1;                                            //create a array that can hold maximum 10 elements
    //int                                                          //refer -1 as top of the stack       
} stackADT;

stackADT myStack;                                                  //declare stackadt fuction

char Returnval(int base){                                           //create a function that returns a charcter value for corresponing integer.
    if (base == 10){                                                //check if base number is 10, then return to A
        return 'A';
    }
    else if (base==11){                                             //check if base number is 11, then return to B
        return 'B';
    }
    else if (base==12){                                             //check if base number is 12, then return to C
        return 'C';
    }
    else if (base==13){                                             //check if base number is 13, then return to D
        return 'D';
    }
    else if (base==14){                                             //check if base number is 14, then return to E
        return 'E';
    }
    else if (base==15){                                             //check if base number is 15, then return to F
        return 'F';
    }
    else if (base==16){                                             //check if base number is 16, then return to G
        return 'G';
    }
    else if (base==17){                                             //check if base number is 17, then return to H
        return 'H';
    }
    else if (base==18){                                             //check if base number is 18, then return to I
        return 'I';
    }
    else if (base==19){                                             //check if base number is 19, then return to J
        return 'J';
    }
    else if (base==20){                                             //check if base number is 20, then return to K
        return 'K';
    }
    else if (base==21){                                             //check if base number is 21, then return to L
        return 'L';
    }
    else if (base==22){                                             //check if base number is 22, then return to M
        return 'M';
    }
    else if (base==23){                                             //check if base number is 23, then return to N
        return 'N';
    }
    else if (base==24){                                             //check if base number is 24, then return to O
        return 'O';
    }
    else if (base==25){                                             //check if base number is 25, then return to P
        return 'P';
    }
    else if (base==26){                                             //check if base number is 26, then return to Q
        return 'Q';
    }
     else{
    return (char)(base + '0'); }
}


void push(stackADT myStack[], int value)                            //create a push function in the stack
    {
        if(myStack->top == maximum-1)                               //to check is stack is full or not
        {  
            cout<< endl  <<"OVERFLOW" << endl; }
            else
            {  
                myStack->top++;                                     //add an element in the stack
                myStack->items[myStack->top] = value;
            }
    }

void display(stackADT Stack[])                                      //create a display function in the stack
    { 
        int i;                                                      //create a intiger variable i
        if(Stack->top == -1) cout << endl <<" EMPTY STACK " << endl ;  //to check if the stack is empty or not
        else 
        {  
          char d;
          for(i=Stack->top; i>=0; i--) 
          {
              d= Returnval(Stack->items[i]);
              cout << d ;
          } 
          cout << endl;
        }
    }


int pop(stackADT Stack[])                                            //create a pop function in the stack
    {
        int val;                                                     //create a integer variable val
        if(Stack->top == -1)                                         //to check if stack is empty or not
        {  
            cout << endl << "UNDERFLOW" << endl ;
            return -1;                                               //return the value to -1
            }
                else
                {
                    val = Stack->items[Stack->top];                               
                    Stack->top--;                                     //pop the element in the stack
                    return val;                                       //return the funtion to val
                }   
    }


int main()                                                             //create a main functoin
{                                                          
    int dec,  conv, rem;                                               //create a intiger variable of deciaml number, conversion base,                                                                                                       
    cout << "Decimal  to any Base Converter\n\n";                      //and remainder
    cout << "Please enter a decimal number: " ;
    cin >> dec;
    int  a=dec;
    cout << "Please enter the conversion base: ";
    cin >> conv;
    if (conv > 1 && conv < 10)                                          //to check if the conversion base is between 1 and 10
        {                
            while (dec !=0)
                {
                    rem = dec % conv;                 
                    push(&myStack, rem);                                //push the remainder to the stack
                    dec = dec / conv;
                }
            cout << endl;
            cout << "Your base " << conv << " representation of the number " << a <<"  is:  ";
            display(&myStack);
            cout << endl;
        }
    else if (conv > 10 && conv < 28)                                     //to check if the conversion base from 11 to 27
        {           
            while (dec !=0)                                              //to check if the given decimal number is 0 or not
                {
                    rem = dec % conv;                                    //to calculate the remainder 
                    push(&myStack, rem);                                 //push the element to the stack
                    dec = dec / conv;
                }
            cout << endl << endl;
            cout << "Your base " << conv << " representation of the number " << a <<"  is: ";
            display(&myStack);                                           //display the stack
            cout << endl;
        }
        else
        {
        cout << "Enter a conversion base between 2 to 27" << endl;
        }
   
return 0;
}


