#include <iostream>
using namespace std;
class DCMotor
{
protected:
    float emf, Ia;
    float voltage, current;

public:
    void getdata()
    {
        cout << "Enter emf: ";
        cin >> emf;
        cout << "Enter Ia: ";
        cin >> Ia;
    }
    void display()
    {
        cout << "Voltage: " << voltage << " V" << endl;
        cout << "Current: " << current << " A" << endl;
    }
};
class SeriesMotor : public DCMotor
{
public:
    void calculate(float Ra, float Rs)
    {
        voltage = emf + (Ia * (Ra + Rs)); // V = E + Ia*(Ra + Rs)
        current = Ia;
    }
    void getdetails()
    {
        cout << "Series Motor:" << endl;
        display();
    }
};
class ShuntMotor : public DCMotor
{
public:
    void calculate(float Ra, float Rsh) {
        voltage = emf + (Ia * Ra);
        float Ish = voltage / Rsh;
        current = Ia + Ish;
    }
    void getdetails()
    {
        cout << "\nShunt Motor:" << endl;
        display();
    }
};
class CompoundMotor : public DCMotor {
public:
    void calculate(float Ra, float Rs, float Rsh)
    {
        voltage = emf + (Ia * (Ra + Rs));
        float Ish = voltage / Rsh;
        current = Ia + Ish;
    }
    void getdetails()
    {
        cout << "\nCompound Motor:" << endl;
        display();
    }
};
int main()
{
    SeriesMotor se;
    se.getdata();
    se.calculate(1.2, 6);
    se.getdetails();
    ShuntMotor sh;
    sh.getdata();
    sh.calculate(1.2, 75);
    sh.getdetails();
    CompoundMotor co;
    co.getdata();
    co.calculate(1.2, 6, 75);
    co.getdetails();
    return 0;
}
