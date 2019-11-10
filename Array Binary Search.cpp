#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int size,value,itr = 0, lowerBound = 0, upperBound, position;
	
	cout<<"Please enter the size of Array: ";
	cin>>size;
	upperBound = size - 1;
	int *array= (int*) malloc(size * sizeof(int));
	
	cout<<"\nPlease enter elements in ascending order: ";
	for(int i = 0;i < size; i++)	{
		cin>>array[i];
	}
	
	cout<<"\nPlease enter the element you want to search: \n";
	cin>>value;
	
	for(int i=0; i<size; i++){
		position = (upperBound + lowerBound) / 2;
		
		if(value == array[position]){
			cout<<"\nYour value is at: "<<position+1<<"th position";
			cout<<"\n\nThankyou for using Linear Search..";
			return 0;
		}
		else if(value > array[position]){
			lowerBound = position + 1;
		}
		else{
			upperBound = position -1;
		}
	}
	
	cout<<"\nYour value is anot present in array";
	cout<<"\n\nThankyou for using Linear Search..";
	
	return 0;
}
