#include <iostream>
using namespace std;

public class Budget{
    private:
        double income;
        double bills;
        double *cost_of_bill;
        string *name_of_bill;
        double *cost_of_misc;
        string *name_of_misc;
        double money_left;
        int amount_of_bills;
        int amount_of_misc;

    public:
        Budget(){
            cout << "How much is your montly income";
            cin >> income;

            cout << endl << "How many bills do you have not including misc things like(subcriptions like to Netflix)";
            cout >> amount_of_bills;

            list_of_bills();
        }

        void create_lists_of_bills(){
            cost_of_bill = new double[amount_of_bills];
            name_of_bill = new string[amount_of_bills];
        }

        void filling_list_of_bills_with_cost(){

        }
}