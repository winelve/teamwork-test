#include "add.h"
#include "substract.h"
#include <iostream>

int main(){

    int a = 1;
    int b = 2;
 
    std::cout << "a:" << a << "\nb:" << b << "\na+b=" << add(a,b) << std::endl;
    std::cout << "a:" << a << "\nb:" << b << "\na-b=" << substract(a,b) << std::endl;
}