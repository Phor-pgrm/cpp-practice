#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

std::vector<std::string> coordsInitialization(int a, int rows, int cols, std::string numbers, std::string letters, std::vector<std::string> gameCoords);
void gridInitialization(int rows, int cols, std::string letters, std::string numbers, std::vector<std::vector<std::string>> &gameGrid);
void actionMove(int player, int *turn, int a, int rows, int cols, std::string letters, std::string numbers, std::vector<std::string> gameCoords, std::vector<std::vector<std::string>> &gameGrid);
bool winCheck(int player, int turn, int rows, int cols, std::vector<std::vector<std::string>> gameGrid);

int main() {
int rows = 3, cols = 3; //custom grid sizes
std::vector<std::vector<std::string>> gameGrid(rows, std::vector<std::string>(cols));
std::vector<std::vector<std::string>> gameMove(rows, std::vector<std::string>(cols));
std::vector<std::string> gameCoords(rows * cols);
std::string letters = "abcdefghijklmnopqrstuvwxyz";
std::string numbers = "123456789";
std::string move;
int a = 0;
gameCoords = coordsInitialization(a, rows, cols, numbers, letters, gameCoords);

gridInitialization(rows, cols, letters, numbers, gameGrid);

int turn = 0;
bool isGameDone = false;
char repeat;
do {
int player = (turn % 2) + 1;
actionMove(player, &turn, a, rows, cols, letters, numbers, gameCoords, gameGrid);

isGameDone = winCheck(player, turn, rows, cols, gameGrid);

turn++;

if (isGameDone) {
    std::cout << std::endl << "Would you like to play again? ";
    std::cin >> repeat;
    if (repeat == 'y' || repeat == 'Y') {
        isGameDone = false;
        std::cout << "Have fun!" << std::endl;
        //resets game
        gridInitialization(rows, cols, letters, numbers, gameGrid);
        turn = 0;
    } else if (repeat == 'n' || repeat == 'N')
    std::cout << "Thank you for playing!";
}

} while (!isGameDone);

    return 0;
}

std::vector<std::string> coordsInitialization(int a, int rows, int cols, std::string numbers, std::string letters, std::vector<std::string> gameCoords) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            gameCoords[a] = std::string(1, letters[j]) + numbers[i];
            a++;
        }
    }
    return gameCoords;
}

void gridInitialization(int rows, int cols, std::string letters, std::string numbers, std::vector<std::vector<std::string>> &gameGrid) {
for (int i = 0; i < cols; i++) {
    std::cout << std::setw(5) << letters[i];
} std::cout << std::endl;

for (int i = 0; i < rows; i++) {
    std::cout << numbers[i] << " ";
        for (int j = 0; j < cols; j++) {
            gameGrid[i][j] = "|   |";
            std::cout << gameGrid[i][j];
        }
        std::cout << std::endl;
    }
}

void actionMove(int player, int *turn, int a, int rows, int cols, std::string letters, std::string numbers, std::vector<std::string> gameCoords, std::vector<std::vector<std::string>> &gameGrid) {
std::string move;
std::cout << "Player " << player << " turn" << std::endl;
std::cout << "Move: ";
std::getline(std::cin >> std::ws, move);
bool isInCoords = false;

    //out of bounds check
    for (int i = 0; i < gameCoords.size(); i++) {
        if (move == gameCoords[i]) {
        isInCoords = true;
        break;
        } else {
        isInCoords = false;
        }
    }
    if (!isInCoords) {
        std::cout << "Invalid move" << std::endl;
        (*turn)--;
    }

    //used tile check
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (move == gameCoords[a] && gameGrid[i][j] != "|   |") {
            std::cout << "Invalid move." << std::endl;
            (*turn)--;
            }
            a++;
        }
        
    }
    a = 0;
    //Column coordinates display
    for (int i = 0; i < cols; i++) {
        std::cout << std::setw(5) << letters[i];
    } std::cout << std::endl;
    //row coordinates display
    for (int i = 0; i < rows; i++) {
        std::cout << numbers[i] << " ";
        //grid display and move initialization
        for (int j = 0; j < cols; j++) {
            if (move == gameCoords[a] && gameGrid[i][j] == "|   |") {
                gameGrid[i][j] = (player == 1 ? "| X |" : "| O |");
            }
            std::cout << gameGrid[i][j];
            a++;
        }
        std::cout << std::endl;
    }
}

bool winCheck(int player, int turn, int rows, int cols, std::vector<std::vector<std::string>> gameGrid) {
bool win = false;
    //row win
    for (int i = 0; i < cols; i++) {
        if (gameGrid[i][0] == gameGrid[i][1] && gameGrid[i][1] == gameGrid[i][2] && gameGrid[i][2] != "|   |"){
        std::cout << "Player " << player << " is the winner!";
        win = true;
        }
    } 
    //column win
    for (int i = 0; i < cols; i++) {
        if (gameGrid[0][i] == gameGrid[1][i] && gameGrid[1][i] == gameGrid[2][i] && gameGrid[2][i] != "|   |"){
        std::cout << "Player " << player << " is the winner!";
        win = true;
        }
    }
    //diagonal win
    if (gameGrid[0][0] == gameGrid[1][1] && gameGrid[1][1] == gameGrid[2][2] && gameGrid[0][0] != "|   |") {
        std::cout << "Player " << player << " is the winner!";
        win = true;
    }
    if (gameGrid[0][2] == gameGrid[1][1] && gameGrid[1][1] == gameGrid[2][0] && gameGrid[0][2] != "|   |") {
        std::cout << "Player " << player << " is the winner!";
        win = true;
    }

    if (turn > 9) {
        std::cout << "It's a tie";
        win = true;
    }

    return win;
}
