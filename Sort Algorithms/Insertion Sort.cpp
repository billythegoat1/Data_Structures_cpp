#include <iostream>
using namespace std;

#define size 20

int a[size], n, i, j;

void getValues()
{
    cout << "How many values do you have: ";
    cin >> n;

    cout << "Please enter them: " << "\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void display()
{
    cout << "Sorted Array: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void insertion_sort(){
    //We consider the first element as already sorted and don't bother with it
    //i starts with the right unsorted array going rightwards
    //j starts with the left sorted array going leftwards

    for(i = 1; i < n; i++){
        //the key is the value to insert in the left sorted part
        int key = a[i];

        //j will start at the beginning of the left sorted part
        j = i - 1;

        //As long as j hasn't reached the beginning of the array, shift to the right
        while(j >= 0 && a[j] > key){
            //Shift the current value of j to j+1
            a[j+1] = a[j];
            //Decrement j
            j = j - 1;
        }

        a[j+1] = key;


    }
}

int main()
{
    getValues();
    insertion_sort();
    display();
}