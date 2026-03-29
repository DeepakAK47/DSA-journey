// Printing the element of the vector/Array using for each loop
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}