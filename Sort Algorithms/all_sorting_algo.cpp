#include <iostream>
using namespace std;

#define size 20

int a[size], n, i, j;
void getValues(){
    cout << "How many numbers do you want: ";
    cin >> n;

    cout << "Enter the numbers: " << "\n";
    for(i = 0; i < n; i++){
        cin >> a[i];
    } 
}

void displayNumbers(){
    for(i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

void bubble(){
    for(i = 0; i < n - 1; i++){
        for(j=0; j < n - 1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

void selection(){
    for (i = 0; i < n - 1; i++){
        int minj = i;

        for(j = i + 1; j < n; j++){
            if(a[minj] > a[j]){
                minj = j;
            }
        }
        if(minj != i){
            swap(a[i], a[minj]);
        }
    }
}

void insertion(){
    //Assuming the first number is already sorted
    for (i = 1; i < n; i++){
        int key = a[i];
        j = i -1;

        while (j >= 0 && a[j] > key)
        {
            a[j+1]= a[j]; 
            j--;
        }

        a[j+1] = key;
        
    }
}

int main(){
    getValues();
    insertion();
    displayNumbers();
}