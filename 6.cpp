//
// Created by Daniel on 10/31/2016.
//

#include "6.h"
#include <iostream>

int main(){

    int grammar,spelling,length,content;
    Essay Data;

    cout << "Enter Grammar Score (0-30) : ";
    cin >> grammar;

    cout << "Enter Spelling Score (0-20) : ";
    cin >> spelling;

    cout << "Enter Correct Length (0-20) : ";
    cin >> length;

    cout << "Enter Content Point (0-30) : ";
    cin >> content;

    Data.setGrammarScore(grammar);
    Data.setSpellingScore(spelling);
    Data.setCorrectLength(length);
    Data.setContent(content);

    cout << "Total Score : "<< Data.totalScore();
    int Score = Data.totalScore();
    cout << "The grade for that test is "<< Data.getLetterGrade() << endl;
}