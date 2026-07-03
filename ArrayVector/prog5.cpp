#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }

    cout << "The maximum value of the array is : " << max << endl;

    if(smax == INT_MIN) {
        cout << "There is no second largest value in the given array.";
    } else {
        cout << "The second largest value of the given array is : " << smax;
    }

    return 0;
}

