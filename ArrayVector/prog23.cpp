// Leetcode : 88    
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums1;
    vector<int>nums2;
    int a,b;
    cout<<"Enter the size of the first and second vector : ";
    cin>>a>>b;
    cout<<"Enter the entries of the vector nums1 :";
    for(int i = 0;i<a;i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    cout<<"Enter the element of the second vector : ";
    for(int i = 0;i<b;i++){
        int y;
        cin>>y;
        nums2.push_back(y);
    }

    cout<<"All the entries of the nums1 are : ";
    for(int i = 0;i<a;i++){
        cout<<nums1[i]<<" ";
    }
        cout<<endl;
    cout<<"All the elements of the second vector are : ";
    for(int i = 0;i<b;i++){
        cout<<nums2[i]<<" ";
    }
    cout<<endl;
    nums1.insert(nums1.end(),nums2.begin(),nums2.end());
    for(int i = 0;i<a+b;i++){
        cout<<nums1[i]<<" ";
    }
    for(int i = 0;i<a+b;i++){
        for(int j = i+1;j<a+b;j++){
            if(nums1[i]>nums1[j]){
                int temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
    cout<<endl;
    cout<<"Our required vector is : ";
    for(int i = 0;i<a+b;i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}