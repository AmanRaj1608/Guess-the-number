// A simple "Guess The Number" game made using C++

#include<bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(0));
    int guess, number, choice;
    number = (rand() % 200) + 1;
    cout << "\nI am thinking of a number! Try to guess that number (Hint: The number's between 1 and 200): ";
    cin >> guess;
    while(guess != number)
    {
        if(guess < number)
        {
            cout << "\n\nToo low! Guess again: ";
            cin >> guess;
        }
        else if(guess > number)
        {
            cout << "\n\nToo high! Guess again: ";
            cin >> guess;
        }
    }
    cout << "\n\nThat's it! You have guessed the number correctly :)\n";
    cout << "\n\nWould you like to play again? (Enter 1 for 'Yes'): ";
    cin >> choice;
    if(choice  == 1)
        return main();
    return 0;
}
