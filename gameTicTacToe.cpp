#include <iostream>
#include <vector>

int rows = 3, cols = 3;
std::vector<std::vector<std::string>> gameGrid(rows, std::vector<std::string>(cols));

void moveCoords(int);
void gameMove(int*);
bool checkWin(int*);

int main() {
for (int i = 0; i < gameGrid.size(); i++) {
    for (int j = 0; j < gameGrid[i].size(); j++){
        if (gameGrid[i][j] == "") {
            gameGrid[i][j] = "|   |";
        }
        std::cout << gameGrid[i][j] << " ";
    }
    std::cout << '\n';
}
int turnCount = 1;
int* turnptr = &turnCount;
bool isGameDone = false;

do {
int actionRow, actionCol;
turnCount++;

int player = (*turnptr) % 2;

    std::cout << "Player " << (player + 1) << " turn\n";

    gameMove(&turnCount);
    
    isGameDone = checkWin(&turnCount);

} while (!isGameDone);

int winner = (*turnptr) % 2;

if (*turnptr > 9) {
    std::cout << "Tie\n";
} else
std::cout << "Winner is Player " << (winner + 1);

    return 0;
}


void gameMove(int* turn) {
    int turn1 = *turn % 2;
    int actionRow, actionCol;

    std::cout << "Row: ";
    std::cin >> actionRow;
    std::cout << "Column: ";
    std::cin >> actionCol;

    if (actionRow < 1 || actionRow > rows || actionCol < 1 || actionCol > cols) {
        std::cout << "Invalid coordinates. Try again.\n";
    
        --(*turn);
    } else {
        int i = actionRow - 1;
        int j = actionCol - 1;
        if (gameGrid[i][j] == "|   |") {
            if (turn1 == 0)
                gameGrid[i][j] = "| X |";
            else
                gameGrid[i][j] = "| O |";
        } else {
            std::cout << "Cell already occupied. Try again.\n";
            --(*turn);
        }
    }
    for (int r = 0; r < gameGrid.size(); r++) {
        for (int c = 0; c < gameGrid[r].size(); c++) {
            std::cout << gameGrid[r][c] << " ";
        }
        std::cout << '\n';
    }
}

bool checkWin(int* turn) {
    bool win = false;
    
    for (int i = 0; i < rows; i++) {
        if (gameGrid[i][0] == gameGrid[i][1] && gameGrid[i][1] == gameGrid[i][2] && gameGrid[i][0] != "|   |") {
            win = true;
        }
    }
    
    for (int j = 0; j < cols; j++) {
        if (gameGrid[0][j] == gameGrid[1][j] && gameGrid[1][j] == gameGrid[2][j] && gameGrid[0][j] != "|   |") {
            win = true;
        }
    }
    
    if (gameGrid[0][0] == gameGrid[1][1] && gameGrid[1][1] == gameGrid[2][2] && gameGrid[0][0] != "|   |") {
        win = true;
    }
    if (gameGrid[0][2] == gameGrid[1][1] && gameGrid[1][1] == gameGrid[2][0] && gameGrid[0][2] != "|   |") {
        win = true;
    }
    
    if (!win && *turn > 9) {
        return true;
    }
    
    return win;
}