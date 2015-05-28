/* 
 * File:   main.cpp
 * Author: evan
 *
 * Created on May 26, 2015, 8:29 PM
 */
//such cool main file 
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdio.h>
#include "Module.h"

using namespace std;

int main(int argc, char** argv) {
    time_t t = time(0);
    
    printf("%s", ctime(&t));
    
    return 0;
}

