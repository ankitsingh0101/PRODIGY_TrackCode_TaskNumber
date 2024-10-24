#include <bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;



int main() {
    // srand() and rand() are based on PRNG,exact algorithm can vary btw implemention(LCG-linear congruential generator )
    //rand()->deterministic--if u use same seed value,you will get same sequence of numbers.
    // srand()->takes a seed value as input.
    // seed is an integer used to intialize the interal state of PRNG.
    srand((time(0)));

    // Generate a random number between 1 and 100
    int rand_num = rand() % 100 + 1;
    
    int n = 0; //user guess number
    int atmpt = 0; //intializing attemps

    cout << "->->->!!Welcome to the Guessing Game!!<-<-<-" << endl;
    cout<<endl;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout<<endl;

    // Loop until the user guesses the correct number
    do {
        cout << "Enter your guess: ";
        cin >> n;
        atmpt++;

        if (n < rand_num) {
            cout << "Too low! Try again." << endl;
        } else if (n > rand_num) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number: " << rand_num << endl;
            cout << "It took you " << atmpt << " attempts." << endl;
        }
    } while (n != rand_num);

    return 0;
}