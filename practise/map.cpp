#include <iostream> 
#include <map> 
  
int main() 
{ 
  // Create a map of strings to integers 
map<string, int> map; 
  
  // Insert some values into the map 
  map["one"] = 1; 
  map["two"] = 2; 
  map["three"] = 3; 
  
  // Print the size of the map 
  std::cout << "Size of map: " << map.size() << std::endl; 
  
  return 0; 
} 