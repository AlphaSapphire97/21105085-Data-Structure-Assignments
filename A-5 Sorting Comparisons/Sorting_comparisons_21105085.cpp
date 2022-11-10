//ADITYA KANSAL
//SID-21105085
        
//QUESTION:
//Compare Bubble sort and Selection sort based on the following:
//1. Number of comparisons
//2. Number of swaps
//3. Inplace and Outplace implementations


//ANSWER

#include <iostream>              
using namespace std;

//function to implement bubble sort algorithm
void bubble_sort(int array[], int n) {
    int si = 0, j = 1, ei = n - 1;
    int swaps = 0;
    int comps = 0;
    while (ei > 0) {
        while (j <= ei) {
            if (array[si] > array[j]) { swap(array[si], array[j]); swaps++; }
            si++, j++;
            comps++;
        }
        ei--;
        si = 0, j = 1;
    }
    cout << " Number of Swaps :" << swaps << endl;
    cout << " Number of Comparisons :" << comps << endl;
    cout << " [Using Inplace Sorting Algorithm]" << endl;
}

//Function to return the index of minimum value in the array
int min_ind(int array[], int si, int ei) {
    //Initialising minimum value as first element of array
    int m = array[si];             //m=minimum value in array
    int mini_ind = si;           //mini_ind=index of minimum value
    for (int i = si; i <= ei; i++) {
        int mini_prev = m;
        m = min(m, array[i]);
        if (m < mini_prev) { mini_ind = i; }
    }
    return mini_ind;
}

//function to implement selection-sort algorithm
void selection_sort(int array[], int n) {
    //si=starting index
    //ei=ending index
    int si = 0, ei = n - 1;
    int swaps = 0;
    int comps = 0;
    while (si < ei) {
        int mi = min_ind(array, si, ei);  //mi=index holding minimum value
        comps = comps + (ei - si + 1);
        if (si != mi) {
            swap(array[si], array[mi]);
            swaps++;
        }
        si++;
    }
    cout << " Number of Swaps :" << swaps << endl;
    cout << " Number of COMPARISON :" << comps << endl;
    cout << " [Using Inplace Sorting Algorithm]" << endl;
}

//Function to print the array
void print_fun(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    //n=number of elements in the array
    int n;
    //taking number of elements as input from the user
    cout << "Enter number of elements in array:";
    cin >> n;
    //array of size n
    int arr1[n]; 
    int arr2[n];
    //taking array as input from the user
    cout << "Enter elements of array:";
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        arr1[i] = a;
        arr2[i] = a; 
    }
    //printing array before sorting
    cout << "\nARRAY before sorting:";
    print_fun(arr1, n);
    cout << endl;
    //sorting array using bubble sort and printing it
    cout << "BUBBLE SORT" << endl;
    bubble_sort(arr1, n);
    cout << " . ARRAY After Sorting Using Bubble Sorting:";
    print_fun(arr1, n);
    cout << endl;
    //sorting array using insertion sort and printing it
    cout << "SELECTION SORT" << endl;
    selection_sort(arr2, n);
    cout << " . ARRAY After Sorting Using Selection Sorting:";
    print_fun(arr2, n);
}
/*

BONUS QUESTION

Time Complexity Of Bubble Sort
   We can see that there are two while loops that will be executed from the BUBBLE SORT code above.
   First while loop will run n-1 times and second while loop will run n-2 times and so on till 1 time.
   Time Complexity=(n-1)+(n-2)+(n-3)....+2+1=(n-1)(n)/2
                  =O(n^2)

Time Complexity Of Selection Sort
   Finding the minimal element from the array is the key time-consuming task in selection sort. 
   To locate the minimal element, we must search over every element of the array.
    With reference to the above code of SELECTION SORT,first we will
    search for minimum element in array of size n,then in the same array of size n-1,and so on till array of size 1.
    Time Complexity=(n)+(n-1)+(n-2)...1=(n)(n+1)/2
                   =O(n^2)


ADITYA KANSAL
21105085

*/