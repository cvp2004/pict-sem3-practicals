/*
Author : Chaitanya Paraskar
Roll No.: 21465
Lab : OOPCGL Lab
Practical No.: 13
Aim :
Write a program in C++ to use map associative container.The keys will be the names
Of States and the values will be the populations of the states.When the program runs,
the user is prompted to type the name of a state.The program then looks in the map using
the state name as an key of the state.
*/
#include "iostream"
#include "map"
#include "algorithm"
using namespace std;

class State
{
    static map<string, int> StateMap;
    string name;
    int popln;

public:
    State()
    {
        cout << "Enter Name of State : " << endl;
        cin >> this->name;
        cout << "Enter Population : " << endl;
        cin >> this->popln;
    }

    string getName()
    {
        return this->name;
    }

    int getPopln()
    {
        return this->popln;
    }

    State(string name, int popln)
    {
        this->name = name;
        this->popln = popln;
    }
};

int menu()
{
    int choice = 0;

    cout << "*************************************************************" << endl;
    cout << "                             MENU                            " << endl;
    cout << "*************************************************************" << endl;
    cout << "1. Add New State Record" << endl;
    cout << "2. Delete a State Record" << endl;
    cout << "3. Search a State Record" << endl;
    cout << "4. Display all State Records" << endl;
    cout << "5. Exit" << endl;
    cout << "*************************************************************" << endl;
    cout << "Enter Your Choice : ";
    cin >> choice;

    return choice;
}

int main()
{
    map<string, int> StateMap;

    int ch;

    while (ch != 5)
    {
        ch = menu();

        switch (ch)
        {
        case 1:
        {
            State a;
            StateMap.insert(pair<string, int>(a.getName(), a.getPopln()));

            cout << "New State Record Added Successfully !!" << endl;
        }
        break;
        case 2:
        {
            string nm;
            cout << "Enter State Name to be Removed : ";
            cin >> nm;

            map<string, int>::const_iterator cit = StateMap.find(nm);

            if (cit == StateMap.end())
            {
                cout << "State Record not Found !!" << endl;
            }
            else
            {
                cout << "State Record Found !!" << endl;
                cout << "key : " << cit->first << endl;
                cout << "value : " << cit->second << endl;
                /* `StateMap.erase(cit->first);` is removing the state record from the `StateMap` map.
                It uses the `erase()` function of the `map` container to remove the element with the
                specified key (`cit->first`). This effectively deletes the state record from the
                map. */
                StateMap.erase(cit->first);
                cout << "State Record Deleted Successfully !! " << endl;
            }
        }
        break;
        case 3:
        {
            string nm;
            cout << "Enter Name of State to Search : ";
            cin >> nm;

            map<string, int>::const_iterator cit = StateMap.find(nm);

            if (cit == StateMap.end())
            {
                cout << "State Record not Found !!" << endl;
            }
            else
            {
                cout << "State Record Found !!" << endl;
                cout << "key : " << cit->first << endl;
                cout << "value : " << cit->second << endl;
            }
        }
        break;
        case 4:
        {
            cout << "All State Records =>" << endl;
            for (map<string, int>::iterator it = StateMap.begin(); it != StateMap.end(); it++)
            {
                cout << "STATE : " << it->first << ", POPULATION : " << it->second << endl;
            }
        }
        break;
        case 5:
            break;
        default:
            cout << "Enter Valid Option !!" << endl;
        }
    }

    return 0;
}
/*
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice :
1
Enter Name of State :
Goa
Enter Population :
121413
New State Record Added Successfully !!
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice : 1
Enter Name of State :
Maharashtra
Enter Population :
5363575
New State Record Added Successfully !!
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice : 3
Enter Name of State to Search : Goa
State Record Found !!
key : Goa
value : 121413
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice :
*/

/*
OUTPUT:-
$ g++ 21465_Assign13.cpp -o Assign13 && ./Assign13
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice : 1
Enter Name of State :
TEXAS
Enter Population :
124235
New State Record Added Successfully !!
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice : 1
Enter Name of State :
CALIFORNIA
Enter Population :
5635
New State Record Added Successfully !!
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice : 4
All State Records =>
STATE : CALIFORNIA, POPULATION : 5635
STATE : TEXAS, POPULATION : 124235
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice : 3
Enter Name of State to Search : TEXAS
State Record Found !!
key : TEXAS
value : 124235
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice : 2
Enter State Name to be Removed : TEXAS
State Record Found !!
key : TEXAS
value : 124235
State Record Deleted Successfully !!
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice : 3
Enter Name of State to Search : TEXAS
State Record not Found !!
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice : 4
All State Records =>
STATE : CALIFORNIA, POPULATION : 5635
*************************************************************
                             MENU
*************************************************************
1. Add New State Record
2. Delete a State Record
3. Search a State Record
4. Display all State Records
5. Exit
*************************************************************
Enter Your Choice : 5
*/