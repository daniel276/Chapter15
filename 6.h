//
// Created by Daniel on 10/31/2016.
//

#ifndef CHAPTER15_6_H
#define CHAPTER15_6_H
#include <string>
using namespace std;

class GradedActivity {
private:
    double score; // To hold the numeric score

public:
// Default constructor
    GradedActivity() {
        score = 0.0;
    }

// Constructor
    GradedActivity(double s) {
        score = s;
    }

// Mutator function
    void setScore(double s) {
        score = s;
    }

    // Accessor functions
    double getScore() const {
        return score;
    }


};

    class Essay:public GradedActivity{
    private:
        int grammarScore;
        int spellingScore;
        int correctLength;
        int content;
        int total;

    public:
        void setGrammarScore(int grammar){
            grammarScore=grammar;
        }
        void setSpellingScore(int spellScore){
            spellingScore=spellScore;
        }

        void setCorrectLength(int correctLength){
            this->correctLength=correctLength;
        }
        void setContent(int content){
            this->content=content;
        }

        int getGrammarScore(){
            return grammarScore;
        }

        int getSpellingScore(){
            return spellingScore;
        }
        int getCorrectLength(){
            return correctLength;
        }
        int getContent(){
            return content;
        }

        int totalScore(){
            return grammarScore + spellingScore + correctLength + content;
        }

        char getLetterGrade() {
            char letterGrade; // To hold the letter grade
            int totalX = totalScore();
            if (totalX >= 90)
                letterGrade = 'A';
            else if (totalX >= 80)
                letterGrade = 'B';
            else if (totalX>= 70)
                letterGrade = 'C';
            else if (totalX>= 60)
                letterGrade = 'D';
            else
                letterGrade = 'F';
            return letterGrade;
        }

    };

#endif //CHAPTER15_6_H
