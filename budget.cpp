#include <iostream>
#include "budget.h"
using namespace std;
Budget::Budget(){
    cout << "How much is your montly income";
    cin >> income;

    cout << endl << "How many bills do you have not including misc things like(subcriptions like to Netflix)";
    cin >> amount_of_bills;

    create_lists_of_bills();
    filling_list_of_bills_with_cost();

    cout << endl << "How many miscellaneous cost do you have?(like subcriptions or takeout cost that aren't necessity)";
}

void Budget::create_lists_of_bills(){
    cost_of_bill = new double[amount_of_bills];
    name_of_bill = new string[amount_of_bills];
}

void Budget::filling_list_of_bills_with_cost(){
    bool answer;
    int i = 0;
    do {
        cout << "If you have a bill(no subcriptions like Netflix more like: rent, utilies, or car payment)" << endl;
        cout << "Please enter the name of the bill";
        cin >> name_of_bill[0];
        cout << endl << "Please enter the cost of the bill";
        cin >> cost_of_bill[0]; 
        cout << endl <<"Do you still have bills to add(no subcriptions like Netflix more like: rent, utilies, or car payment) please enter: true or false";
        cin >> answer;
    }
    while(answer){
        cout << "Please enter the name of the bill";
        cin >> name_of_bill[i];
        cout << endl << "Please enter the cost of the bill";
        cin >> cost_of_bill[i]; 
        cout << "Do you still have bills to add(no subcriptions like Netflix more like: rent, utilies, or car payment) please enter: true or false";
        cin >> answer;
        i++;
    }
}