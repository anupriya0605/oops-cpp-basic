#include <iostream>
using namespace std;
class Time
{
    int hour, min, sec;
public:
    Time(int hr, int mm, int ss)
    {
        hour = hr;
        min = mm;
        sec = ss;
    }
    void convert()
    {
        if (sec >= 60)
        {
            min += sec / 60;
            sec %= 60;
        }
        if (min >= 60)
        {
            hour += min / 60;
            min %= 60;
        }
        if (sec < 0)
        {
            sec += 60;
            min--;
        }
        if (min < 0)
        {
            min += 60;
            hour--;
        }
        if (hour < 0)
        {
            hour = min = sec = 0;
        }
    }
    void display()
    {
        cout << hour << ":" << min << ":" << sec << endl;
    }
    Time operator++()
    {
        int newSec = sec + 1;
        int newMin = min;
        int newHour = hour;
        Time temp(newHour, newMin, newSec);
        temp.convert();
        return temp;
    }
    Time operator++(int)
    {
        Time temp(hour, min, sec);
        sec++;
        convert();
        return temp;
    }
    Time operator--()
    {
        int newSec = sec - 1;
        int newMin = min;
        int newHour = hour;
        Time temp(newHour, newMin, newSec);
        temp.convert();
        return temp;
    }
    Time operator--(int)
    {
        Time temp(hour, min, sec);
        sec--;
        convert();
        return temp;
    }
};
int main()
{
    Time t1(8, 30, 57);
    cout << "Initial Time: ";
    t1.display();
    cout << "After Pre-increment: ";
    Time ti=++t1;
    ti.display();
    cout << "After Post-increment: ";
    Time t2=t1++;
    t2.display();
    cout << "Current Time: ";
    t1.display();
    cout << "After Pre-decrement: ";
    Time t3=--t1;
    t3.display();
    cout << "After Post-decrement: ";
    Time t4=t1--;
    t4.display();
    cout << "Current Time: ";
    t1.display();
    return 0;
}
