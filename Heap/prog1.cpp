// max heap
// basic of priority_queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
priority_queue<int>hp;  // It is max_heap by default
hp.push(10);
hp.push(20);
hp.push(30);
hp.push(-10);
hp.push(-20);
hp.push(-30);
cout<<hp.top()<<endl;
hp.pop();
cout<<hp.top()<<endl;
return 0;
}