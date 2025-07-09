// Program Name: Math Tutor
// Purpose: This program can be used as a math tutor for a student.
// Author: Jack McNamara
// Date Last Modified: July 10, 2025

# include <iostream>
# include <iomanip>
# include <ctime>
# include <cstdlib> //For rand and srand

using namespace std;
int main ()
{
    // Setting constant vaules
    const int ADD_MIN_VALUE = 50; 
    const int ADD_MAX_VALUE = 500;
    const int NUMERATOR_MAX_VALUE = 50;

    // Varibles
    int num1,num2,sum; //To hold the value of first number the addition problem.
    int numerator, denominator, quotient; //To hold the value of the numerator for the division problem.
    char choice; //To hold value of menu choice.
    int answer; //User's answer.

    unsigned seed= time(0);
    srand(seed);

    // do-while loop
    do {
        //Display Menu
        cout <<"\n     MATH TUTOR MENU\n";
        cout <<"------------------------------\n";
        cout <<" 1. Additon Problems\n";
        cout <<" 2. Division Problems\n";
        cout <<" 3. Quit this Program" << endl;
        cout <<"------------------------------\n";
        cout <<"\nEnter your choice (1-3): ";cin >> choice;

        // Process choice using switch
        switch (choice)
        {
        case '1':// Addition Problems
             cout << "Your choice 1.\n";
             cout << "\nSovle this addtion problem: \n"<<endl;
             //random addition nunbers
             num1 = (rand()%(ADD_MAX_VALUE - ADD_MIN_VALUE +1))+ADD_MIN_VALUE;
             num2 = (rand()%(ADD_MAX_VALUE - ADD_MIN_VALUE +1))+ADD_MIN_VALUE;
             cout<<setw(5)<<right<<num1<<endl; // "setw()" sets amount of spacing and "right" to adjust margin. 
             cout<<"+ "<<setw(3)<<right<< num2<<endl;
             cout << "-----"<< endl;
             cout<<"Enter you answer: ";cin>>answer;
             cout<<endl;
             cout<<setw(5)<<right<<num1<<endl; 
             cout<<"+ "<<setw(3)<<right<< num2<< endl;
             cout << "-----"<< endl;
             sum = (num1+num2);
                   if (sum!=answer)
                   {
                   cout<<setw(5)<<right<<answer<<" IS INCORRECT."<< endl;
                   cout <<"\n"<<setw(5)<<right<<sum <<" Is the correct answer.\n"<<endl;
                   }
                   else 
                   {
                    cout <<setw(5)<<right<< sum <<endl;
                    cout<<"CORRECT!\n"<< endl;
                   }
            break;
        
        case '2':// Division Problmes
                cout << "Your choice 2.\n";
                cout << "\nSovle this division problem: \n"<<endl;
                //random division numbers
                denominator = (rand()%(9 + 1));
                numerator = (rand()%(NUMERATOR_MAX_VALUE +1))*denominator;
                cout<<setw(3)<<right<<numerator<<"/"<<denominator<<"= \n"<<endl; // "setw()" sets amount of spacing and "right" to adjust margin. 
                cout<<"Enter you answer: ";cin>>answer;
                cout<<endl;
                quotient = (numerator / denominator);
                   if (quotient!=answer){
                   cout<<setw(5)<<right<<answer<<" IS INCORRECT."<< endl;
                   cout <<"\n"<<setw(5)<<right<<quotient <<" Is the correct answer.\n"<<endl;
                   }
                   else {
                    cout <<setw(5)<<right<< quotient<<endl;
                    cout<<"CORRECT!\n"<< endl;
                   }
                break;

        case '3':// Quit Program
                cout << "\nThank you for using Math Tutor.\n" << endl;
                   break;
        
        default:// Invalid Choice
            cout << "\nInvalid choice.  Please enter 1, 2, or 3.\n" << endl;
        }

    } while (choice != '3');

    return 0;
}
