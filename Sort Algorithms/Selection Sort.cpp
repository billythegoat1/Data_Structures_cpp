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

void selection_sort()
{
    // The outter loop is keeping track of the sorted part
    // The inner loop is in charge of finding the minimum number
    for (i = 0; i < n - 1; i++)
    {
        // i keeps track of the value to be compared
        // j's job is to find the smallest value in the unsorted part
        int tmp = 0;
        int minj = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[minj])
            {
                minj = j;
            }
        }
        if (minj != i)
        {
            // swap(a[i], a[minj]);
            tmp = a[i];
            a[i] = a[minj];
            a[minj] = tmp;
        }
    }
}

int main()
{
    getValues();
    selection_sort();
    display();
}