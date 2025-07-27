#include <iostream>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    const unsigned int numProblems = std::stoi(input);

    if (numProblems < 1 || numProblems > 1000) return 1;

    int solvedProblems = 0;

    for (unsigned int i = 0; i < numProblems; i++) {
        std::string problemCertainty;
        std::getline(std::cin, problemCertainty);
        std::istringstream iss(problemCertainty);
        std::string token;
        int solved = 0;

        while (std::getline(iss, token, ' ')) {
            if (!token.empty()) {
                solved += std::stoi(token);
            }
        }

        if (solved > 1) {
            solvedProblems++;
        }
    }

    std::cout << solvedProblems << std::endl;

    return 0;
}
