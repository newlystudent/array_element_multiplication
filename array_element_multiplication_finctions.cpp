//This program returns an integer array where each element is multiplication result of all the other elements of the given array
// Input Format : [1,2,3,4,5]
//Output Format : [120,60,40,30,24]

#include<iostream>

using namespace std;

//Prototypes : 
void array_input(int *arr, int size);
void array_copy(int *arr1, int *arr2, int size);
void array_operation(int *arr1, int *arr2, int size);
void print_array(int *arr, int size);
void input_debug(int *arr, int size);

//Main function :
int main()
{
    int arraySize;
    cout<<"Enter The Length of the array : ";
    cin>>arraySize;
    //Taking two array to backup the original values of the array
    int primaryArray[arraySize], secondaryArray[arraySize];
    
    // Calling functions
    array_input(primaryArray, arraySize);
    array_copy(primaryArray,secondaryArray,arraySize);
    array_operation(primaryArray,secondaryArray,arraySize);
    print_array(primaryArray,arraySize);
    // input_debug(primaryArray,arraySize);// Only Uncomment This if you need to debug the Input
    return 0;
}
//End of main function

//Function Definitions : 

//Taking the values from the user
void array_input(int *arr, int size)
{
     cout<<"Now Enter The elements : ";
    for(int i = 0; i<size;i++)
    {
        cin>>arr[i];
    }
}

//Copying the values from primary array to the secondary array
void array_copy(int *arr1, int *arr2, int size)
{
    for(int i = 0; i<size;i++)
    {
        arr2[i] = arr1[i];
    }
}

//Storing the results of multiplication of other elements into primaryArray indexes
void array_operation(int *arr1, int *arr2, int size)
{
    for(int i = 0; i<size;i++)
    {
        int val = 1;
        for(int j = 0; j<size;j++)
        {
            if(i != j)
            {
                val *= arr2[j];
            }
        }
        arr1[i] = val;
    }
}

////Printing value of the secondaryArray
void print_array(int *arr, int size)
{
    for(int i = 0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Debugging the input : 
void input_debug(int *arr, int size)
{
    for(int i = 0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}