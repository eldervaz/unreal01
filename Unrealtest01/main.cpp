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
        askMe = askForPlay();
        playGame();
    }
    while (askMe);
    
    
    return 0;
}

bool askForPlay(){
    
    cout << "Do you want to play? (y/n) ";
    string response = "";
    getline( cin, response);
    return (response[0] == 'y') || (response[0] == 'Y') ;
}

void playGame(){
    string guess = getGuess();
    cout << "Your guess is " <<  guess << endl;
}

string getGuess(){
    cout << "Enter your guess: ";
    string guess = "";
    //cin >> guess;
    
    getline (cin, guess);
    
    return guess;
}


void printIntro(){
    
    //
    //int maxTries = BCGame.GetMaxTries();
    
    constexpr int WORLD_LENGTH = 5;
    cout << "Using namespace "  << WORLD_LENGTH << " more cool \n";
    cout << endl;
    
}