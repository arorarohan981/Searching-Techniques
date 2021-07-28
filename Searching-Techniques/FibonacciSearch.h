/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FibonacciSearch.h
 * Author: rohan
 *
 * Created on 28 July 2021, 7:29 PM
 */

#ifndef FIBONACCISEARCH_H
#define FIBONACCISEARCH_H

/* It is an efficient Searching Algorithm which works on divide and conquer strategy
 * we can find an element inside the array with the help of fibonacci Search.
 * It's Time Complexity is O(logN).
 * 
 * Here First we find the element in fibonacci Series which is greater than or
 * equal to size of array.
 * Then we compare the target element with the Element in array whose index is 
 * value of 1 less than the index of number found in fibonacci series.
 * If the index is >= size or the value of element is less than the target element
 * we continue (i.e we consider left portion of the array)
 * else we discard left portion of array and we contine with the right portion
 * of the target element.
 * 
 * 
 */
class FibonacciSearch{

public:
    template <typename T>
    int static search(T arr[],size_t size,T target){
        size_t k;
        size_t idx;
        size_t offs;
     /*  Precomputed Fibonacci numbers F0 up to F46. This implementation assumes 
     *  that the size n of the input array fits in 4 bytes. 
     *  Note that F46 = 1836311903 is the largest Fibonacci number that is less 
     *  or equal to the 4-byte INT_MAX (=2147483647). 
     *  The next Fibonacci number, i.e. F47, is 2971215073 and is larger 
     *  than INT_MAX, implying that it does not  fit in a 4 byte integer. 
     *  Note also that the last array element is INT_MAX rather than F47. 
     *  This ensures correct operation for n > F46.
     */
        const static int fib[47 ] = {0, 1, 1, 2, 3, 5, 8, 13, 21,
        34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584,
        4181, 6765, 10946, 17711, 28657, 46368, 75025,
        121393, 196418, 317811, 514229, 832040, 1346269,
        2178309, 3524578, 5702887, 9227465, 14930352,
        24157817, 39088169, 63245986, 102334155,
        165580141, 267914296, 433494437, 701408733,
        1134903170, 1836311903};
        /* Find the smallest fibonacci number that is greater or
        * equal to arraySize. Store this number to avoid recomputing
        * it in the case of repetitive searches with identical arraySize.
        */
        for(k=0;fib[k]<size;k++);
       
        
        for (offs = 0;;) {
        idx = offs + fib[--k];
        if(k<=0){
            break;
        }
        /* note that at this point k  has already been decremented once */
        if (idx >= size || target < arr[idx]) {
            // index out of bounds or target in 1st part
            continue;
        }

        if (target > arr[idx]) { // target in 2nd part
            offs = idx;
            --k;
        } else { // target == arr[idx], found
            return idx;
        }
        }
        
        return -1;
        
    }

};

#endif /* FIBONACCISEARCH_H */

