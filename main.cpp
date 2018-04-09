#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int number_of_questions;
int total_score;
int user_answer;
int option_number;

int getMenuOption();
int exitProgram();

class Question
{
private:
    string question_text;
    string answer_a;
    string answer_b;
    string answer_c;
    string answer_d;
    
    string correct_answer;
    
public:
    void setValues(string question_text, string answer_a, string answer_b, string answer_c, string answer_d, string correct_answer);
    void askQuestion();
};

void Question::setValues( string q, string a, string b, string c, string d, string answer ) {
    question_text = q;
    answer_a = a;
    answer_b = b;
    answer_c = c;
    answer_d = d;
    correct_answer = answer;
}

int main()
{
    option_number = getMenuOption();
    if(option_number==1)
    {
        string user_name;
        cout << "Please enter your name: ";
        cin >> user_name;
        cout << endl;
        
        Question q1;
        Question q2;
        Question q3;
        Question q4;
        Question q5;
        Question q6;
        Question q7;
        Question q8;
        Question q9;
        Question q10;
        
        
    }
    else if (option_number==2)
    {
        cout<< "View Score" << endl;
    }
    else if(option_number==3)
    {
        exitProgram();
    }
    else
    {
        cout << "Invalid Input. Please enter the correct option number" << endl;
        //getMenuOption();
    }
}

int getMenuOption()
{
    cout << endl;
    cout << "*********************** Green Energy Facts Quiz MENUv1.0 *************************" << endl;
    cout << endl;
    cout << "                              1. Quiz                                             " << endl;
    cout << "                              2. View Score                                       " << endl;
    cout << "                              3. Quit                                             " << endl;
    cout << endl;
    cout << "**********************************************************************************" << endl;
    cout << "Enter an option number." << endl;
    
    int user_option;
    cout << "Option: ";
    cin >> user_option;
    
    return(user_option);
}

int exitProgram()
{
    cout << "Program Ended" << endl;
    return 0;
}
