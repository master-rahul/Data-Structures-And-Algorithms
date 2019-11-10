#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int size,value;
	
	cout<<"Please enter the size of Array: ";
	cin>>size;
	int *array= (int*) malloc(size * sizeof(int));
	
	cout<<"\nPlease enter the array elements: ";
	for(int i = 0;i < size; i++)	{
		cin>>array[i];
	}
	
	cout<<"\nPlease enter the element you want to sarch: \n";
	cin>>value;
	
	for(int i = 0; i < size; i++){
		if(array[i] == value){
			cout<<"\nYour value is at: "<<i+1<<"th position";
		}
	}
	cout<<"\n\nThankyou for using Linear Search..";
	
	return 0;
}
