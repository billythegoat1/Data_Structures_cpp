#include <iostream>
using namespace std;

//To capture the values of the array and the length of it
void merge_sort(int a[], int length);

//To divide the array into smaller and smaller array portions
void merge_sort_recursion(int a[], int l, int r);

//To put together the last two sorted arrays
void merge_sorted_arrays(int a[], int l, int m, int r);

int main(){
    int array[] = {9, 4, 8, 1, 7, 0, 3, 2, 5, 6};
    int length = 10;

    //The array is already sorted and we just want to print it out
    merge_sort(array, length);

    for (int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}

void merge_sort(int a[], int length){
    //Start to divide the array into smaller portions
    merge_sort_recursion(a, 0, length - 1);
}

void merge_sort_recursion(int a[], int l, int r){
    if(l < r){
        int m = (l + r) / 2;

        //Left Part of the array
        merge_sort_recursion(a, l, m);

        //Right Part of the array
        merge_sort_recursion(a, m + 1, r);

        //Merge the two arrays
        merge_sorted_arrays(a, l, m, r);
    }
}

void merge_sorted_arrays(int a[], int l, int m, int r){
    int left_length = m - l + 1;
    int right_length = r - m;

    //Define a temporary that will hold the left&right part values
    int temp_left[left_length];
    int temp_right[right_length];

    int i, j, k;

    for (i = 0; i < left_length; i++){
        //From the left to the middle
        temp_left[i] = a[l + i];
    }
    for (i = 0; i < right_length; i++){
        //From the middle to the right
        temp_right[i] = a[m + 1 + i];
    }

    //Merge the two sub arrays
    //k for the final array
    //i & j are for the two arrays

    //Example:    i
    // temp_left: 4, 9, 12
    //
    //            j
    //temp_right: 5, 8, 14
    //
    //            k
    //         a: 4
    for (i = 0, j = 0, k = l; k <= r; k++){
        if((i < left_length) &&
            (j >= right_length || temp_left[i] <= temp_right[j])){
                a[k] = temp_left[i];
                i++;
            }else{
                a[k] = temp_right[j];
                j++;
            }
    }
}