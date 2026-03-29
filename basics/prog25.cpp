#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of the month : ";
    cin>>n;
    switch(n){
        case 1 :
        cout<<"It is the month of January having 31 days";
        break;
         case 2 :
        cout<<"It is the month of February having 28 days";
         break;
         case 3 :
        cout<<"It is the month of March having 31 days";
         break;
         case 4 :
        cout<<"It is the month of April having 30 days";
         break;
         case 5 :
        cout<<"It is the month of May having 31 days";
         break;
         case 6 :
        cout<<"It is the month of June having 30 days";
         break;
         case 7 :
        cout<<"It is the month of July having 31 days";
         break;
         case 8 :
        cout<<"It is the month of August having 31 days";
         break;
         case 9 :
        cout<<"It is the month of September having 30 days";
         break;
         case 10 :
        cout<<"It is the month of October having 31 days";
         break;
         case 11 :
        cout<<"It is the month of November having 30 days";
         break;
         case 12 :
        cout<<"It is the month of December having 31 days";
         break;
        default :
        cout<<"It is an invalid input";
    }
    return 0;
}

// note -> Here n is same as the value of the case number.