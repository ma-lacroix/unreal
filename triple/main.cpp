// Going through the basics again - silly c++ game

#include <string>
#include <time.h>
#include <random>
#include <iostream>

void CheckValues(int &solution, int &input){
    if(solution > input){
        std::cout << "You're too low! " << std::endl;
    }else{
        std::cout << "You're too high! " << std::endl;
    }
}

bool PlayGame(int &solution, int &input, int &lives){
    if(lives == 0){
        std::cout << "You lost, the right answer was: " << solution << std::endl;
        return true;
    }else if(solution!=input){
        std::cout << "Wrong guess! \n" << std::endl;
        --lives;
        CheckValues(solution,input);
        return false;
    }else{
        std::cout << "You got it! \n" << std::endl;
        return true;
    }
}

int main(){
    srand(time(NULL));
    std::cout << "Start game \n" << std::endl;
    char answer;
    int lives {3};
    int solution {rand() % 10 + 1};
    bool status {false};

    while(!status){
        int input;
        std::cout << "Pick a number between 1 and 10: \n" << std::endl;
        std::cin >> input;
        status = PlayGame(solution,input,lives);
    }

    
    return 0;
}