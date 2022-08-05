// DAA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

void print(int A[], int n)
{
    cout << "Sorted data: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void count_sort(int* A, const int size)
{
    int i, j;

    int count[10]; //count array for 0 to 9 range of number


    for (int i = 0; i < 10; i++)  //loop from 0 to 9
    {
        count[i] = 0;       // initialize count array empty=0
    }

    for (int i = 0; i < size; i++) //loop from 0 to number of elements in array
    {
        count[A[i]]++;              //contain index of A[i] (value)
                                    //increment count index value with number of times a digit occur

    }
    i = 0; //i counter apply on count array
    j = 0; //j counter apply on original array
    while (i <= 10) // loop from 0 to 10 on count array (check all array)
    {

        if (count[i] > 0)
        {
            A[j] = i;       //replacement in original array, Make A[j] index value equal to index of count array
            count[i]--;     //decrement the count index value 
            j++;            //moving toward next index of original array
        }
        else
            i++; //if value is zero move ahead in count array and do nothing in original array

    }
}
int main()
{
    cout << "COUNT SORT" << endl;
    cout << "----------" << endl;

    int ar[] = { 1,6,4,9,4,4,4,4,2,1,4 };
    int len = sizeof(ar) / sizeof(ar[0]); //length of array
    count_sort(ar, len); //applying count_sort
    print(ar, len); //print
    system("pause");
    return 0;
}

