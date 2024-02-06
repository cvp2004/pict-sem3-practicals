/*
Author : Chaitanya Paraskar
Roll No.: 21465
Lab : OOPCGL Lab
Practical No.: 3
Aim :
Develop a program In ++ to create a database of student's information system
containing the following information: Name, Roll number, Class, Division, Date of
Birth, Blood group, Contact address, Telephone number, Driving license no. and
other. Construct the database with suitable member functions. Make use of constructor,
default constructor, copy constructor, destructor. static member functions.
friend class, this pointer, inline code and dynamic memory allocation operators-new
and delete as well as exception handling.
*/
#include "iostream"
#include <vector>
using namespace std;

class Student
{
private:
    string Name;
    long RollNo;
    string Class;
    string Division;
    string DOB;
    string BloodGroup;
    string Address;
    string PhoneNo;
    string LicenseNo;

public:
    Student()
    {
        this->Name = "Chaitanya Paraskar";
        this->RollNo = 21465;
        this->Class = "SE4";
        this->Division = "G4";
        this->DOB = "6/8/2004";
        this->BloodGroup = "AB+";
        this->Address = "";
        this->LicenseNo = "";
        this->PhoneNo = "1111111111";
    }

    string getName()
    {
        return this->Name;
    }
    long getRollNo()
    {
        return this->RollNo;
    }
    string getClass()
    {
        return this->Class;
    }
    string getDivision()
    {
        return this->Division;
    }
    string getdob()
    {
        return this->DOB;
    }
    string getBloodGroup()
    {
        return this->BloodGroup;
    }
    string getAddress()
    {
        return this->Address;
    }
    string getPhoneNo()
    {
        return this->PhoneNo;
    }
    string getLicenseNo()
    {
        return this->LicenseNo;
    }

    void setName(string Name)
    {
        this->Name = Name;
    }
    void setRollNo(long RollNo)
    {
        this->RollNo = RollNo;
    }
    void setClass(string Class)
    {
        this->Class = Class;
    }
    void setDivision(string Division)
    {
        this->Division = Division;
    }
    void setdob(string dob)
    {
        this->DOB = dob;
    }
    void setBloodGroup(string BloodGroup)
    {
        this->BloodGroup = BloodGroup;
    }
    void setaddress(string Address)
    {
        this->Address = Address;
    }
    void setPhoneNo(string PhoneNo)
    {
        this->PhoneNo = PhoneNo;
    }
    void setLicenseNo(string LicenseNo)
    {
        this->LicenseNo = LicenseNo;
    }

    Student(string Name,
            long RollNo,
            string Class,
            string Division,
            string DOB,
            string BloodGroup,
            string Address,
            string PhoneNo,
            string LicenseNo)
    {
        this->Name = Name;
        this->RollNo = RollNo;
        this->Class = Class;
        this->Division = Division;
        this->DOB = DOB;
        this->BloodGroup = BloodGroup;
        this->Address = Address;
        this->PhoneNo = PhoneNo;
        this->LicenseNo = LicenseNo;
    }

    Student(Student &s)
    {
        this->Name = s.Name;
        this->RollNo = s.RollNo;
        this->Class = s.Class;
        this->Division = s.Division;
        this->DOB = s.DOB;
        this->BloodGroup = s.BloodGroup;
        this->Address = s.Address;
        this->PhoneNo = s.PhoneNo;
        this->LicenseNo = s.LicenseNo;
    }

    ~Student()
    {
        cout << "Deleted Student Roll No. : " << this->RollNo << endl;
    }

    friend class Db;
};

class Db
{
private:
    vector<Student> List;
    static int count;

public:
    void addStudent()
    {
        string n, c, d, bg, pno, lno, db, a;
        long rn;

        Student *ptr;

        cout << "Enter Student Name : ";
        cin >> n;
        cout << "Enter Student RollNo : ";
        cin >> rn;
        cout << "Enter Student Class : ";
        cin >> c;
        cout << "Enter Student Division : ";
        cin >> d;
        cout << "Enter Student DOB : ";
        cin >> db;
        cout << "Enter Student Blood Group : ";
        cin >> bg;
        cout << "Enter Student Address in 1 line : ";
        cin >> a;
        cout << "Enter Student Phone No. : ";
        cin >> pno;
        cout << "Enter Student License No. : ";
        cin >> lno;

        ptr = new Student(n, rn, c, d, db, bg, a, pno, lno);

        List.push_back(*ptr);
        count++;

        cout << endl
             << "New Student Added !!" << endl;
    }

    void removeStudent()
    {
        Student *p = &List[List.size() - 1];
        delete p;
        count--;
    }
};

int main()
{

    Db *d = new Db();

    int choice = -1;

    do
    {
        cout << "Student Database System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Remove Student" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            d->addStudent();
            break;
        case 2:
            d->removeStudent();
        case 3:
            break;
        default:
            break;
        }
    } while (choice != 3);

    return 0;
}
