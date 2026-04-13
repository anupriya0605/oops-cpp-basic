#include <iostream>
#include <string>
using namespace std;
class Str
{
    string data;
public:
    Str(string s=" ")
    {
        data = s;
    }
    void display()
    {
        cout<<data<<endl;
    }
    Str operator-(char ch)
    {
        string result = data;
        for (int i = 0;i<result.length();i++)
        {
            if (result[i] == ch)
            {
                result[i] = '*';
            }
        }
        return Str(result);
    }
};
int main()
{
    string input;
    char ch;
    cout << "Enter a string: ";
    cin >> input;
    Str s1(input);
    cout << "Enter character to remove: ";
    cin >> ch;
    Str s2 = s1 - ch;
    cout << "Original string: ";
    s1.display();
    cout << "After removing '" << ch << "': ";
    s2.display();
    return 0;
}
