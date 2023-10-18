#include<iostream>
using namespace std;

//Max Element function
int getMax(int array[], int n){
  int max = INT32_MIN;

  for(int i=0; i<n; i++){
    if(max<array[i]){
      max = array[i];
    }
  }
  return max;
}

//Min Element Function
int getMin(int array[], int n){
  int min = INT32_MAX;

  for(int i=0; i<n; i++){
    if(min>array[i]){
      min = array[i];
    }
  }
  return min;
}

int main(){
  int size;
  cout<<"Enter size : ";
  cin>>size;
  cout<<"Enter elements : ";
  int arr[100];
  //Taking Input of Array
  for(int i=0; i<size; i++){
    cin>>arr[i];
  }

  cout<<"Max : "<<getMax(arr,size)<<endl;
  cout<<"Min : "<<getMin(arr,size)<<endl;
}