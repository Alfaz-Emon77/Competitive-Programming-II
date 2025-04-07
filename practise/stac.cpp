#include <iostream> 
#include <stack> 
using namespace std; 
int main () 
{ 
stack< int >stack; 

for (int i=0; i<5; i++) stack.push(i); 
cout << "Popping out elements..."; 
while (!stack.empty()) 
{ 
cout << " " << stack.top(); 
stack.pop(); 
} 
cout << endl; 

    stack.push(100); 
    stack.top() += 1000; 
    cout << "Now top is: " << stack.top() << endl; 
    stack.pop(); 
  
    
    if(stack.size() == 0) cout << "Stack is empty" << endl; 
    
    if(stack.empty()) cout << "Stack is empty" << endl; 
  
    return 0; 
} 