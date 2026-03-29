// Matrix multiplication
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of the rows and cols of the first matrix :";
    cin>>a>>b;
    cout<<"Enter the entries of the first matrix : ";
    int arr[a][b];
    for(int i =0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is look like as : "<<endl;
    for(int i =0;i<a;i++){
        for(int j =0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int c,d;
    cout<<"Enter the number of the rows and the cols of the second matrix :";
    cin>>c>>d;
    cout<<"Enter the entries the entries of the second martrix :";
    int brr[c][d];
    for(int i=0;i<c;i++){
        for(int j =0;j<d;j++){
            cin>>brr[i][j];
        }
    }
    cout<<"The second matrix is look like as : "<<endl;
    for(int i =0;i<c;i++){
        for(int j =0;j<d;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    int res[a][d];
    if(b==c){
        for(int i =0;i<a;i++){
            for(int j =0;j<d;j++){
                res[i][j] = 0;
                for(int k=0;k<b;k++){
                    res[i][j] = res[i][j] + arr[i][k]*brr[k][j];   // This is the soul part of this question.
                }
            }
        }
    }
        else{
            cout<<"Matrix multiplication is not possible";
        }
        cout<<"The multiplication of the arr and brr matrix is : "<<endl;
        for(int i = 0;i<a;i++){
            for(int j = 0;j<d;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}


