#include <iostream>
#include <windows.h>
using namespace std;

class User {
    string name;
public:
    string getName(){
        return name;
    }
    void setName(string newName) {
        name = newName;
    }
};

int main()
{
    /** Initialise Variables */
    string name;
    int age;
    User u1;
    bool running = true;


    while(running) {
    /** Welcome Message w/ User's Name */
    cout << "What is your name?: " << endl;
    cin >> name;
    u1.setName(name);
    cout << "Welcome, " << u1.getName() << "!" << endl;
    returnToAge:
    Sleep(1000);
	cout << u1.getName() << ", to continue, you have to be over 18." << endl;
	Sleep(1000);
	cout << "Please enter your age: " << endl;
	cin >> age;

        if (age >= 18) {
            cout << "You may continue..." << endl;
            Sleep(1000);
            //Enter rest of questionnaire here









        }
        else if(age < 18) {
            cout << "You are underage! Please try again!" << endl;
            Sleep(1500);
            goto returnToAge;
        }
        else {
            cout << "INVALID INPUT!" << endl;
            goto returnToAge;
        }
    }

}
