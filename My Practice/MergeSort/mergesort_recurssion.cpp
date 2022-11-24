//merge sort using recursion
//break into smaller pieces and then sort
//fastest among the bubble, selection, and all other sorting algorithm
// process -> create new array and copy the values from parent array

#include<iostream>
#include<cstdlib>
#include<cmath>
#include<string>
 
using namespace std;
 
void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    cout << "mid "<<mid<<endl;
    int len1 = mid - s + 1;
    cout << "len1 "<<len1<<endl;
    int len2 = e - mid;
    cout << "len2 "<<len2<<endl;

    //dynamic memory allocation
    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
        cout << "first " << first[i] <<" ";
    }
    cout<<endl;
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
        cout << "second " << second[i] << " ";
    }
    cout<<endl;
    

    //merge 2 sorted array logic
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]){
            arr[mainArrayIndex] = first[index1];
            cout<< "arr[main] "<<arr[mainArrayIndex] <<" ";
            mainArrayIndex++;
            index1++;
    }
        else{
            arr[mainArrayIndex] = second[index2];
            cout<< "arr[main] "<<arr[mainArrayIndex] << " ";
            mainArrayIndex++;
            index2++;
    }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex] = first[index1];
        cout<< "arr[main] "<<arr[mainArrayIndex] <<" ";
        mainArrayIndex++;
        index1++;
    }
    while(index2 <len2){
        arr[mainArrayIndex++] = second[index2++];
        cout<< "arr[main] "<<arr[mainArrayIndex] <<" ";
        mainArrayIndex++;
        index2++;
    }
    cout<<endl;
    delete []first;
    delete []second;
}
void print(int *arr, int i, int n){
    
    for (i = 0; i <= n; i++)
    {
        cout << arr[i]<<" " ;
    }
    cout << endl;
}


void mergeSort(int *arr, int s, int e)
{
    //base case
    if( s >= e){
        return ;
    }

    int mid = s + (e-s)/2;
    //left part sort karna h
    print(arr, s, e);
    mergeSort(arr, s, mid);

    //right part sort karna h
    mergeSort(arr, mid+1, e);   

    //merge
    merge(arr, s, e);

}

int main()
{
    int arr[6] = {2,5,1,6,9,11};
    int n = 6;

    mergeSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
       
    return 0;
}