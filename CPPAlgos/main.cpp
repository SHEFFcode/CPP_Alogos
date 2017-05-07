//
//  main.cpp
//  CPPAlgos
//
//  Created by Jeremy Shefer on 5/6/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//

#include <iostream>
#include "stdc++.h"
#include "GlobalLocalVariables.hpp"
using namespace std;

ifstream f("Data.in");
ofstream g("Data.out");

//This is a global variable.  Initialized with all zeros.
int Aglobal[3];


int main(int argc, const char * argv[]) {
//    int Alocal[3]; // This is a local variable, it is initialized with random numbers (those in memory location at the time of the function ran.
//    // A local variable has function level scope and is not visible outside the function.
//    
//    int a = 5, b = 8, maximum;
//    
//    maximum = max(a, b);
//    
//    swap(a, b);
//    
//    int number = 2;
//    double cubicRoot;
//    
//    //Cubic Root
//    cubicRoot = pow((double)number, 1.0 / 3);
    
    Run();
    
    return 0;
}
