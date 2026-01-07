#include <string>
#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c);
    void getData()
    {
        cout << "the value of a:- " << a << endl;
        cout << "the value of b:- " << b << endl;
        cout << "the value of c:- " << c << endl;
        cout << "the value of d:- " << d << endl;
        cout << "the value of e:- " << e << endl;
    }
};

void employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read()
{
    cout << "enter a binary number:- " << endl;
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) == '1';
        }
        else
        {
            s.at(i) == '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number:- " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void getPrice(void);
    void setPrice(void);
};

void Shop ::setPrice()
{
    cout << "Enter Id of your item no:- " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item:- " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::getPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

class Employee
{

    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
    }

    void getData(void)
    {
        cout << "The id of this employee is " << id;
    }

    static void getCount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};

int Employee ::count;

class Employee1
{
    string name;
    int id;
    int salary;

public:
    void setId(void)
    {
        cout << "Enter the id of employee:- ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of the employee is " << id << endl;
    }
    void setSalary(void)
    {
        cout << "Enter the salary of this employee:- ";
        cin >> salary;
    }
    void getSalary(void)
    {
        cout << "the salary of this employee is " << salary << endl;
    }
    void setName()
    {
        cout << "Enter your name:- ";
        cin >> name;
    }
    void getName()
    {
        cout << "The name of this employee is ";
    }
};

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << "+" << b << endl;
    }
};

class complex1
{
    int a, b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend complex1 sumComplex1(complex1 o1, complex1 o2);

    void printnumber()
    {
        cout << "your Complex number is " << a << "+" << b << endl;
    }
};

complex1 sumComplex1(complex1 o1, complex1 o2)
{
    complex1 o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

class complex2
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    friend complex2 sumComplex2(complex2 o1, 
    complex2 o2);
};

complex2 sumComplex2(complex2 o1, complex2 o2)
{
    complex2 o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    // Class
    employee rohit;
    rohit.d = 12;
    rohit.e = 35;
    rohit.setData(1, 23, 34);
    rohit.getData();

    // Nesting of member fuction
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();

    // Memory allocation in c++
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.getPrice();

    // Static Data member
    Employee sumit, Rohan, karan;
    sumit.setData();
    sumit.getData();
    Employee::getCount();

    karan.setData();
    karan.getData();
    Employee::getCount();

    Rohan.setData();
    Rohan.getData();
    Employee::getCount();

    // Array of objects and objects as function
    Employee1 emp[10];
    for (int i = 0; i < 2; i++)
    {
        emp[i].setName();
        emp[i].setId();
        emp[i].setSalary();
    }

    // using fuction as a object

    complex c1,c2,c3;
    int c,d,e,f;
    cout<<"Enter your first number:- ";
    cin>>c;
    cout<<"Enter your second number:- ";
    cin>>d;
    c1.setdata(c,d);
    c1.printNumber();

    cout<<"Enter your first number:- ";
    cin>>e;
    cout<<"Enter your second number:- ";
    cin>>f;
    c2.setdata(e,f);
    c2.printNumber();

    c3.setDataBySum(c1,c2);
    c3.printNumber();

    // Friend function
    complex2 h,i,sum;
    int set1,set2,set3,set4;
    cin>>set1>>set2>>set3>>set4;

    h.setNumber(set1, set2);
    i.setNumber(set3, set4);

    h.printNumber();
    i.printNumber();

    sum = sumComplex2(h,i);
    sum.printNumber();

    // 

    return 0;
}