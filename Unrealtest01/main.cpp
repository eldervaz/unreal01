//
//  main.cpp
//  Unrealtest01
//
//  Created by eldervaz on 5/10/16.
//  Copyright © 2016 eldervaz. All rights reserved.
//

#include <iostream>
#include <string> //for windows
#include "Game.hpp"


using namespace std;


void printIntro();
string getGuess();
void playGame();
bool askForPlay();
Game BCGame;

int main(int argc, const char * argv[]) {
    
    bool askMe = false;
    
    do{
        printIntro();
        playGame();
        askMe = askForPlay();
        
    }
    while (askMe);
    
    
    return 0;
}

bool askForPlay(){
    
    cout << "Do you want to play again (y/n)? ";
    string Response = "";
    getline(cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
    
}

void playGame(){
    
    BCGame.Reset();
    
    int maxTries = BCGame.GetMaxTries();
    
    for (int i=0; i<maxTries; i++) {
        string guess = getGuess();
        cout << "Your guess is " <<  guess << endl;
    }
    
    
    
    
    
}

string getGuess(){
    
    
    int currentTry = BCGame.GetCurrentTry();
    
    cout <<  "Try " <<  currentTry << " Enter your guess: ";
    string guess = "";
    //cin >> guess;
    getline (cin, guess);
    
    return guess;
}


void printIntro(){
    
    int32 CurrentTry = BCGame.GetCurrentTry();
    
    cout << "Try " << CurrentTry << ". Enter your guess: ";
    string Guess = "";
    std::getline(std::cin, Guess);
    cout << endl;
    
}