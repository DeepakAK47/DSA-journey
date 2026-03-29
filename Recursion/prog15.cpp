// Finding the number of the ways for reaching point A to D
// ***
#include<iostream>
using namespace std;
int maze1(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    else if(sr==er && sc==ec) return 1;
    int rightWays = maze1(sr,sc+1,er,ec);
    int downWays  = maze1(sr+1,sc,er,ec);
    return rightWays + downWays;
}
void maze2(int sr,int sc,int er,int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    maze2(sr,sc+1,er,ec,s+'R');
    maze2(sr+1,sc,er,ec,s+'D');
} 
int main(){
    cout<<maze1(1,1,3,3)<<endl;
    maze2(1,1,3,3,"");
}


// Doubt --> 1+1  ==> Done 
// ClassWork --> Solve the above problem by passing only two argumant 