//(*)
#include<iostream>
using namespace std;
int main(){
    int x =  5;
    int* ptr1 = &x;
    int** ptr2 = &ptr1; 
    cout<<x<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2;
    return 0;
}

// You’re seeing int** ptr2 because it’s a pointer-to-pointer. ptr1 already holds the address of x (int*). To store the address of ptr1, you need a variable whose type is “pointer to an int pointer,” written int**. Dereferencing once (*ptr2) gives you ptr1, and dereferencing twice (**ptr2) reaches x. This pattern shows two levels of indirection; it’s useful when you need to modify a pointer itself (e.g., dynamic allocation helpers, linked-list insertions, or passing pointers by reference).