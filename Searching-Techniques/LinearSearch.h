/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinearSearch.h
 * Author: rohan
 *
 * Created on 26 July 2021, 9:05 PM
 */

#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

/*Searching : Whenever we have a set of records .We always have some piece of 
 * information which is called as key..
 * Depending on the Structure Type where records are to be stored.
 * Key could be unique or non-unique.
 * In Case of searching , we will compare the number of comparisons required to
 * search/find a element For Efficiency/Performance analysis of a algorithm.
 *
 * Linear Search is a kind of Sequential Searching Algorithm.
 * Here Elements are searched from left to right / start to end in a sequential manner.
 * 
 * 
 * Worst Case Comparisons :2n+1
 * 
 * If we get a sorted array then we can come out of the search if the element is 
 * not found and we are traversing the number greater than the required number.
 * 
 */
class LinearSearch{
public:
    /*Search method Takes in array of type T as the First Parameter,Size of array 
     * of type int as Second Parameter and Key To Search of type T. 
     * If we pass array of class type,we need == operator of class type to be 
     * overloaded.
     * */
    template <typename T>
    int static search(T arr[],int size,T key_to_search){
        int index_of_key=-1;
        for(int i=0;i<size;i++){// Here N+1 Comparisons are done (In the Worst Case)
            if(arr[i]==key_to_search){//Here N comparisons are done (In the Worst Case)
                                      //So total No of comparisons done are 2N+1 in the Worst Case.
                index_of_key=i;
                break;
            }
        }
        return index_of_key;
    }
};


#endif /* LINEARSEARCH_H */

