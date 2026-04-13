#include <iostream>
using namespace std;
class Average
{
    int x, y,z;
public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> x >> y;
        cout<<"Enter divisor: ";
        cin>> z;
        if (x < 0 || y < 0)
        {
            throw "Negative value exception!";
        }
        if (z == 0)
        {
            throw 0;
        }
        if(z<0)
        {
            throw 3.14;
        }
    }
    void calculate()
    {
        cout << "Average = " << (x + y) / z << endl;
    }
};
int main()
{
    Average a1;
    try
    {
        try
        {
            a1.getData();
            a1.calculate();
        }
        catch (int)
        {
            cout << "Divide by Zero Exception" << endl;

        }
        try
        {
           a1.getData();
           a1.calculate();
        }
        catch (const char *msg)
        {
            a1.calculate();
            cout << "Inner catch: " << msg << endl;

        }
        try
        {
           a1.getData();
           a1.calculate();
        }
        catch (...)
        {
           a1.calculate();
           cout << "Default Exception!" << endl;
           throw;
        }
    }
    catch (...)
    {
        cout << "Handling Rethrown Exception!" << endl;
    }
    cout << "Program Ended." << endl;
    return 0;
}
