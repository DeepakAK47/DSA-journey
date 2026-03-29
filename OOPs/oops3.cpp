// By using function check whether the provided price is less then the given prices of book and check whether the given book is present or not
#include<iostream>
using namespace std;
class book {
private:
string name;
int price;
int noPages;
public:
// defing the setter function for assigning the value to the data members
void setName(string n){
name = n;
}
void setPrice(int p){
    price = p;
}
void setnoPages(int page){
    noPages =   page;
}

// defining the getter function for retrieving the data of the class
string getName(){
    return name;
}
int getPrice(){
    return price;
}
int getnoPages(){
    return noPages;
}
// Function for count how many number of the books are lesser tahn the given price of the book
int countBook(int price){

}
// This is the function for checking whether that particular book is present or not
bool isBookPresent(string tittle){

}
};

int main(){
    // Assigning the data to the first book
    book  first;
    first.setName("Physics");
    first.setPrice(200);
    first.setnoPages(500);
    // Assigning the data to the second book
    book  second;
    second.setName("Chemisty");
    second.setPrice(300);
    second.setnoPages(600);
    // Assigning the data to the third book
    book  third;
    third.setName("Maths");
    third.setPrice(400);
    third.setnoPages(700);
    // Printing the data of first book
    cout<<first.getName()<<endl;
    cout<<first.getPrice()<<endl;
    cout<<first.getnoPages()<<endl;
    // Printing the details of the second book
    cout<<second.getName()<<endl;
    cout<<second.getPrice()<<endl;
    cout<<second.getnoPages()<<endl;
    // Printing the detail of the third book
    cout<<third.getName()<<endl;
    cout<<third.getPrice()<<endl;
    cout<<third.getnoPages()<<endl;
    // count number of books whose price is less than the given price
    cout<<countbook(500)<<endl;
    // Function for checking whether the book is present or not
    cout<<isBookPresent("Physics");
    return 0;
}
// Note ==> Solve in future