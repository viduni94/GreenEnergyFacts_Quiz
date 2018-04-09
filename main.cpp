#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int total_score;
int user_answer;
int option_number;

int getMenuOption();
int exitProgram();
void quiz();

int main()
{
    option_number = getMenuOption();
    
    switch(option_number) {
        case 1:
            quiz();
            cout << endl;
            main();
            return 0;
        case 2:
            cout<< "View Score" << endl;
            main();
            return 0;
        case 3:
            exitProgram();
            return 0;
            break;
        default:
            cout << "Invalid Input. Please enter the correct option number" << endl;
            main();
            return 0;
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

void quiz() {
    total_score = 0;
    char user_name[100], q1_answer, q2_answer, q3_answer, q4_answer, q5_answer, q6_answer, q7_answer, q8_answer, q9_answer, q10_answer;
    
    cout << "Please enter your name: ";
    cin >> user_name;
    cout << endl;
    cout << "Hi " << user_name << ", " << "Welcome to the Green Energy Quiz!" << endl;
    cout << "Enter the answers in the form of a, b, c or d." << endl;
    cout << endl;
    
    cout << "Press enter to start the quiz." << endl;
    cin.get();
    
    //Question 1
    cout << "Q1: Which country produces most of Hydroelectric energy?" << endl;
    cout << "a. Canada.\n";
    cout << "b. China.\n";
    cout << "c. Sri Lanka.\n";
    cout << "d. Italy.\n";
    cout << endl;
    cout << "Enter your answer" << endl;
    cin >> q1_answer;
    cout << endl;
    
    if(q1_answer == 'b') {
        total_score += 1;
    }
    
    //Question 2
    cout << "Q2: How much renewable energy does the world generate approximately?" << endl;
    cout << "a. 4,000 billion kWh.\n";
    cout << "b. 50,000 billion kWh.\n";
    cout << "c. 500,000 billion kWh.\n";
    cout << "d. 6,800,000 billion kWh.\n";
    cout << endl;
    cout << "Enter your answer" << endl;
    cin >> q2_answer;
    cout << endl;
    
    if(q2_answer == 'a') {
        total_score += 1;
    }
    
    //Question 3
    cout << "Q3: How many types of renewable energy are there normally said to be?" << endl;
    cout << "a. 10.\n";
    cout << "b. 5.\n";
    cout << "c. 3.\n";
    cout << "d. 7.\n";
    cout << endl;
    cout << "Enter your answer" << endl;
    cin >> q3_answer;
    cout << endl;
    
    if(q3_answer == 'd') {
        total_score += 1;
    }
    
    //Question 4
    cout << "Q4: What is the oldest known use of renewable energy?" << endl;
    cout << "a. In 200 BC people in China and the Middle East used windmills to pump water and grind grain.\n";
    cout << "b. In 500BC people in England used windmills to plant grain.\n";
    cout << "c. In 1800 windmills in India were used to pump water for salt making.\n";
    cout << "d. In South Africa, 1.8m BC biomass was used as fuel for fire.\n";
    cout << endl;
    cout << "Enter your answer" << endl;
    cin >> q4_answer;
    cout << endl;
    
    if(q4_answer == 'd') {
        total_score += 1;
    }
    
    //Question 5
    cout << "Q5: Which country developed the first windmill?" << endl;
    cout << "a. China.\n";
    cout << "b. Nigeria.\n";
    cout << "c. Japan.\n";
    cout << "d. Kuwait.\n";
    cout << endl;
    cout << "Enter your answer" << endl;
    cin >> q5_answer;
    cout << endl;
    
    if(q5_answer == 'a') {
        total_score += 1;
    }
    
    //Question 6
    cout << "Q6: Which of the following is not a renewable?" << endl;
    cout << "a. A backpack that produces energy from walking.\n";
    cout << "b. A knee brace that harvests kinetic energy.\n";
    cout << "c. A t-shirt battery charged by solar power.\n";
    cout << "d. A gym powered by its runners.\n";
    cout << endl;
    cout << "Enter your answer" << endl;
    cin >> q6_answer;
    cout << endl;
    
    if(q6_answer == 'c') {
        total_score += 1;
    }
    
    //Question 7
    cout << "Q7: Which of these countries have NOT vowed to use only 100% renewable energy by 2050?" << endl;
    cout << "a. Afghanistan.\n";
    cout << "b. Canada.\n";
    cout << "c. Guatemala.\n";
    cout << "d. Vietnam.\n";
    cout << endl;
    cout << "Enter your answer" << endl;
    cin >> q7_answer;
    cout << endl;
    
    if(q7_answer == 'b') {
        total_score += 1;
    }
    
    //Question 8
    cout << "Q8: Which of the following is not considered to be a source of renewable energy?" << endl;
    cout << "a. Hydropower.\n";
    cout << "b. Wind.\n";
    cout << "c. Natural gas.\n";
    cout << "d. Solar.\n";
    cout << endl;
    cout << "Enter your answer" << endl;
    cin >> q8_answer;
    cout << endl;
    
    if(q8_answer == 'c') {
        total_score += 1;
    }
    
    //Question 9
    cout << "Q9: How many homes can a single 1MW wind turbine power?" << endl;
    cout << "a. 10.\n";
    cout << "b. 120.\n";
    cout << "c. 200.\n";
    cout << "d. 300.\n";
    cout << endl;
    cout << "Enter your answer" << endl;
    cin >> q9_answer;
    cout << endl;
    
    if(q9_answer == 'd') {
        total_score += 1;
    }
    
    //Question 10
    cout << "Q10: Which of the following gasses can be generated and used for cooking and lighting in rural areas?" << endl;
    cout << "a. Biogas.\n";
    cout << "b. Oxygen.\n";
    cout << "c. Ammonia.\n";
    cout << "d. None of these.\n";
    cout << endl;
    cout << "Enter your answer" << endl;
    cin >> q10_answer;
    cout << endl;
    
    if(q10_answer == 'a') {
        total_score += 1;
    }
    
    //Feedback
    cout << "The quiz is over. Here is your feedback." << endl;
    cout << endl;
    if(total_score==10) {
        cout << "Result: Excellent!\n";
    } else if(total_score<10 & total_score>=6) {
        cout << "Result: Very Good!\n";
    } else if(total_score<=5) {
        cout << "Result: Time to brush up on your knowledge of global warming." << endl;
        cout << "You could refer these websites to learn more." << endl;
        cout << endl;
        cout << "1. https://www.mnn.com/earth-matters/energy/stories/what-is-green-energy" << endl;
        cout << "2. https://www.sporcle.com/games/PumpkinBomb/energy" << endl;
        cout << "3. http://www.renewableenergyworld.com/index/tech.html" << endl;
        cout << "4. https://en.wikipedia.org/wiki/Renewable_energy" << endl;
        cout << endl;
        
    }
}
