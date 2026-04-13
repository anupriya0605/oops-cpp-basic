#include <iostream>
using namespace std;
class Base
{
   protected:
      int a;
   public:
      virtual void geta()
      {
         cout<<"Enter a: ";
         cin>>a;
      }
      virtual void display()
      {
        cout << "Base class display " << endl;
      }
};
class Derived1 : public Base
{
   protected:
      int b;
   public:
       void geta()
       {
          cout<<"Enter b: ";
          cin>>b;
       }
       void display()
       {
        cout << "Derived1 class display" << endl;
       }
};
class Derived2 : public Derived1
{
   protected:
      int c;
   public:
      void geta()
      {
         cout<<"Enter c: ";
         cin>>c;
      }
    void display()
    {
        cout << "Derived2 class display" << endl;
    }
};
class Derived3 : public Derived2
{
   protected:
      int d;
   public:
      void geta()
      {
         cout<<"Enter d: ";
         cin>>d;
      }
      void display()
    {
        cout << "Derived3 class display" << endl;
    }
};
class Derived4 : public Derived3
{
   protected:
      int e;
   public:
      void geta()
      {
         cout<<"Enter e: ";
         cin>>e;
      }
    void display()
    {
        cout << "Derived4 class display" << endl;
    }
};
class Derived5 : public Derived4
{
   protected:
      int f;
   public:
      void geta()
      {
         cout<<"Enter f: ";
         cin>>f;
      }
    void display()
    {
        cout << "Derived5 class display" << endl;
    }
};
int main()
{
    Base* b;
    Base b1;
    b=&b1;
    (*b).geta();
    (*b).display();
    Derived1 d1;
    Derived2 d2;
    Derived3 d3;
    Derived4 d4;
    Derived5 d5;
    b= &d1;
    (*b).geta();
    (*b).display();
    b= &d2;
    (*b).geta();
    (*b).display();
    b= &d3;
    (*b).geta();
    (*b).display();
    b = &d4;
    (*b).geta();
    (*b).display();
    b = &d5;
    (*b).geta();
    (*b).display();
    return 0;
}
