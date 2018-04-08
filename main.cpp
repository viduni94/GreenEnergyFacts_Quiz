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

public:
    void setValues(string, string, string, string, string, int);
    void askQuestion();

};

int main()
{
    cout << endl;
    cout << "*********************** Green Energy Facts Quiz MENUv1.0 *************************" << endl;
    cout << endl;
    cout << "                              1. Quiz                                             " << endl;
    cout << "                              2. View Score                                       " << endl;
    cout << "                              3. Quit                                             " << endl;
    cout << endl;
    cout << "**********************************************************************************" << endl;
//    cout << "Enter an option" << endl;
//    cout << "Option"
}
