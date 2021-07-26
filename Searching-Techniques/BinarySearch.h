/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearch.h
 * Author: rohan
 *
 * Created on 26 July 2021, 9:34 PM
 */

#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H


/*
 * Binary Search is one of the best Algorithms for Searching.(fastest)
 * The only Pre-requisite is that Array/List should be Sorted.
 * Here we compare the key with the middle element and if the key is found we 
 * return the index if the number is left ,we divide the left side list in half
 * and so on.Until we get list of size 1.
 * 
 * Worst case Comparisons : O(logn)
 * 
 * Binary Search is used in Sequential ,Linear and Non Linear Data Structures 
 * like Trees.
 * 
 */
class BinarySearch{
    
public:
    /*Search method Takes in array of type T as the First Parameter,Size of array 
     * of type int as Second Parameter and Key To Search of type T. 
     * If we pass array of class type,we need == operator of class type to be 
     * overloaded.
     * */
    template <typename T>
    int static search(T arr[],int size,T key){
        int index=-1;
        int lower=0;
        int upper=size-1;
        int middle;
        while(lower<=upper){
            middle=(lower+upper)/2;
            if(arr[middle]==key){
                return middle;
            }else if(key<arr[middle]){
                
                upper=middle-1;
                
            }else{
                lower=middle+1;
            }
        }
        if(lower>upper){
            return index;
        }
        return index;
    }
    /*search_recursive method Takes in array of type T as the First Parameter,Size of array 
     * of type int as Second Parameter and Key To Search of type T. 
     * If we pass array of class type,we need == operator of class type to be 
     * overloaded.
     * */
    template <typename T>
    void static search_recursive(T arr[],int size,T key){
        search_rec(arr, key,size-1,0);
    }
    
    
private:
    /*search_rec method Takes in array of type T as the First Parameter,Key which
     * is to be found as 2nd parameter.Lower bound of array of type int as 3 rd 
     * parameter and upper bound of array as 4th parameter.
     * If we pass array of class type,we need == operator of class type to be 
     * overloaded.
     * */
    template <typename T>
    static  void  search_rec(T arr[],T key,int lower,int upper){
        int middle;
        if(lower<=upper){
            middle=(lower+upper)/2;
            if(arr[middle]==key){
                std::cout<<"Element Found at Index "<<middle<<std::endl;
                return;
            }else if(key<arr[middle]){
                search_rec(arr,key,lower,middle-1);
                
            }else{
                search_rec(arr,key,middle+1,upper);
            }
            }else{
             std::cout<<"Element Not Found"<<std::endl;
            }
        return;
    }
};

#endif /* BINARYSEARCH_H */

