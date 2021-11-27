#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

void uniqueCheck();
void show();
void addStudent();
void last();

class Name_value
{
    public:
        string name;
        int value;
};

vector<Name_value> names;

int main()
{
    for (int i = 0; ; i++)
    {
        char c;
        int select;

        cout << "Input 1 to enter student details" << endl;
        cout << "Input 2 to see student details"<< endl;
        cout << "Input 3 to check if student is unique"<< endl;

        cin >> select;

        switch (select)
        {
            case 1:
                addStudent();
                break;

            case 2:
                show();
                break;

            case 3:
                uniqueCheck();
                break;

            default:
                cout <<"Invalid selection." << endl;
                break;
        }

        cout << "Do you wish to restart? (y/n)" << endl;
        cin >> c;
        
        if (c == 'y')
            continue;

        else if (c == 'n')
            break;

        else 
        {
            cout <<"Invalid choice" << endl;
            break;
        }
    }

    last();

}

void uniqueCheck()
{
    int count = 0;
    for (int i = 0; i < names.size();i++)
    {
        for (int j = i+1; j <(names.size()); j++)
        {
            if(names[i].name.compare(names[j].name) == 0)
            {
                count++;
                break;
            }

        }

            if(count!=0)
            {
                cout << "Names cannot be the same." << endl;
                break;
            }

            else 
            {
                cout << "No duplicates." << endl;
                break;
            }
    }

} 

void show()
{
    for (int i = 0; i < names.size();i++)
    {
        cout << "Name: "<<names[i].name<<" Score: "<< names[i].value<< endl;
    }
}

void addStudent()
{
    Name_value n;
    cout << "Enter name: "<< endl;
    cin >> n.name;

    cout <<"Enter value: "<< endl;
    cin >> n.value;

    names.push_back(n);
}

void last()
{
    Name_value n;
    n.name = "NoName";
    n.value = 0;
    names.push_back(n);
}
