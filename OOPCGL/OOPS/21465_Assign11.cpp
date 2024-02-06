/*
Author : Chaitanya Paraskar
Roll No.: 21465
Lab : OOPCGL Lab
Practical No.: 11
Aim : Write C++ program using STL for sorting and searching user defined records such
as personal records (Name, DOB, Telephone number etc) using vector container.
*/
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

class Person
{
private:
    int id;
    string name;
    int day, month, year;
    string ph_no;
    static int count;

public:
    Person(int i)
    {
    }
    Person()
    {

        cout << "Enter New Person Record Details =>" << endl;
        count++;
        this->id = count;
        cout << "Name : ";
        cin >> this->name;
        cout << "Date of Birth : " << endl;
        cout << "Day : ";
        cin >> this->day;
        cout << "Month : ";
        cin >> this->month;
        cout << "Year : ";
        cin >> this->year;
        cout << "Phone No. : ";
        cin >> this->ph_no;
    }

    void showData()
    {
        cout << "Id : " << this->id << endl;
        cout << "Name : " << this->name << endl;
        cout << "DOB : " << this->day << "/" << this->month << "/" << this->year << endl;
        cout << "Phone No.: " << this->ph_no << endl;
    }

    int getId()
    {
        return this->id;
    }

    string getName()
    {
        return this->name;
    }

    int getDay()
    {
        return this->day;
    }

    int getMonth()
    {
        return this->month;
    }

    int getYear()
    {
        return this->year;
    }

    string getPh_no()
    {
        return this->ph_no;
    }

    static bool cmpId(Person a, Person b)
    {
        return a.getId() < b.getId();
    }

    static bool cmpName(Person a, Person b)
    {
        int r = a.getName().compare(b.getName());

        return r < 0 ? true : false;
    }

    static bool cmpDOB(Person a, Person b)
    {
        int r;

        if (a.getYear() < b.getYear())
            r = 1;
        else if (a.getYear() > b.getYear())
            r = 0;
        else
        {
            if (a.getMonth() < b.getMonth())
                r = 1;
            else if (a.getMonth() > b.getMonth())
                r = 0;
            else
            {
                if (a.getDay() < b.getDay())
                    r = 1;
                else if (a.getDay() > b.getDay())
                    r = 0;
                else
                    r = 1;
            }
        }
        return r;
    }
};
int Person::count = 0;

void display(vector<Person> &persons)
{
    auto it = persons.begin();

    cout << "Person Records => " << endl;

    while (it != persons.end())
    {
        cout << "**************************************************************" << endl;
        it->showData();
        it++;
    }
}

int menu()
{
    int choice;

    cout << "**************************************************************" << endl;
    cout << "                              Menu                            " << endl;
    cout << "**************************************************************" << endl;
    cout << "1. Add new Person record" << endl;
    cout << "2. Sort Records by Id" << endl;
    cout << "3. Sort Records by Name" << endl;
    cout << "4. Sort Records by DOB" << endl;
    cout << "5. Search Records by Id" << endl;
    cout << "6. Search Records by Name" << endl;
    cout << "7. Search Records by DOB" << endl;
    cout << "8. Delete a Record by Id" << endl;
    cout << "9. Exit" << endl;
    cout << "**************************************************************" << endl;
    cout << "Enter your Choice : ";
    cin >> choice;
    return choice;
}

