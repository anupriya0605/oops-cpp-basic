#include <iostream>
using namespace std;
class maximum;
class avg
{
private:
    int numA;
public:
    avg()
    {
        cout << "Enter the number: " << endl;
        cin >> numA;
    }
    int getNumA()
    {
        return numA;
    }
    friend class maximum;
};
class maximum
{
private:
    int numB;
public:
    maximum()
    {
        cout << "Enter second number: " << endl;
        cin >> numB;
    }
    int getNumB()
    {
        return numB;
    }
    int average(avg& a)
    {
        return (a.numA + numB) / 2;
    }
    void great(avg& a)
    {
        if (a.numA >= numB)
            cout << "Greatest number: " << a.numA << endl;
        else
            cout << "Greatest number: " << numB << endl;
    }
};
int main()
{
    avg a1;
    maximum m1;
    int avgVal = m1.average(a1);
    cout << "Average: " << avgVal << endl;
    m1.great(a1);
    return 0;
}
