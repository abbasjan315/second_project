#include<iostream>
using namespace std; 

int main()
{

    // Write a program that asks the user for numbers until 0 is given, then (The numbers here are just an example):

    // •	Prints out how many numbers have been given (excluding the 0):
    // Count: 5 

    //•	Prints out the sum of all the numbers:
    // Sum: 78 

    // •	Prints out the average:
    // Average: 15.6

    int number ; 
    int  counter = 0 ; 
    float everage , sum= 0 ;

    while ( number != 0)
    {
        cout << " enter a number , for exit 0 = " ;
        cin >> number ; 

        sum = sum + number ; 

        if ( number == 0 )
        {
            cout << counter << " that you given " << endl ; 
            cout << " the sum " << sum <<endl ; 
            cout << " the everage " << sum/counter << endl ; 
        }
        counter ++ ; 
    }
}