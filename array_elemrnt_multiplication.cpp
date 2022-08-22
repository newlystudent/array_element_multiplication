//This program returns an integer array where each element is multiplication result of all the other elements of the given array
// Input Format : [1,2,3,4,5]
//Output Format : [120,60,40,30,24]

#include<iostream>
using namespace std;

int main()
{
    int arraySize;
    cout<<"Enter The Length of the array : ";
    cin>>arraySize;
    //Taking two array to backup the original values of the array
    int primaryArray[arraySize], secondaryArray[arraySize];
    
    
    //Asking user for the input
    cout<<"Now Enter The elements : ";

    //Taking the values as Input In the array
    for(int i = 0; i<arraySize;i++)
    {
        cin>>primaryArray[i];
    }
    cout<<endl;
    //Printing The Array to debug
    /* for(int i = 0; i<arraySize;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; */


    //Copying primaryArray into secondaryArray
    for(int i = 0; i<arraySize;i++)
    {
        secondaryArray[i] = primaryArray[i];
    }

    //Printing The Second Array to debug
    /* for(int i = 0; i<arraySize;i++)
    {
        cout<<secondaryArray[i]<<" ";
    }
    cout<<endl; */

    //Storing the results of multiplication of other elements into primaryArray indexes
    for(int i = 0; i<arraySize;i++)
    {
        int val = 1;
        for(int j = 0; j<arraySize;j++)
        {
            if(i != j)
            {
                val *= secondaryArray[j];
            }
        }
        primaryArray[i] = val;
    }

    //Printing value of the secondaryArray
    for(int i = 0; i<arraySize;i++)
    {
        cout<<primaryArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}