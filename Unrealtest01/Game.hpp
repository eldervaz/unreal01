//
//  Game.hpp
//  Unrealtest01
//
//  Created by eldervaz on 5/10/16.
//  Copyright © 2016 eldervaz. All rights reserved.
//


#pragma once
#include <string>
//using namespace std;

using FString = std::string;
using int32 = int;

struct BullCowCount
{
    int32 Bulls = 0;
    int32 Cows = 0;
};


class Game{
    
public:
    
    Game();
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    
    
    void Reset();
    bool CheckGuessValidity(FString); // TODO make a more rich return value.
    BullCowCount SubmitGuess(FString);
    
    
    
private:
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
};



