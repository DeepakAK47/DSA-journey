// Push all the zeroes to the end 
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[10] = {1, 2, 0, 65, 0, 2, 0, 4, 6, 0};

    for (int i = 0; i < 10; i++) {
        bool flag = true;
        for (int j = 1; j < 10 - i; j++) {
            if (arr[j] == 0 && arr[j + 1] != 0) {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
            if (flag==true) break;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
return 0;
}