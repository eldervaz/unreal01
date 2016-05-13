//
//  Game.cpp
//  Unrealtest01
//
//  Created by eldervaz on 5/10/16.
//  Copyright © 2016 eldervaz. All rights reserved.
//



#include "Game.hpp"


using int32 = int;

Game::Game() { Reset(); }

int32 Game::GetMaxTries() const { return MyMaxTries;}
int32 Game::GetCurrentTry() const { return MyCurrentTry; }

void Game::Reset()
{
    constexpr int32 MAX_TRIES = 8;
    MyMaxTries = MAX_TRIES;
    
    const FString HIDDEN_WORD = "planet";
    MyHiddenWord = HIDDEN_WORD;
    
    MyCurrentTry = 1;
    return;
}

bool Game::IsGameWon() const
{
    return false;
}

bool Game::CheckGuessValidity(FString)
{
    return false;
}


BullCowCount Game::SubmitGuess(FString)
{

    MyCurrentTry++;
    BullCowCount BullCowCount;
    
    return BullCowCount;
}
