//
//  GlobalLocalVariables.cpp
//  CPPAlgos
//
//  Created by Jeremy Shefer on 5/6/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//

#include "GlobalLocalVariables.hpp"

int a;

void Printing (int a) {
    cout << a << "\n"; // global
    
//    int a = 5; //will error out since a is passed in as a param
    
    cout << a << "\n"; // local
}

void Printing() {
    cout << a << "\n"; // global
    
    int a = 5;
    
    cout << a << "\n"; // local
}

void Run() {
    a = 100;
    Printing();
    Printing(3);
}
