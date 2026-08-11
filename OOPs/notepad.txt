Q. Explain OOPs.
ANS. Object Oriented Programming is a methodology or paradiagram to design a program using class and Objects,
These are the concepts of the OOPs : 
1. Data Abstraction ==> Data hiding
2. Data Encapsulation ==> placing multiple unit in single place like as in class
3. Inheritance ==>Aquiring properties from another class
4. Polymorphism

Q. Explain OOPs and Procedural Programming?
ANS. ✅ 1. Procedural Programming (Procedure-Oriented Programming)
Procedural programming follows a step-by-step approach.
The program is divided into functions (procedures), and the main focus is on what to do and how to do it.
Key Features
Program is divided into functions.
Focus is on functions rather than data.
Data is usually global, so functions can access/modify it easily.
Execution happens in a top-to-bottom flow.
Easier for small programs.

✅ 2. Object-Oriented Programming (OOPs)
OOP focuses on objects and data, not just functions.
The program is organized around classes and objects, and the main focus is on data security, reusability, and modularity.
Key Features
Uses classes and objects.
Focus is on data rather than functions.
Data is protected using access modifiers like private, public, protected.
Supports four main pillars:
1. Data Abstraction
2. Data Encapsulation
3. Inheritance
4. Polymorphism
More secure and scalable.

Q. Explain class and object?
ANS. Class ==> User define datatype
Oject ==> It is an instance of the class.

Q. Explain polymorphism.
ANS. ✅ What is Polymorphism?
Polymorphism means one thing having many forms.
In OOP, it allows the same function name to behave differently depending on the situation.
Example:
A single word "run" means different things for a human, a program, or a machine.
Similarly, in programming, the same function can work differently based on input or object type.

// Note ==> Class is blueprint

Q. Expalin access modifier in OOPs.
ANS. public ==> We can excess this outside the class
     private ==> We can not excess this outside the class
     protected ==>We can not excess this outside the class

// Note ==> OOPs say that make data membera private.     

// Note ==> We can print the value of int,char,float etc by return thier values but we can not print directly the value of object after return it.


###
Static allocation and dynamic allocation


Q. Define stack and heap memory.
ANS. Stack memory is a special region of RAM where:
All local variables inside functions are stored
Function calls and return addresses are stored
Memory is allocated automatically and freed automatically

⭐ Key Points:
Very fast
Fixed size
Stores: local variables, function parameters
Memory is cleared when the function exits

✅ Heap Memory
Heap memory is a region of RAM used for:
Dynamic memory allocation (you decide how much to allocate at runtime)
Objects created using new, malloc(), etc.

⭐ Key Points:
Slower than stack
Flexible size
You must free/delete memory manually (in C/C++)
Used for long-living data

Q. Explain compile time run time?
ANS. ✅ Compile Time

Compile time is the time when your source code is converted into machine code by the compiler.
⭐ What happens at compile time?
Syntax is checked
Type checking happens
Errors like missing semicolon, wrong variable type, undefined variable are detected
The compiler converts code into an executable file

✅ Run Time
Run time is the time when your program is actually executed on the computer.
⭐ What happens at run time?
Memory is allocated (stack/heap)
Input/output operations happen
Loops and logic are executed
Program interacts with user

Q. Explain static and dynamic allocation?
ANS. ✅ Static Memory Allocation
Static allocation means memory is fixed at compile time.
⭐ Key Points:
Memory size is decided before program runs
Memory is taken from stack (usually)
Faster allocation
Size cannot change during execution

✅ Dynamic Memory Allocation
Dynamic allocation means memory is decided at run time.
⭐ Key Points:
Memory size is decided while program is running
Memory is taken from heap
You can increase/decrease memory
Must be freed manually in languages like C/C++

//Note - player *urvi = new player
//  then (*urvi) ===  urvi->
// Here urvi-> It retrieve the data from object.


### Constructors



Q. Define constructor.
ANS. A constructor is a special function in object-oriented programming (OOP) that is automatically called when an object is created.
A constructor is a special method of a class that initializes the newly created object by assigning initial values to its data members.
⭐ Key Points
It has the same name as the class (in languages like C++, Java).
It has no return type, not even void.
It runs automatically when an object is created.
It is used to initialize variables, allocate memory, or run setup code.


