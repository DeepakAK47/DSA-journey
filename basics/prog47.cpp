#include<iostream>
using namespace std;
int Area(int x){
    float area = 3.14*x*x;
    return area;
}
int main(){
    int r;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
   cout<<Area(r);
    return 0;
}