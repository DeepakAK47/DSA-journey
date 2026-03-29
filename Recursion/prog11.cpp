// Priting the steps of tower of hanoi problem(Take the size of the slide by the user input).

#include<iostream>
using namespace std;
void hanoi(int slide,char I,char S,char D){
if(slide==0) return;
hanoi(slide-1,I,D,S);
cout<<I<<" "<<"->"<<D<<"   ";
hanoi(slide-1,S,I,D);
}
int main(){
    int slide;
    cout<<"Enter the number of the slide : ";
    cin>>slide;
    char I,S,D;
    hanoi(slide,'I','S','D'); 
}  

// Note ->> Always pass the char in single quotes.


// Initial Setup:
// I = Initial rod (source)
// S = Spare rod (auxiliary)
// D = Destination rod (target)
// Goal: Move 3 disks from I to D using S as spare
// Dry Run: hanoi(3, 'I', 'S', 'D')
// Call 1: hanoi(3, 'I', 'S', 'D')
// slide != 0, so continue
// Step 1: hanoi(2, 'I', 'D', 'S') - Move top 2 disks from I to S
// Step 2: Print I -> D - Move bottom disk from I to D
// Step 3: hanoi(2, 'S', 'I', 'D') - Move 2 disks from S to D

// Call 2: hanoi(2, 'I', 'D', 'S')
// slide != 0, so continue
// Step 1: hanoi(1, 'I', 'S', 'D') - Move top 1 disk from I to D
// Step 2: Print I -> S - Move bottom disk from I to S
// Step 3: hanoi(1, 'D', 'I', 'S') - Move 1 disk from D to S

// Call 3: hanoi(1, 'I', 'S', 'D')
// slide != 0, so continue
// Step 1: hanoi(0, 'I', 'D', 'S') - Base case, return
// Step 2: Print I -> D ✅ Output 1
// Step 3: hanoi(0, 'S', 'I', 'D') - Base case, return



continue
// Back to Call 2: Print I -> S ✅ Output 2
// Call 4: hanoi(1, 'D', 'I', 'S')
// Step 1: hanoi(0, 'D', 'S', 'I') - Base case, return
// Step 2: Print D -> S ✅ Output 3
// Step 3: hanoi(0, 'I', 'D', 'S') - Base case, return
// Back to Call 1: Print I -> D ✅ Output 4
// Call 5: hanoi(2, 'S', 'I', 'D')
// Step 1: hanoi(1, 'S', 'D', 'I') - Move top 1 disk from S to I
// Step 2: Print S -> D - Move bottom disk from S to D
// Step 3: hanoi(1, 'I', 'S', 'D') - Move 1 disk from I to D
// Call 6: hanoi(1, 'S', 'D', 'I')
// Step 1: hanoi(0, 'S', 'I', 'D') - Base case, return
// Step 2: Print S -> I ✅ Output 5
// Step 3: hanoi(0, 'I', 'S', 'D') - Base case, return
// Back to Call 5: Print S -> D ✅ Output 6
// Call 7: hanoi(1, 'I', 'S', 'D')
// Step 1: hanoi(0, 'I', 'D', 'S') - Base case, return
// Step 2: Print I -> D ✅ Output 7
// Step 3: hanoi(0, 'S', 'I', 'D') - Base case, return
// Final Output Sequence:
// What this means:
// Move small disk from I to D
// Move medium disk from I to S
// Move small disk from D to S
// Move large disk from I to D
// Move small disk from S to I
// Move medium disk from S to D
// Move small disk from I to D
// Total moves: 7 (which equals 2³-1 = 7) ✅

// The algorithm successfully moves all 3 disks from rod I to rod D!