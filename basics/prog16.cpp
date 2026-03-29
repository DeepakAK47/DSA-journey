#include<iostream>
using namespace std;
int main(){
    int CP,SP,PROFIT,LOSS;
    cout<<"Enter the Cost price of the item : ";
    cin>>CP;
    cout<<"Enter the selling price of item : ";
    cin>>SP;
    if(CP>SP){
        LOSS = CP - SP;
        cout<<"The seller has made loss by : "<<LOSS;
    }
    else if(SP>CP){
        PROFIT = SP - CP;
        cout<<"The seller has made profit by : "<< PROFIT;
    }
    else{
        cout<<"The seller has made no profit no loss";
    }
    return 0;
}