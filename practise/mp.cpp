#include <iostream>
#include <map>

int main() 
{
  
    std::map<std::string, int> map;

   
    map["one"] = 1;
    map["two"] = 2;
    map["three"] = 3;
    map["four"] = 4;



    std::cout << "Size of map: " << map.size() << std::endl;

    return 0;
}
