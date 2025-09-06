#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    srand(time(0));
    const int guessMe = rand() % 100 + 1;
    int myGuess;
    vector<int> guesses;
    cout << "Guess me from 1 to 100!\n";
    while (myGuess != guessMe)
    {
        cin >> myGuess;
        guesses.push_back(myGuess);
        if (myGuess < guessMe)
        {
            cout << "Try higher!\n";
        }
        else if (myGuess > guessMe)
        {
            cout << "Try lower!\n";
        }
        else
        {
            cout << "Congratulations you got it right! It was " << guessMe << "!\n";
            cout << "It took you " << guesses.size() << " tries!\n";
        }
    }
    return 0;
}