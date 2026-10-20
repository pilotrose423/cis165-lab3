#include <iostream>
using namespace std;

int main()
{
    int level_one_minutes = 78;
    int level_two_minutes = 144;

    int level_one_hours;
    int level_one_remaining_minutes;

    int level_two_hours;
    int level_two_remaining_minutes;

    int difference_minutes;
    int difference_hours;
    int difference_remaining_minutes;

    level_one_hours = level_one_minutes / 60;
    level_one_remaining_minutes = level_one_minutes % 60;

    level_two_hours = level_two_minutes / 60;
    level_two_remaining_minutes = level_two_minutes % 60;

    difference_minutes = level_two_minutes - level_one_minutes;

    difference_hours = difference_minutes / 60;
    difference_remaining_minutes = difference_minutes % 60;

    cout << "Level 1 Time: "
         << level_one_hours
         << " hour(s), "
         << level_one_remaining_minutes
         << " minute(s)"
         << endl;

    cout << "Level 2 Time: "
         << level_two_hours
         << " hour(s), "
         << level_two_remaining_minutes
         << " minute(s)"
         << endl;

    cout << "Difference: "
         << difference_hours
         << " hour(s), "
         << difference_remaining_minutes
         << " minute(s)"
         << endl;

    return 0;
}