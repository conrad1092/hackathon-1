#ifndef BUDGET.H
#define BUDGET.H
#include <iostream>
using namespace std;

class Budget{
    private:
        double income;
        double *cost_of_bill;
        string *name_of_bill;
        double *cost_of_misc;
        string *name_of_misc;
        double money_left;
        int amount_of_bills;
        int amount_of_misc;

    public:
        Budget::Budget(){};

        void create_lists_of_bills(){};

        void filling_list_of_bills_with_cost(){};
};
#endif