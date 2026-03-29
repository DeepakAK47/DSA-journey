// Printing spiral matrix
// 1 2 3 4 5 
// 6 7 8 9 10
// 11 12 13 14 15 
// 16 17 18 19 20

// output --> 1 2 3 4 5 10 15 20 19 18 17 16 11 6 7 8 9 14 13 12

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of the rows and cols : ";
    cin>>a>>b;
    int arr[a][b];
    cout<<"Enter the entries of the matrix : ";
    for(int i =0;i<a;i++){
        for(int j =0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Our matrix is : "<<endl;
    for(int i =0;i<a;i++){
        for(int j =0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int minr = 0;
    int maxr = a-1;
    int minc = 0;
    int maxc = b-1;
    int count = 0;
    while(maxr>=minr && maxc>=minc){
        for(int j = minc;j<=maxc;j++){
            if(count<(a*b)){
            cout<<arr[minr][j]<<" ";
            count++;
        }
    }
        minr++;
        for(int i = minr;i<=maxr;i++){
            if(count<(a*b)){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
    }
        maxc--;
        for(int j=maxc;j>=minc;j--){
            if(count<(a*b)){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
    }
        maxr--;
        for(int i=maxr;i>=minr;i--){
            if(count<(a*b)){
            cout<<arr[i][minc]<<" ";
            count++;
        }
    }
        minc++;
    }
    return 0;
}

