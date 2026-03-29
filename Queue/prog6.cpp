// doubt
// WAP to implement queue data structure using vector
#include<iostream>
#include<vector>
using namespace std;
class queue{
    public:
    vector<int>v;
    int f;
    int b;
    queue(){
        f = 0;
        b = 0;
    }
    // defining different function of the vector
    // push function
    int push(int val){
        v.push_back(val);
        b++;
    }
    // pop function
    void pop(){
        if(b-f==0){
            cout<<"vector is empty";
        }
        else{
            v.pop_back();
        }
        cout<<endl;
    }
    // front function
    void front(){
        if(b-f==0){
            cout<<"Vector is empty";
        }
        else{
            cout<<v[b-1];
        }
        cout<<endl;
    }
    // back
};
int main(){
    queue q;
    q.push();
    return 0;
}