// UnrealCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

void PlayGameAtDiff(int difficulty) {
    std::cout << "Youre a hacker or whatever breaking into a level " << difficulty << " server room\n";
    std::cout << "Your superhacker 2000 tells you the following information...\n";

    srand(time(NULL));
    const int a = rand() % difficulty + 1;
    const int b = rand() % difficulty + 1;
    const int c = rand() % difficulty + 1;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << std::endl;
    std::cout << "+ There are three numbers in the given code\n";
    std::cout << "+ The codes multiply to give " << product << std::endl;
    std::cout << "+ The codes add up to give " << sum << std::endl;

    std::cout << std::endl;
    std::cout << "Enter the three code numbers followed by x\n";
    std::cout << std::endl;

    int answer;
    int trialSum = 0;
    int trialProduct = 0;

    while (std::cin >> answer) {
        trialSum += answer;
        trialProduct *= answer;
    }

    std::cout << std::endl;
    if (trialSum == sum && trialProduct == product) {
        std::cout << "Congratulations, you win!";
    }
    else {
        std::cout << "Wrong, you guess is incorrect you therefore LOSE, GOOD DAY SIR!\n";
    }
    std::cout << std::endl;
}

int main(){
    int difficulty = 2;
    int maxDifficulty = 10;
    while (difficulty <= maxDifficulty) {
        PlayGameAtDiff(difficulty);
        std::cin.clear();
        std::cin.ignore();
        ++difficulty;
    }
    std::cout << "Wow - such hacker!\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
