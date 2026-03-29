// WAP to remove all the element of queue present at the even index
#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>q){
    int size1 = q.size();
    for(int i=0;i<size1;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
// Removing all odd index element
void EvenEle(queue<int>&q){
    int size2 = q.size();
    for(int i=0;i<size2;i++){
        int x = q.front();
        if(i%2==0){
            q.pop();
        }
        else{
            q.push(x);
            q.pop();
        }
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    EvenEle(q);
    display(q);
    return 0;
}