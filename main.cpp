/* 
 * File:   main.cpp
 * Author: evan
 *
 * Created on May 26, 2015, 8:29 PM
 */

#include <cstdlib>

#include "Module.h"

using namespace std;



int main(int argc, char** argv) {

    string stuff[] = {"ISBN", "12341234", "Author", "Forest Finnigan", "Title", "Of BMX and Puthons"};
    
    Module module;
    
    module.displayTable(3, 2, stuff);
    
    return 0;
}

