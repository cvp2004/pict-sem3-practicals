/*
Author : Chaitanya Paraskar
Roll No.: 21465
Lab : OOPCGL Lab
Practical No.: 7
Aim :
Write a C++ program that creates an output file, writes information to it, closes the
file, open it again as an input file and read the information from the file.
Consider class person, open a file and write as many objects as the user wants then
read and display the entire contents of the file.
*/
#include "iostream"
#include "fstream"
#define FILE "sample.dat"
#define MALE 1
#define FEMALE 2
using namespace std;

class Person
{
private:
    string name;
    int age;
    int gender = 1;

public:
    Person()
    {
        this->name = "JACK";
        this->age = 19;
        this->gender = MALE;
    }

    Person(string name, int age, int gender)
    {
        this->name = name;
        this->age = age;
        if (gender == MALE || gender == FEMALE)
        {
            this->gender = gender;
        }
        else
        {
            this->gender = MALE;
        }
    }

    void showData()
    {
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        if (this->gender == MALE)
            cout << "Gender : "
                 << "MALE" << endl;
        else
            cout << "Gender : "
                 << "FEMALE" << endl;
    }

    void setData()
    {

        cout << "Enter Person Name : ";
        cin >> this->name;
        cout << "Enter Age : ";
        cin >> this->age;
        cout << "Enter Gender (MALE -> 1, FEMALE -> 2) : ";
        cin >> this->gender;
        if (gender != 1 && gender != 2)
        {
            cout << "Invalid Option entered !!\nBy Default Male gender is selected !!" << endl;
        }
    }

    friend void read();
};

void read()
{
    ifstream in(FILE, ios::in | ios::binary);

    if (!in)
    {
        cout << "File not Found !!" << endl;
        return;
    }

    in.seekg(0, ios::end);

    int count = in.tellg() / sizeof(Person);

    for (int i = 0; i < count; i++)
    {
        Person a;

        in.read((char *)&a, sizeof(a));

        a.showData();
    }

    in.close();
}

void write()
{
    int count = 0;
    cout << "Enter No. of objects to store : ";
    cin >> count;

    if (count)
    {

        ifstream in(FILE, ios::in | ios::binary);

        if (!in)
        {
            cout << "File not Created !!" << endl;
            cout << "Creating new File !!" << endl;
        }

        in.close();

        ofstream out(FILE, ios::out | ios::binary | ios::app);

        if (!out.good())
        {
            cout << "File Creation Failed !!" << endl;
            out.close();
            return;
        }

        for (int i = 0; i < count; i++)
        {
            Person *a = new Person();
            a->setData();
            out.write((char *)a, sizeof(Person));

            if (out.good())
                cout << "Object Stored Successfully !!" << endl;
            else
                cout << "Error while Writing data to the File !!" << endl;
        }

        out.close();

        cout << "Write Operation Ended !!" << endl;
    }
}

int main()
{
    write();
    read();

    return 0;
}

/*
OUTPUT:-
$ g++ 21465_Assign7.cpp -o Assign7 && ./Assign7
Enter No. of objects to store : 2
File not Created !!
Creating new File !!
Enter Person Name : JACK
Enter Age : 25
Enter Gender (MALE -> 1, FEMALE -> 2) : 1
Object Stored Successfully !!
Enter Person Name : LUNA
Enter Age : 34
Enter Gender (MALE -> 1, FEMALE -> 2) : 2
Object Stored Successfully !!
Write Operation Ended !!
Name : JACK
Age : 19
Gender : MALE
Name : JACK
Age : 19
Gender : MALE
*/