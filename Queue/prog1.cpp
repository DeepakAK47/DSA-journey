// WAP for queue data structure and print the front and the rear element of queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<q.size()<<" ";
    cout<<q.back()<<" "; 
    cout<<q.front()<<" ";
    return 0;
}