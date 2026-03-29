// WAP to print the first negative number of the given array
// Example : arr[] = {2,-3,4,4,-7,-1,4,-2,6} if k = 3
// Otput : {-3,-3,-7,-7,-7,-1,-2}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans;
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int k = 3;
    int p = -1;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            ans.push_back(arr[i]);
            p = i;
            break;
        }
    }
    int i = 1;
    int j = k;
    while(j<size){
        if(p>=i) ans.push_back(arr[p]);
        else{
            for(int m=p+1;m<(k+p+1);m++){
                if(arr[m]<0){
                    ans.push_back(arr[m]);
                    p = m;
                    break;
                }
            }
        }
        i++;
        j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

// Note --> Be carefull during assigning the values of indices.