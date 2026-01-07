#include<iostream>
using namespace std;

struct employee
{
    int empid;
    char favchar;
    float salary;
};

union money {
    int rice;
    char car1;
    float pound;
};


int main(){
    struct employee rohit;
    rohit.empid = 1;
    rohit.favchar = 'R';
    rohit.salary = 120000;
    cout<<rohit.empid<<endl;

    union money rupee;
    rupee.car1 = 'R';
    rupee.pound= 22.34;
    rupee.rice= 34;
    cout<<rupee.rice<<endl;

    

    return 0;
}