// WAP to remove all the elment present at the even index consider the 0 based index
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>&q2){
    int size2 = q2.size();
    for(int i=0;i<size2;i++){
        int x = q2.front();
        cout<<x<<" ";
        q2.pop();
        q2.push(x);
    }
}
int main(){
    queue<int>q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q1.push(60);
    int size1 = q1.size();
    for(int i=0;i<size1;i++){
        if(i%2==0){
            q1.pop();
        }
        else{
            q1.push(q1.front());
            q1.pop();
        }
    }
    display(q1);
    return 0;
}

// Note -> First find the size of queue then solve this