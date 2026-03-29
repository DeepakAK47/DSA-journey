// WAP to find the number of the inversion
#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>&a, vector<int>&b){
    int c = 0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            c = c + (a.size()-i);
            j++;
        }
        else {
            i++;
        }
    }
    return c;
}
void mergeSort(vector<int>&a,vector<int>&b,vector<int>&v){
    int i = 0, j = 0, k = 0;
    int aSize = a.size();
    int bSize = b.size();
    // merge in ascending order
    while(i < aSize && j < bSize){
        if(a[i] <= b[j]){
            v[k++] = a[i++];
        } else {
            v[k++] = b[j++];
        }
    }
    // copy remaining from a
    while(i < aSize){
        v[k++] = a[i++];
    }
    // copy remaining from b
    while(j < bSize){
        v[k++] = b[j++];
    }
}
int merge(vector<int>&v){
    int count = 0;
    int n = v.size();
    if(n==1) return 0;
    int n1 = n/2;
    int n2 = n - n1;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int j=0;j<n2;j++){
        b[j] = v[j+n1];
    }
    // Magic
   count = count + merge(a);
    count = count + merge(b);
    // mergeSort
    count = count +inversion(a,b);
    mergeSort(a,b,v);
    return count;
}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n =  sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    cout<<"The number of the inverion in this vector is : "<<merge(v);
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    return 0;
}
// T.C ==> O(nlogn);


// Dry run : 
// Dry Run: Inversion Count using Merge SortInitial array: $v = \{5, 1, 3, 0, 4, 9, 6\}$ (Size $n=7$)Initial global count: $count = 0$1. main function call`v = {5, 1, 3, 0, 4, 9, 6}$Calls merge(v)2. merge({5, 1, 3, 0, 4, 9, 6}) (n=7)$n1 = 3$, $n2 = 4$$a = \{5, 1, 3\}$$b = \{0, 4, 9, 6\}$Calls merge(a)3. merge({5, 1, 3}) (n=3)$n1 = 1$, $n2 = 2$$a = \{5\}$$b = \{1, 3\}$Calls merge(a)3.1. merge({5}) (n=1)Base case reached. Returns.Calls merge(b)3.2. merge({1, 3}) (n=2)$n1 = 1$, $n2 = 1$$a = \{1\}$$b = \{3\}$Calls merge(a) (Base case. Returns.)Calls merge(b) (Base case. Returns.)Calls inversion({1}, {3})$a[0]=1, b[0]=3$. Since $1 \le 3$, $i++$. $i=1$.Loop ends. Returns $c=0$.$count = 0 + 0 = \mathbf{0}$.Calls mergeSort({1}, {3}, {1, 3}).$v$ becomes sorted: $\{1, 3\}$.Returns. $v$ is now $\{1, 3\}$Back in step 3: Calls inversion({5}, {1, 3})$a[0]=5, b[0]=1$. Since $5 > 1$, $c = 0 + (1-0) = 1$. $j++$. $j=1$.$a[0]=5, b[1]=3$. Since $5 > 3$, $c = 1 + (1-0) = 2$. $j++$. $j=2$.Loop ends. Returns $c=2$.$count = 0 + 2 = \mathbf{2}$.Calls mergeSort({5}, {1, 3}, {5, 1, 3}).$v$ becomes sorted: $\{1, 3, 5\}$.Returns. $v$ is now $\{1, 3, 5\}$4. merge({0, 4, 9, 6}) (n=4)$n1 = 2$, $n2 = 2$$a = \{0, 4\}$$b = \{9, 6\}$Calls merge(a)4.1. merge({0, 4}) (n=2)$n1 = 1, n2 = 1$. $a=\{0\}, b=\{4\}$.Recursive calls to merge({0}) and merge({4}) (Base cases. Return).Calls inversion({0}, {4}). Returns $c=0$. $count = 2 + 0 = 2$.Calls mergeSort({0}, {4}, {0, 4}). $v$ is $\{0, 4\}$.Returns. $v$ is now $\{0, 4\}$.Calls merge(b)4.2. merge({9, 6}) (n=2)$n1 = 1, n2 = 1$. $a=\{9\}, b=\{6\}$.Recursive calls to merge({9}) and merge({6}) (Base cases. Return).Calls inversion({9}, {6})$a[0]=9, b[0]=6$. Since $9 > 6$, $c = 0 + (1-0) = 1$. $j++$. $j=1$.Loop ends. Returns $c=1$.$count = 2 + 1 = \mathbf{3}$.Calls mergeSort({9}, {6}, {9, 6}).$v$ becomes sorted: $\{6, 9\}$.Returns. $v$ is now $\{6, 9\}$.Back in step 4: Calls inversion({0, 4}, {6, 9}).$a[0]=0, b[0]=6$. Since $0 \le 6$, $i++$. $i=1$.$a[1]=4, b[0]=6$. Since $4 \le 6$, $i++$. $i=2$.Loop ends. Returns $c=0$.$count = 3 + 0 = \mathbf{3}$.Calls mergeSort({0, 4}, {6, 9}, {0, 4, 9, 6}).$v$ becomes sorted: $\{0, 4, 6, 9\}$.Returns. $v$ is now $\{0, 4, 6, 9\}$.5. merge({5, 1, 3, 0, 4, 9, 6}) (Final Merge)Back in step 2:Sorted $a = \{1, 3, 5\}$Sorted $b = \{0, 4, 6, 9\}$Calls inversion({1, 3, 5}, {0, 4, 6, 9})$a[0]=1, b[0]=0$. Since $1 > 0$, $c = 0 + (3-0) = 3$. $j++$. $j=1$.$a[0]=1, b[1]=4$. Since $1 \le 4$, $i++$. $i=1$.$a[1]=3, b[1]=4$. Since $3 \le 4$, $i++$. $i=2$.$a[2]=5, b[1]=4$. Since $5 > 4$, $c = 3 + (3-2) = 4$. $j++$. $j=2$.$a[2]=5, b[2]=6$. Since $5 \le 6$, $i++$. $i=3$.Loop ends. Returns $c=4$.$count = 3 + 4 = \mathbf{7}$.Calls mergeSort({1, 3, 5}, {0, 4, 6, 9}, v).$v$ becomes sorted: $\{0, 1, 3, 4, 5, 6, 9\}$.Returns.6. main function (Output)The final sorted array v is printed:0 1 3 4 5 6 9The final global count is printed:The number of the inversion in this array is : 7Final ResultSorted Array: $\mathbf{\{0, 1, 3, 4, 5, 6, 9\}}$Total Inversions (count): $\mathbf{7}$(The actual inversions in the original array are: (5,1), (5,3), (5,0), (1,0), (3,0), (9,6), (5,4). Total: 7)
