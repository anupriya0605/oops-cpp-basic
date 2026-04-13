#include<iostream>
using namespace std;
class octal
{
    int oct, dec, i;
public:
    octal(int d)
    {
        dec = d;
        oct = 0;
        i = 1;
        while (dec != 0)
        {
            oct = oct + (dec % 8) * i;
            dec = dec / 8;
            i = i * 10;
        }
    }
    octal operator=(int dec)
    {
        return octal(dec);
    }
    octal operator+(octal o2)
    {
        int dec1 = 0, dec2 = 0;
        int temp1 = oct;
        int temp2 = o2.oct;
        int i = 1;
        while (temp1 != 0)
        {
            dec1 = dec1 + (temp1 % 10) * i;
            temp1 = temp1 / 10;
            i = i * 8;
        }
        i = 1;
        while (temp2 != 0)
        {
            dec2 = dec2 + (temp2 % 10) * i;
            temp2 = temp2 / 10;
            i = i * 8;
        }
        return octal(dec1 + dec2);
    }
    void display()
    {
        cout << oct << endl;
    }
};
int main()
{
    octal o1 = 23;
    octal o2 = 26;
    octal o3 = o1 + o2;
    cout<<"The octal number of 1st number is:";
    o1.display();
    cout<<"The octal number of 2nd number is:";
    o2.display();
    cout<<"The addition is:";
    o3.display();
    return 0;
}
