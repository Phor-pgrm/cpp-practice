#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int constant = rand();
    int guessIt = constant % 100 + 1;
    int guessed;
    int n = 4;
    cout << "Guess me from 1 to 100! You have 5 tries! Goodluck!" << endl;
    cin >> guessed;
    for (int i = 0; i < n; ++i)
    {
        if (guessed == guessIt)
        {
            cout << "You got it right!\n";
            break;
        }
        else if (guessed < guessIt)
        {
            cout << "Try Higher!\n";
            cin >> guessed;
        }
        else if (guessed > guessIt)
        {
            cout << "Try Lower!\n";
            cin >> guessed;
        }
        else
        {
            cout << "You got it wrong! Try again!";
            cin >> guessed;
        }
    }
    cout << "The correct number was " << guessIt << "!";
    return 0;
}