#include <iostream>
using namespace std;

#define size 20

int array1[size], n, i, target;

void getValues()
{
    cout << "How many numbers do you want to enter: ";
    cin >> n;

    cout << "\n"
         << "Enter your numbers (sorted): " << "\n";
    for (i = 0; i < n; i++)
    {
        cin >> array1[i];
    }
}

void display()
{
    cout << "\n"
         << "Here are your numbers: ";
    for (i = 0; i < n; i++)
    {
        cout << array1[i] << " ";
    }
    cout << "\n" << "What number are you looking for: ";
    cin >> target;
}

void binary_search(){
    int min = 0;
    int max = n-1;
    int mid;
    bool found = false;

    //As long as the min is less or equal to the max
        while(min <= max){
            mid = (max + min)/2;

            if(array1[mid] == target){
                cout << "Found at position: " << mid + 1<< "\n";
                found = true;
                break;
            }else if(target < array1[mid]){ //Look on the left side of the array
                max = mid - 1;
            }else {
                min = mid +1 ;
            }
        }      
        if(!found){
            cout << "Target not found!" << "\n";
        }
    
}

int main()
{
    getValues();
    display();
    binary_search();
}