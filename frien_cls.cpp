#include <iostream>
using namespace std;
class Distance
{
private:
    int feet, inches;
public:
    void getdata()
    {
        cout << "Enter feet value: ";
        cin >> feet;
        cout << "Enter inches value: ";
        cin >> inches;
    }
    void print() const {
        cout << "Feet: " << feet << " ' ";
        cout << "Inches: " << inches <<endl;
    }
    friend Distance operator+(Distance& d1,Distance& d2);
};
Distance operator+(Distance& d1,Distance& d2)
{
    Distance temp;
    temp.feet = d1.feet + d2.feet;
    temp.inches = d1.inches + d2.inches;
    if (temp.inches >= 12) {
        temp.feet += temp.inches / 12;
        temp.inches = temp.inches % 12;
    }
    return temp;
}
int main()
{
    Distance c1, c2, c3;
    c1.getdata();
    c1.print();
    c2.getdata();
    c2.print();
    c3 = c1 + c2;
    cout << "Sum of distances:\n";
    c3.print();
    return 0;
}
