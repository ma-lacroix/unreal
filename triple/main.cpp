#include <string>
#include <iostream>

int main(){
    
    std::cout << "Hello world" << std::endl;
    
    char answer;

    while(std::tolower(answer)!='q'){
        std::cout << "enter a letter: " << std::endl;
        std::cin >> answer;
        std::cout << "You entered: \n" << answer << std::endl;

    }

    
    return 0;
}