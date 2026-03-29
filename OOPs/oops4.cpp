// Passing class object using function
#include<iostream>
using namespace std;
class Gun{
    public:
int ammo;
int damage;
int scope;
};
class Helmet{
    public:
int hp;
int level;
};
class player{
private:
int age;
int score;
bool alive;
int health;
Gun gun;
Helmet helmet;   // add a helmet member
public:
// helmet setters/getters
void setHelmet(const Helmet &h) { helmet = h; }
Helmet getHelmet() const { return helmet; }

// setter function (store hp/level inside the helmet member)

void setHp(int hp){
    helmet.hp = hp;
}

void setLevel(int level){
    helmet.level = level;
}

void setAge(int age){
    this->age = age;
}
void setScore(int score){
    this->score = score;
}
void setAlive(bool alive){
    this->alive = alive;
}
void setHealth(int health){
    this->health = health;
}
void setGun(Gun gun){
this->gun  = gun;
}
// getter function
int getHp() const {
    return helmet.hp;
}
int getLevel() const {
    return helmet.level;
}
int getAge() const {
    return age;
}
int getScore() const {
    return score;
}
bool getAlive() const {
    return alive;
}
int getHealth() const {
    return health;
}
Gun getGun() const {
    return gun;
}
};
int addScore(const player &a, const player &b){
return a.getScore() + b.getScore();
};
const player& getMaxScore(const player &a, const player &b){
    return (a.getScore() > b.getScore()) ? a : b;
}
using namespace std;
int main(){
    // Object -> It is an instance of class
    player harsh;
    player rahul; // It will allocate compile time 
    player *urvi = new player;  // It will allocate run time

    
    Gun akm; akm.ammo = 1000; akm.damage = 1001; akm.scope = 1003;
    Gun awm; awm.ammo = 2000; awm.damage = 2001; awm.scope = 2002;
    
    Helmet deep; deep.hp = 3000; deep.level = 3001;
    Helmet deep2; deep2.hp = 30003; deep2.level = 3005;

    harsh.setAge(100);
    harsh.setScore(101);
    harsh.setAlive(true);
    harsh.setHealth(102);
    harsh.setGun(akm);
    harsh.setHelmet(deep);

    rahul.setAge(100);
    rahul.setScore(101);
    rahul.setAlive(true);
    rahul.setHealth(102);
    rahul.setGun(awm);
    rahul.setHelmet(deep2);

    // Printing values

    // Print Harsh values
    cout<<"Harsh:\n";
    cout<<harsh.getAge()<<endl;
    cout<<harsh.getScore()<<endl;
    cout<<harsh.getAlive()<<endl;
    cout<<harsh.getHealth()<<endl;


    // Print Rahul values
    cout<<"Rahul:\n";
    cout<<rahul.getAge()<<endl;
    cout<<rahul.getScore()<<endl;
    cout<<rahul.getAlive()<<endl;
    cout<<rahul.getHealth()<<endl;

    //
    cout<<addScore(harsh,rahul)<<endl;
    player sanket = getMaxScore(harsh,rahul);
    cout<<sanket.getScore()<<endl;
    cout<<sanket.getHealth()<<endl;

    // 
    urvi->setHealth(200);   // (*urvi)  === urvi->
    cout<<urvi->getHealth()<<endl;
    cout<<rahul.getLevel()<<endl;
    delete urvi;
    return 0;
}

// Note --> here harsh ans tahul are objects while urvi is pointer to object
