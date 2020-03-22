#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr,int start, int end, int element){
    if(start > end)
        return -1;
    int mid = (start + end) /2;
    if(arr[mid] == element)
        return mid;
    if(arr[mid] > element)
        return binarySearch(arr, start, mid-1, element);
    else
        return binarySearch(arr, mid+1, end, element);
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++)
        cin>>arr[i];
    cout<<endl;
    int element;
    cin>>element;
    int position = binarySearch(arr, 0, size-1, element);
    if(position != -1)    
        cout<<"Element is at: "<<position;
    else 
        cout<<"Element not present";    
    return 0;
}