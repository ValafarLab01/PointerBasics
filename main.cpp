/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on September 13, 2017, 10:58 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double x(10); //Regular variable
    //Pointers are defined by an asterisk.
    //Pointers hold memory addresses.
    //Pointers can be named any legal and valid name.
    //Pointers need to have a type (primitive or object). 
    double *ptr; //Pointers are defined by an asterisk. 

    //Pointers should always be initialized before use. Just like all other variables.
    //Pointers can be initialized in two ways.
    //A pointer can point to an existing item. 

    ptr = &x;
    cout << "x is at: " << &x << " and has a value of: " << x << endl;
    cout << "ptr points to: " << ptr << " and has a value of: " << *ptr << endl;
    cout << endl;
    
    //Both x and ptr are pointing to the same memory location. Changing one
    //will affect the other.
    x = 15;
    cout << "x is at: " << &x << " and has a value of: " << x << endl;
    cout << "ptr points to: " << ptr << " and has a value of: " << *ptr << endl;
    cout << endl;
    
    *ptr = -15;
    cout << "x is at: " << &x << " and has a value of: " << x << endl;
    cout << "ptr points to: " << ptr << " and has a value of: " << *ptr << endl;
    cout << endl;
    
    //Pointers can be initialized by manually allocating a memory location. 
    ptr = new double;
    *ptr = 10; //Be careful and not make the mistake of ptr = 10;
    cout << "x is at: " << &x << " and has a value of: " << x << endl;
    cout << "ptr points to: " << ptr << " and has a value of: " << *ptr << endl;
    cout << endl;
    
    //Your program needs to have a delete for every new. Otherwise your program
    //will have memory leaks. Can use valgrind to examine it. 
    delete ptr; 

    return 0;
}

