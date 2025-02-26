#include <iostream>
using namespace std;

#define size 20

//Declaring global variables
int array1[size], n, i, target;

//Getting the values from the user
void getValues(){
    cout << "How many Numbers do you want to enter: ";
    cin >>  n;

    cout << "Enter the values: " << "\n";
    for(i = 0; i < n; i++){
        cin >> array1[i];
    }
}

void linearSearch(){
    for (i = 0; i < n; i++){
        if(target == array1[i]){
            cout << "Number found at position: " << i+1;
        }
    }
}

int main(){
    getValues();
    cout << "Which number are you looking for: ";
    cin >> target;
    linearSearch();
}