int main()
{
    vector<Person> persons;
    int ch = 0;
    while (ch != 9)
    {
        ch = menu();

        switch (ch)
        {
        case 1:
        {
            Person a;
            persons.push_back(a);
            cout << "Person Record Saved Successfully !!" << endl;
        }
        break;
        case 2:
        {
            sort(persons.begin(), persons.end(), Person::cmpId);
            cout << "Records are Sorted Based on Person Id" << endl;
            display(persons);
        }
        break;
        case 3:
        {
            sort(persons.begin(), persons.end(), Person::cmpName);
            cout << "Records are Sorted Based on Person Name" << endl;
            display(persons);
        }
        break;
        case 4:
        {
            sort(persons.begin(), persons.end(), Person::cmpDOB);
            cout << "Records are Sorted Based on Person DOB" << endl;
            display(persons);
        }
        break;
        case 5:
        {
            int id;
            bool found = false;

            cout << "Enter Id to Search : ";
            cin >> id;

            int i = 0;

            while (i != persons.size())
            {
                if (persons[i].getId() == id)
                {
                    cout << "Person Record Found !!" << endl;
                    cout << "Details =>" << endl;
                    persons[i].showData();
                    found = true;
                    break;
                }
                i++;
            }

            if (!found)
                cout << "No Person Record with Id : " << id << " Found !!" << endl;
        }
        break;
        case 6:
        {
            string name;
            bool found = false;

            cout << "Enter Name to Search : ";
            cin >> name;

            int i = 0;

            while (i != persons.size())
            {
                if (persons[i].getName() == name)
                {
                    cout << "Person Record Found !!" << endl;
                    cout << "Details =>" << endl;
                    persons[i].showData();
                    found = true;
                    break;
                }
                i++;
            }

            if (!found)
                cout << "No Person Record with Name : " << name << " Found !!" << endl;
        }
        break;
        case 7:
        {
            int d, m, y;
            bool found = false;

            cout << "Enter DOB to Search =>" << endl;
            cout << "Enter Day :";
            cin >> d;
            cout << "Enter Month :";
            cin >> m;
            cout << "Enter Year :";
            cin >> y;

            int i = 0;

            while (i != persons.size())
            {
                if (persons[i].getDay() == d && persons[i].getMonth() == m && persons[i].getYear() == y)
                {
                    cout << "Person Record Found !!" << endl;
                    cout << "Details =>" << endl;
                    persons[i].showData();
                    found == true;
                    break;
                }
                i++;
            }

            if (!found)
            {
                cout << "No Person Record with DOB : " << d << "/" << m << "/" << y << " Found !!" << endl;
            }
        }
        break;
        case 8:
        {
            int id;
            bool found = false;

            cout << "Enter Id of Record to Delete : ";
            cin >> id;

            int i = 0;

            while (i != persons.size())
            {

                if (persons[i].getId() == id)
                {
                    cout << "Person Record Found at Index " << i << " !!" << endl;
                    cout << "Details =>" << endl;
                    persons[i].showData();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "No Person Record with Id : " << id << " Found !!" << endl;
            else
            {
                persons.erase(next(persons.begin(), i));
                cout << "Person Record deleted Successfully !!" << endl;
            }
        }
        break;
        default:
        {
            cout << "Please Enter Valid Option !!" << endl;
        }
        }
    }

    return 0;
}

/*
OUTPUT:-
$ g++ 21465_Assign11.cpp -o Assign11 && ./Assign11
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 1
Enter New Person Record Details =>
Name : JACK
Date of Birth :
Day : 6
Month : 8
Year : 2004
Phone No. : 1324657980
Person Record Saved Successfully !!
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 1
Enter New Person Record Details =>
Name : LISA
Date of Birth :
Day : 3
Month : 9
Year : 2000
Phone No. : 8456279311
Person Record Saved Successfully !!
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 2
Records are Sorted Based on Person Id
Person Records =>
**************************************************************
Id : 1
Name : JACK
DOB : 6/8/2004
Phone No.: 1324657980
**************************************************************
Id : 2
Name : LISA
DOB : 3/9/2000
Phone No.: 8456279311
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 3
Records are Sorted Based on Person Name
Person Records =>
**************************************************************
Id : 1
Name : JACK
DOB : 6/8/2004
Phone No.: 1324657980
**************************************************************
Id : 2
Name : LISA
DOB : 3/9/2000
Phone No.: 8456279311
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 4
Records are Sorted Based on Person DOB
Person Records =>
**************************************************************
Id : 2
Name : LISA
DOB : 3/9/2000
Phone No.: 8456279311
**************************************************************
Id : 1
Name : JACK
DOB : 6/8/2004
Phone No.: 1324657980
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 5
Enter Id to Search : 2
Person Record Found !!
Details =>
Id : 2
Name : LISA
DOB : 3/9/2000
Phone No.: 8456279311
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 6
Enter Name to Search : JAMES
No Person Record with Name : JAMES Found !!
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 7
Enter DOB to Search =>
Enter Day :3
Enter Month :9
Enter Year :2000
Person Record Found !!
Details =>
Id : 2
Name : LISA
DOB : 3/9/2000
Phone No.: 8456279311
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 8
Enter Id of Record to Delete : 2
Person Record Found at Index 0 !!
Details =>
Id : 2
Name : LISA
DOB : 3/9/2000
Phone No.: 8456279311
Person Record deleted Successfully !!
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 2
Records are Sorted Based on Person Id
Person Records =>
**************************************************************
Id : 1
Name : JACK
DOB : 6/8/2004
Phone No.: 1324657980
**************************************************************
                              Menu
**************************************************************
1. Add new Person record
2. Sort Records by Id
3. Sort Records by Name
4. Sort Records by DOB
5. Search Records by Id
6. Search Records by Name
7. Search Records by DOB
8. Delete a Record by Id
9. Exit
**************************************************************
Enter your Choice : 9
*/