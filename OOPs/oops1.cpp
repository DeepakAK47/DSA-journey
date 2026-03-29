#include<iostream>
using namespace std;
class player{
    public :
    int score;
    int health;
    void showHealth(){
        cout<<"Health is : "<<health;
    };
};

int main(){
player amit;
amit.score = 100;
amit.health = 101;

player deepak;
deepak.score = 10;
deepak.health = 11;

// Printing the values
cout<<deepak.score<<endl;
cout<<deepak.health<<endl;
cout<<amit.score<<endl;
cout<<amit.health<<endl;
amit.showHealth();  // It is a process of calling class function
return 0;
}
// Note ==> deepak and amit are objects here.
  