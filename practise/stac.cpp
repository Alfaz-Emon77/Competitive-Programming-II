#include <iostream> 
#include <stack> 
using namespace std; 
int main () 
{ 
stack< int > mystack; 
// lets push and pop some values 
for (int i=0; i<5; i++) mystack.push(i); 
cout << "Popping out elements..."; 
while (!mystack.empty()) 
{ 
cout << " " << mystack.top(); 
mystack.pop(); 
} 
cout << endl; 
// changing the value of top 
    mystack.push(100); 
    mystack.top() += 1000; 
    cout << "Now top is: " << mystack.top() << endl; 
    mystack.pop(); 
  
    // not a good way to check if stack is empty 
    if(mystack.size() == 0) cout << "Stack is empty" << endl; 
    // better we do this 
    if(mystack.empty()) cout << "Stack is empty" << endl; 
  
    return 0; 
} 