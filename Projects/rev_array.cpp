#include <iostream>
using namespace std;

void rev_arr(int *arr, int size);
// Follow the Instructions to solve the lab and execute the code
int main()
{

	int size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;

	int arr[size];
	cout<<"Enter the elements of the array";
	for(int i = 0; i<size; i++){
		cin>>arr[i];
	}

	int *p = arr;

	

	cout<<"Original Array";
	for(int i=0; i<size; i++){
		cout<<*(arr+i)<<""<<endl;
	}std::cout<< std::endl;

	rev_arr(arr, size);

	cout<<"Reveresed array"; 
	for(int j= 0; j<size; j++){
		cout<<*(arr+j)<<""<<endl;
	}
	cout<<endl;


	return 0;


}

void rev_arr(int *arr, int size){
	int temp = 0;
	int *start = arr;
	int *end = (arr+size-1);

	while(start<end){
		temp = *start;
		*start=*end;
		start++;
		*end = temp;
		end --; //this updates the array and hence after this function is called, the arry is already reveresed. 
		
	}
}


