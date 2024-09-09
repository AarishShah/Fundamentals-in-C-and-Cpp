#include <iostream>
#include <stdlib.h> // for exit fn
using namespace std;

class attendance
{
private:
    double Criteria, Classes_attended, Total_classes_held;

public:
    attendance(double c = 75, double a = 0, double b = 1) // constructor
    {
        set_Criteria(c);
        set_Attended(a);
        set_Total_classes_held(b);
    }

    // mutators
    void set_Attended(double a)
    {
        Classes_attended = a;
    }

    void set_Total_classes_held(double b)
    {
        Total_classes_held = b;
    }

    void set_Criteria(double c)
    {
        Criteria = c / 100;
    }

    // accessors
    double get_Attended()
    {
        return Classes_attended;
    }

    double get_Total_classes_held()
    {
        return Total_classes_held;
    }

    double get_Criteria()
    {
        return Criteria;
    }

    double get_Attendance_ratio()
    {
        double Attendance_ratio = (Classes_attended / Total_classes_held);
        return Attendance_ratio;
    }

    void get_Attendance_percentage()
    {

        if (Argument_verifier() == 1)
        {
            exit(0); // The program would terminate if invalid arguments are inputted
        }
        else
        {
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "Current attendance: " << (get_Attendance_ratio() * 100) << "%" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
    }

    // Verification of Incorrect Arguments inputted by a user
    int Argument_verifier()
    {
        if (Criteria <= 0 || Classes_attended < 0 || Total_classes_held <= 0 || Classes_attended > Total_classes_held)
        {
            cout << "Incorrect argument(s)." << endl;
            return 1;
        }
        else
            return 2;
    }

    // selects whether a user wants to know the shortage or the excess classes that may be skipped
    void selector()
    {
        if (get_Attendance_ratio() < get_Criteria())
            shortage();

        else
            excess();
    }

    void shortage()
    {
        int trigger = 0, i = 0;
        double variable_attendance_ratio = 0, m, n;
        m = get_Attended();
        n = get_Total_classes_held();

        for (int i = 0; i < 36500; i++)
        {
            variable_attendance_ratio = m / n;
            m++;
            n++;

            if (variable_attendance_ratio >= get_Criteria())
            {
                switch (i) // To fix grammatical errors. Case 1 is for Sinlugar & Case 2 is for Plural.
                {
                case 1: // Test Case(rare case): 75/7.4/10 (could not find whole numbers)
                    cout << "You need to attend " << i << " more class to get attendance of " << (i + get_Attended()) / (i + get_Total_classes_held()) * 100 << "%." << endl;
                    trigger = 10;
                    break;

                default: // Test Case(normal case): 75/5/10
                    cout << "You need to attend " << i << " more classes to get attendance above " << get_Criteria() * 100 << "%, after which your attendace will be: " << (i + get_Attended()) / (i + get_Total_classes_held()) * 100 << "%." << endl;
                    trigger = 10;
                    break;
                }
                break;
            }
        }
        if (trigger == 0)
        {
            cout << "The attendance percentage could not reach " << get_Criteria() * 100 << "% in next 36500 days." << endl; // This is never occur unless someone is messing around. Test Case: 75/1/30,000
        }
    }

    void excess()
    {
        int i = 0;
        double variable_attendance_ratio = 0, m, n;
        m = get_Attended();
        n = get_Total_classes_held();

        for (int i = 0; i < 36500; i++)
        {
            variable_attendance_ratio = m / n;
            n++;

            if (variable_attendance_ratio < get_Criteria())
            {
                if ((i - 1) == 0) // has more than required attendace but skipping even one class would result in shortage.
                    cout << "You may skip no classes. If you skip a class your attendance will be: " << (get_Attended() / (get_Total_classes_held() + 1)) * 100 << "%."; // Test Case: 75/8/10
                else
                 switch (i - 1) {
                        case 1:
                           cout<< "You could skip " << (i - 1) << " class. After skipping " << (i - 1) << " class your attendance will be: " << (get_Attended() / (get_Total_classes_held() + (i - 1))) * 100 << "%."<< endl; // Test Case(normal case): 75/8.4/10
                            break;
                        default:
                            cout<< "You could skip " << (i - 1) << " classes. After skipping " << (i - 1) << " classes your attendance will be: " << (get_Attended() / (get_Total_classes_held() + (i - 1))) * 100 << "%."<< endl; // Test Case(normal case): 75/10/11
                            break;
                    }
                    cout << "After skipping " << i - 1 << " classes your attendance will be: " << (get_Attended() / (get_Total_classes_held() + (i - 1))) * 100 << endl; // Test Case(normal case): 75/10/11
                break;
            }

            else if (variable_attendance_ratio == get_Criteria())
            {
                if (i == 0) // when no classes can be skipped as attendace is equal to criteria
                    cout << "Your attendace is exactly " << get_Criteria() * 100 << "% and hence you may skip no classes. If you skip a class your attendance will be: " << (get_Attended() / (get_Total_classes_held() + 1)) * 100 << "%."; // Test Case: 75/6/8

                else // when the loop eventually reaches value exactly equal to criteria
                    cout << "After skipping " << i << " classes your attendance will be " << get_Criteria() * 100 << "%." << endl; // Test Case: 75/6/7

                break;
            }
        }
    }
};
int main()
{
    double value_1, value_2, value_3;

    cout << "Enter the attendace percentage criteria set by your institution: ";
    cin >> value_3;

    cout << "Enter the number of days attended: ";
    cin >> value_1;

    cout << "Enter total number of classes: ";
    cin >> value_2;

    attendance a1(value_3, value_1, value_2);

    a1.get_Attendance_percentage();
    a1.selector();
}