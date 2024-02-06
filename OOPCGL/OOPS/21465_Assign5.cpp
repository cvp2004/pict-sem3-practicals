/*
Author : Chaitanya Paraskar
Roll No.: 21465
Lab : OOPCGL Lab
Practical No.: 5
Aim :
Imagine a publishing company which does marketing for book and audio cassette
versions. Create a class publication that stores the title (a string) and price (type float)
of publications. From this class derive two classes: book which adds a page count
(type int) and tape which adds a playing time in minutes (type float).
Write a program that instantiates the book and tape class, allows user to enter data and
displays the data members. If an exception is caught, replace all the data member
values with zero values.
*/
#include <iostream>
using namespace std;

class Publication
{
private:
    string title;
    float price;

public:
    Publication(string t, float p)
    {
        this->price = p;
        this->title = t;
    }

    void display()
    {
        cout << "Name  : " << this->title << endl;
        cout << "Price : " << this->price << endl;
    }
};

class Book : public Publication
{
private:
    int pageCount;

public:
    Book(string t, float p, int pc) : Publication(t, p)
    {
        this->pageCount = pc;

        cout << "New Book Successfully Created !!" << endl;
    }

    void display()
    {
        this->Publication::display();
        cout << "Page Count : " << this->pageCount << endl;
    }
};

class Tape : public Publication
{
private:
    float playTime;

public:
    Tape(string t, float p, int pt) : Publication(t, p)
    {
        this->playTime = pt;

        cout << "New Tape Successfully Created !!" << endl;
    }

    void display()
    {
        this->Publication::display();
        cout << "Play Time : " << this->playTime << endl;
    }
};

int main()
{
    int choice = -1;

    while (choice != 3)
    {
        cout << "1. Create new Book" << endl;
        cout << "2. Create new Tape" << endl;
        cout << "3. exit" << endl;
        cout << "Enter YOur Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int tp;
            float p;
            string t;

            cout << "Enter Title : ";
            cin >> t;
            cout << "Enter Price : ";
            cin >> p;
            cout << "Enter Total NO. of Pages : ";
            cin >> tp;

            Publication *ptr = new Book(t, p, tp);
            ptr->display();
        }
        break;
        case 2:
        {
            int pt;
            float p;
            string t;

            cout << "Enter Title : ";
            cin >> t;
            cout << "Enter Price : ";
            cin >> p;
            cout << "Enter Total Play Time : ";
            cin >> pt;

            Publication *ptr = new Tape(t, p, pt);
            ptr->display();
        }
        break;
        case 3:
            break;
        default:
        {
            cout << "Please Enter Valid Input !!" << endl;
        }
        }
    }
    return 0;
}

/*

Output:-

$ g++ 21465_Assign5.cpp -o Assign5 && ./Assign5
1. Create new Book
2. Create new Tape
3. exit
Enter YOur Choice : 2
Enter Title : Ram Raksha
Enter Price : 5000
Enter Total Play Time : 15
New Tape Successfully Created !!
Name  : Ram Raksha
Price : 5000
1. Create new Book
2. Create new Tape
3. exit
Enter YOur Choice : 1
Enter Title : WAR OF LANKA
Enter Price : 345
Enter Total NO. of Pages : 273
New Book Successfully Created !!
Name  : WAR OF LANKA
Price : 345
1. Create new Book
2. Create new Tape
3. exit
Enter YOur Choice : 3

*/