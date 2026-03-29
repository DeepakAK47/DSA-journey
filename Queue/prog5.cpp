//(***)
//WAP to implemnet queue using array
#include<iostream>
using namespace std;
// User define data structure
class queue{
    public:
    int arr[6];
    int f;
    int b; 
// Constructor
queue(){
    f = 0;
    b = 0;
}
//   ----> Defining different functions of queue

// Push function
void push(int val){
    if(b==6){
        cout<<"queue is overfull";
        return; // This is the most important line
    }
    else{
        arr[b] = val;
        b++;
    }
}

// pop function
void pop(){
    if(b-f==0){  // This is the most important line of the code  here
        cout<<"Array is underflow";
        return;   // Note --> Here return means terminate this condition immediately & we can not use return -1 here because it is an void function.
    }
    else{
        f++;
    }
}
// front funtion
void front(){
    if(b-f==0){
        cout<<"Queue is empty";
        return;
    }
    else{
        cout<<arr[f];
    }
    cout<<endl;
}

// // back function
void back(){
    if(b-f==0){
        cout<<"Queue is empty";
        return ;    // Note --> We can not use return 0 here because it is an int function and int function have to return some integral value
    }
    else{
        cout<<arr[b-1];
    }
    cout<<endl;
}
// empty function
void empty(){
    if(b-f==0){
        cout<<"Queue is empty";
    }
    else{
        cout<<"Queue is not empty";
    }
    cout<<endl;
}
// Display function
void display(){
    for(int i=f;i<b;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};
int main(){
    queue q;    // This is the user define data structure
    q.push(10);
    q.display();
    q.push(20);
    q.display();
    q.front();
    q.back();
    q.pop();
    q.display();
    q.push(50);
    q.display();
    q.empty();
    q.push(100);
    q.display();
    q.push(200);
    q.display();
    q.push(300);
    q.display();
    q.push(400);
    q.display();
    return 0;
}