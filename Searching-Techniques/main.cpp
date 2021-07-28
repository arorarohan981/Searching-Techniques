/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rohan
 *
 * Created on 26 July 2021, 9:05 PM
 */

#include <cstdlib>
#include <iostream>
#include "LinearSearch.h"
#include "SequentialSentinalSearch.h"
#include "BinarySearch.h"
#include "FibonacciSearch.h"
using namespace std;

/*
 * 
 */

void printindex(int);
int main(int argc, char** argv) {
    
//    std::cout<<"Testing Linear Search "<<std::endl;
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int index=LinearSearch::search<int>(arr1,10,8);
//    printindex(index);
//    std::cout<<"Testing Sequential Sentinal(ELement) Search "<<std::endl;
//    index=SequentialSentinalSearch::search<int>(arr1,10,11);
//    printindex(index);
//    std::cout<<"Testing Binary Search (Non-recursive) "<<std::endl;
//    index=BinarySearch::search<int>(arr1,10,8);
//    printindex(index);
//    std::cout<<"Testing Binary Search (Recursive) "<<std::endl;
//    BinarySearch::search_recursive<int>(arr1,10,11);
//    std::cout<<"Testing Fibonacci Search "<<std::endl;
    index=FibonacciSearch::search<int>(arr1,10,3);
    printindex(index);
    return 0;
}



/*PrintIndex Takes in Index.
 * Prints " Element Not Found " if the index is -1.
 * Else it Prints the index of the Element.
 */
void printindex(int index){
    if(index==-1){
        std::cout<<"Element Not Found "<<std::endl;
        
    }
    else{
        std::cout<<"Element Found at index "<<index<<std::endl;
    }
}

