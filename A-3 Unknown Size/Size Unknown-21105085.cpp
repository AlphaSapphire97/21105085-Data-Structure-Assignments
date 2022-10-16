
#include <iostream>                 
using namespace std;

int binary_search(int arr[],int s,int l,int val){    //s is starting index and l is index of last element val is the element to be found
    int mid=(i+j)/2; 
    while(s<=l){   
    if(arr[mid]==val){
      return mid;
      }  
    else if(arr[m]<key){
      s=m+1;
      }
    else{
      l=m-1;
      }
    mid=(s+l)/2;
    }
    return -1;  // when element is not present we will return -1
}
//binary search function for array with unknown lenght
int unknown_size_binary_search(int arr[],int val){
    //Initializing s as 0 and l as 1.
    int s=0,l=1;
    //We will increase l until arr[l] exceeds key to be searched.
    while(arr[l]<val){
        s=l;
        l=2*l;
    }
    //Now calling Simple Binary Search on range s to l.
    return binary_search(arr,s,l,val);
}