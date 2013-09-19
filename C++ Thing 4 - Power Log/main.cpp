//
//  main.cpp
//  C++ Thing 4 - Power Log
//
//  Created by William Holt on 9/19/13.
//  Copyright (c) 2013 William Holt. All rights reserved.
//

#include <iostream>
using namespace std;


int power(int num, int pow)  //exponents!
{
    if (pow < 0) return 0;

    int result = 1;
    for (int i = 0; i < pow; i++)
        result = result * num;
    return result;
}

int mylog(int num, int log) // math
{
    int result = 0;
    int count = 0;
    for(int i = 0; i <= num; i++)
    {
        if((log == power(num,i)) || (log > power(num, i) && log < power(num, i+1)))
        {
            result = count;
            break;
        }
        count++;
    }
    return result;
}

int main(int argc, const char * argv[])
{

    int num, pow, log;
    cout << "Give me a number ";
    cin >> num;
    cout << "What power do you want to raise it to? ";
    cin >> pow;

    cout << num << " raised to " << pow << " is " << power(num,pow) << endl << endl;

    cout << "Give me a number ";
    cin >> num;
    cout << "What rolls down stairs over in pairs (log) ";
    cin >> log;

    cout << num << " log " << log << " is " << mylog(num,log) << endl << endl;

    return 0;
}

