//
//  main.cpp
//  CPP Refresher
/*
 This program outputs Hello World,
 in the console.
 */
//  Created by Dee Bruce on 1/21/16.
//  Copyright © 2016 com. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {

    std::cout << "Hello, World!\n";
    
    cout << "Yellow World!\n";
    
    //c++11
    puts("Hello, New World");
    
    //Pointers
    const char *strVar = "Hello, Pointer World!";
    puts(strVar);
    return 0;
}
