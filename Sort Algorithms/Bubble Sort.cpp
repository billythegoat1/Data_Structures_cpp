#include <iostream>
using namespace std;
#define size 20

int a[size], n, i;

void getValues(){
    cout << "How many values do you have: ";
    cin >> n;

    cout << "Please enter them: " << "\n";
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
}
void display(){
    cout << "Sorted Array: ";
    for(i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

void bubble_sort(){
    for (i = 0; i < n - 1; i++){
        for (int j = 0; j < n-1; j++){
            int tmp = 0;

            //(a[j+1] > a[j]) for descending order

            if(a[j] > a[j+1]){
                //Swap
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main(){
    getValues();
    bubble_sort();
    display();
}