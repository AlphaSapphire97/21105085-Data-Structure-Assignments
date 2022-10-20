
/*                         
A-1]
The space complexity of a "In-Place" sorting algorithm ranges 
between O(1) and O(logn), both included.
An in-place algorithm, as the name implies, is one that 
transforms the input "in-place" and generates the output 
in the same memory that stores the data.
A "Out-Place" sorting algorithm, on the other hand, has 
a space complexity larger than O. (logn). */

//A-2]

//Insertion Sort Using In-Place Algorithm
#include <iostream>
using namespace std;
//Creating Insertion Sort function
void insertion_sort_Inplace(int arr[],int n){
    //Initialising variables i and j
    int i=0,j=i+1;
    while(j<=n-1){
        int temp=arr[j];
        while(i>=0){
            if(arr[i]>temp){
                arr[i+1]=arr[i];
                i--;
            }
            if(i==-1){
              arr[0]=temp;break;
            }
            if(arr[i]<=temp){
              arr[i+1]=temp;break;
            }
        }
        j++;
        i=j-1;
    }
    return;
}

//Insertion Sort Using Out-Place Algorithm
void insertion_sort_Outplace(int arr[],int s,int l){
    //s=starting index
    //l=ending index
    if(s==l){
     return;
     }
    int j=s+1;
    int t=arr[j];
    while(s>=0){
        if(arr[s]>t){
            arr[s+1]=arr[s];
            s--;
        }
        if(s==-1){
          arr[0]=t;
          break;
          }
        if(arr[s]<=t){
          arr[s+1]=t;
          break;
          }
    }
    insertion_sort_Outplace(arr,s+1,l);
}
//Function to print array
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
       }
}
int main(){
    int n;
    //Taking Input array
    cout<<"ENTER NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin>>n;
    int arr[n],arr2[n];//Two array with same size and elements
    cout<<"ENTER ELEMENTS OF ARRAY (Space-Separated): ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
     }
    //copying arr to arr2
    for(int i=0;i<n;i++){
      arr2[i]=arr[i];
      }
    cout<<endl;
    cout<<"ARRAY BEFORE SORTING : ";printarr(arr,n);
    //Calling insertion sort using in-place algorithm.
    insertion_sort_Inplace(arr,n);
    cout<<endl;
    cout<<"ARRAY AFTER SORTING USING IN-PLACE ALGORITHM : ";
    //printing the array
    printarr(arr,n);
    cout<<endl;
    //calling insertiong sort using out-place algorithm.
    insertion_sort_Outplace(arr2,0,n-1);
    cout<<"ARRAY AFTER SORTING USING OUT-PLACE ALGORITHM : ";
    //printing the array
    printarr(arr,n);
    cout<<endl;

}

/*
A-3]
Though applying in-place techniques in an algorithm is challenging,
applying out-of-place techniques is simple, but does raise the 
space complexity of the algorithm.
If we want to reverse an array, for example, the in-place algorithm
will swap the first and last elements until we reach the middle 
of the array. If we want to solve the same problem using the 
out-place algorithm, however, we must create an additional array 
of the same size and copy the elements of the original array from 
the back to the front of the new array. This algorithm increases 
the space complexity to O(n) because we have created an additional
array.
Bubble sort, Selection sort, Insertion sort, and Heapsort all use 
the IN-PLACE algorithm.
NOT IN-PLACE algorithm is used in Merge Sort, Because merge sort 
requires O(n) extra space.
*/
//                       Aditya Kansal
//                       21105085
