#include <iostream>
#include <string>

using namespace std;

int number_of_questions;
int total_score;
int user_answer;

class Question
{
private:
    string question_text;
    string answer_a;
    string answer_b;
    string answer_c;
    string answer_d;

    int correct_answer;
};
