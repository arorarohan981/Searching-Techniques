/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SequentialSentinalSearch.h
 * Author: rohan
 *
 * Created on 26 July 2021, 9:25 PM
 */

#ifndef SEQUENTIALSENTINALSEARCH_H
#define SEQUENTIALSENTINALSEARCH_H


/* Sequential Sentinal Search is a variation of Linear Search.
 * Here the Number of comparisons are reduced.
 * 
 * Worst Case Comparisons are : N
 */
class SequentialSentinalSearch{
    
public:
    /*Search method Takes in array of type T as the First Parameter,Size of array 
     * of type int as Second Parameter and Key To Search of type T. 
     * If we pass array of class type,we need == operator of class type to be 
     * overloaded.
     * */
    template <typename T>
    int static search(T arr[],int size,T key){
        if(arr[size-1]==key){
            return size-1;
        }else{
            int i=0;
            arr[size-1]=key;
            while(arr[i]!=key){//In the Worst Case here we will need N Comparisons
                i++;
            }
            if(i==size-1){
                return -1;
            }else{
                return i;
            }
        }
    }
};


#endif /* SEQUENTIALSENTINALSEARCH_H */

