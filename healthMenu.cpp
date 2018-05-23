#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

int main () {

    bool repeatApplication = true;

    int months,
        choice,
        choiceCost,
        totalCost;

    float adult  = 47.50,
          child  = 19.00,
          senior = 44.50;

    do {

        cout << "HEALTH CLUB MEMBERSHIP MENU\n---------------------------\n1. Standard Adult Membership\n2. Child Membership\n3. Senior Citizen Membership\n4. Quit program\n";
        cout << "Enter your choice: ";
        cin  >> choice;
        cout << endl;

        while ( choice < 1 || choice > 4 || ( typeid(choice).name() != typeid(5).name() ) ) {
            cout << "Please enter a valid menu choice: ";
            cin  >> choice;
            cout << endl;
        };

    }
    while (repeatApplication);



    switch (choice) {
        case 1:
            choiceCost = adult;
            break;
        case 2:
            choiceCost = child;
            break;
        case 3:
            choiceCost = senior;
            break;
        case 4:
            repeatApplication = false;
    };

    cout << "For how many months? ";
    cin  >> months;
    cout << endl;

    totalCost = months * choiceCost;
    cout << "The total cost for this plan is $" << totalCost << endl;

    cout << "Good bye!\n";
    return 0;
};
