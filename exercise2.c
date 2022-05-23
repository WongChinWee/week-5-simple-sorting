//documentation section 
/* Exercise 2 - Selection Sort*/

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section
void selectionSort(int Data[], int n)
{
    for (int last = n-1; last >= 1; --last)
    {// select largest item in the Array
     int largestIndex = 0;

     // largest item is assumed start at index 0
     for (int p=1; p <= last; ++p)
     { if (Data[p] > Data[largestIndex])
     largestIndex = p;
     
     } // end for

     // swap largest item Data[largestIndex] with
     // Data[last]

     swap(Data[largestIndex], Data[last]);

    } // end for
} // end selectionSort


//user-defined section
