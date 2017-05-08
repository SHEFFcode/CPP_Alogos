//
//  Matrix.cpp
//  CPPAlgos
//
//  Created by Jeremy Shefer on 5/7/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//

#include "Matrix.hpp"

int Aglobal[3][3];

void RunMatrix() {
    addMatrix(1);
    addMatrix(10);
    addMatrix(1000);
    
    int sumElements = sumMatrix();
    cout << sumElements << endl;
}

void addMatrix(int x) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            Aglobal[i][j] += x;
        }
    }
}

int sumMatrix() {
    int sumElements = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sumElements += Aglobal[i][j];
        }
    }
    
    return sumElements;
}
