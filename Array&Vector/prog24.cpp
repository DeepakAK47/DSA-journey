// merging two vector by (method-2)
#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&nums1,vector<int>&nums2){
    int n  = nums1.size();
    int m = nums2.size();
    vector<int>res(m+n);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(nums1[i]<nums2[j]){
         res[k] = nums1[i];
            i++;
        }
        else{
            res[k] = nums2[j];
            j++;
        }
        k++;
    }
    if(i==n){
        while(j<m){
            res[k] = nums2[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<n){
            res[k] = nums1[i];
            k++;
            i++;
        }
    }
    return res;
}
int main(){
    vector<int>nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(4);
    nums1.push_back(5);
    int p = nums1.size();
    cout<<"All the elements of the vector nums1 are : ";
    for(int i = 0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    vector<int>nums2;
    nums2.push_back(1);
    nums2.push_back(2);
    nums2.push_back(3);
    nums2.push_back(4);
    nums2.push_back(5);
    int q = nums2.size();
    cout<<"All the element of the vector nums2 is : ";
    for(int i = 0;i<nums2.size();i++){
        cout<<nums2[i]<<" ";
    }
    cout<<endl;
    vector<int>v = merge(nums1,nums2);
    cout<<"The required vector is : ";
    int r = p+q;
    for(int i=0;i<p+q;i++){
        cout<<v[i]<<" ";
    }    
    return 0;
}