Q. What are the different types of constructor?
ANS. 
// Note -> Constructors are very similar as functions.
// Note -> When we initialize an object then constructor will call automatically

Q. Define destructor.
ANS. A destructor is a special function in object-oriented programming that is automatically called when an object is destroyed.
A destructor is a special method of a class that cleans up resources (memory, files, connections, etc.) before an object is deleted from memory.
⭐ Key Points

Destructor name is the same as the class, but with a tilde ~ in C++.
No return type and no parameters.
Called automatically when:
The object goes out of scope.
delete is used for dynamically allocated objects.
Used for cleanup tasks.

Q. Explain shallow copy,deep copy,copy constuctor.
ANS.✅ 1. Shallow Copy
A shallow copy copies the values of data members, but if the class has pointers, it only copies the address, not the actual data.
👉 Meaning:
Both objects point to the same memory location.
Changing one object will affect the other.

✅ 2. Deep Copy
A deep copy creates a new copy of the actual data, not just the pointer.
👉 Meaning:
Both objects have separate memory.
Changing one object does NOT affect the other.

✅ 3. Copy Constructor
A copy constructor is a constructor that creates a new object by copying another existing object.
// Note ==> Copy constructor is always call by reference.



###(Static member)


Q. Define static member.
ANS. They are same for all objects and it do not belongs to object. It directly belongs to class.

Q. Define scope variable.
ANS. A variable’s scope means the region of a program where the variable can be accessed or used.

Q. Exlain the Scope resolution operator.
ANS. ✅ :: is called the Scope Resolution Operator in C++.
int x = 10;   // global

void func() {
    int x = 20;   // local
    cout << ::x;  // prints global x → 10
}
// Note --> x:: this is an invalid syntax here.



###(Initialization of List)

Q. What is the main use of constructor?
ANS. for initializing value


###(Function Overloading) Polymorphism


Q. Explain function overloading.
ANS. Creating function with same name but different paramenters. 

Q. Explain double datatype.
ANS.  ⭐ Key Features of double
Uses 8 bytes (64 bits) of memory.
Can store decimal numbers like 3.14, 99.9999, 0.00000123.
Has double precision, meaning it is more accurate than float.
Range is much larger than float.


###(Inheritance)

// Note --> private neither inheritance nor accessed
// Private ==> can be inheritance but not accessed  


###(Diamond Problem) 


Q. Explain Diamond problem.
ANS. The Diamond Problem happens in multiple inheritance when a class inherits from two parent classes that share a common base class.
This creates ambiguity because the derived class receives two copies of the base class.
    A
   / \
  B   C
   \ /
    D
If you try to access something from class A, the compiler gets confused:
Should it use the A from B → A path?
Or the A from C → A path?
Solution==> Use the keyword virtual when inheriting from the top base class.
#include <iostream>
using namespace std;

class A {
public:
    int x;
    A() { x = 10; }
};

class B : virtual public A { };
class C : virtual public A { };

class D : public B, public C { };

int main() {
    D obj;
    cout << obj.x;   // No ambiguity now
    return 0;
}
⭐ Why this works?

Because:
virtual public A
virtual public A
forces the compiler to keep only one copy of class A inside class D.
So class D has one shared A, not two.

🔑 Key Point
👉 Virtual inheritance removes duplicate copies of the base class.
👉 It prevents ambiguity and solves the diamond problem.

Q. Explain polymorphism in simple.
ANS. Same function but differnt uses like in calculators.


###(Function Overriding && Function overriding) :


✅ Function Overloading (Compile-time Polymorphism)
Same function name, different parameters, in the SAME class.
✔ Meaning
When a class has multiple functions with the same name but
different number of parameters
or different types of parameters
→ It is called function overloading.

When a child class gives its own definition of a function that is already present in the parent class, it is called function overriding.
class Parent {
public:
    void show() {
        cout << "Parent show";
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child show";
    }
};



###(Virtual Functions)



✅ What is a Virtual Function?
A virtual function is a function in the base (parent) class that you want to override in the child class, and you want C++ to decide at run-time which function to call.
👉 Virtual functions allow run-time polymorphism.



###(Abstraction Class)


// REvisit whole last lecture


