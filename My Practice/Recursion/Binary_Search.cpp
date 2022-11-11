#include<iostream>
#include<cstdlib>
#include<climits>
using namespace std;

bool isSorted(int arr[], int size){

    //base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }else{
        return isSorted(arr + 1, size - 1);
    }
}

void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int sum(int arr[], int size){

    //base case
    if(size == 0 ){
        return 0;
    }
    //rr
    print(arr, size);
    cout << "+ " <<arr[size-1] <<endl;
    return (sum(arr, size - 1) + arr[size - 1]);
    

}

bool binarySearch(int arr[], int s, int e, int k){
    //base case
    if(s>e){
        return false;
    }
    int mid = s + (e -s)/2;
    //element found
    if(arr[mid] == k){
        return true;
    }

    if(arr[mid] < k){
        return binarySearch(arr, mid + 1, e, k);
    }
    else{
        return binarySearch(arr, s, mid + 1, k);
    }
}

int main()
{
    int arr[6] = { 1, 2, 3, 4, 5, 6};
    int size = 6;

    bool ans  = isSorted(arr, size);
    if(ans){
        cout << "array is sorted "<< endl;
    }else{
        cout<< "not sorted "<< endl;
    }

    int s = sum(arr, size);
    cout << s<<endl;

    if(binarySearch(arr, 0, size-1, 15)){
        cout << "Got it"<< endl;
    }else{
        cout << "Missing"<<endl;
    }
    return 0;
}