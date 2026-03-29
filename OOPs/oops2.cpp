// Use of the getter and the setter function
#include<iostream>
using namespace std;
class player{
private:
int score;
int health;
public:
// setter function
void setScore(int s){
    score = s;
}
void setHealth(int h){
    health = h;
}
// getter function
int getScore(){
    return score;
}
int getHealth(){
    return health;
}
};
int main(){
    // defining object
    player deepak;
    deepak.setScore(10);
    deepak.setHealth(100);
    cout<<deepak.getScore()<<endl; 
    cout<<deepak.getHealth()<<endl;
    return 0;
}