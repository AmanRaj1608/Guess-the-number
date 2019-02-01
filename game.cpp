#include<bits/stdc++.h>
using namespace std;


int main(){
    int num,sec;
    sec = rand()%200 +1;
    string cond;
    cout << "I'm thinking of a number! Try to guess the number I'm thinking of: ";
    cin >> num;
    while(num!=sec) {
        if(sec>num) {
            cout << "Too low! Guess again: ";
            cin >> num;
        }
        else if(sec<num) {
            cout << "Too high! Guess again: ";
            cin >> num;
        }
    }
    cout << "That's it! Would you like to play again? (yes/no): ";
    cin >> cond;
    if((cond == "yes") || (cond == "Yes") || (cond == "YES") ) {
        return main();
    }
    else {
      return 0;
    }
}
