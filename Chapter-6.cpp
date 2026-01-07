#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

int multi(int a, int b);

void hello(){
    cout<<"hello world"<<endl;    
}

void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReferenceVar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

inline int divide(int a, int b){
    return a/b;
}

int product(int a,int b){
    static int c = 0;
    c = c+1;
    return a*b+c;
}

float moneyRecevied(float cureentmoney, float factor=1.8f){
    return cureentmoney * factor;
}

int factorial(int a){
    if (a<=1){
        return 1;
    }
    return a * factorial(a-1);
}

int subtract(int a,int b){
    return a-b;
}

int subtract(int a,int b,int c){
    return a-(b-c);
}

int main(){
    // function in c++
    int num1, num2;
    cout<<"Enter the number 1:-  "<<endl;
    cin>>num1;
    cout<<"Enter the number 2:-  "<<endl;
    cin>>num2;
    cout<<"the sum of number 1 and number 2 is:- "<<sum(num1,num2)<<endl;

    // function prototyping 
    int num3, num4;
    cout<<"enter the number 1:- "<<endl;
    cin>>num3;
    cout<<"enter the number 2:- "<<endl;
    cin>>num4;
    cout<<"the multiplication of "<<num3<<" and "<<num4<<" is "<<multi(num3,num4)<<endl;

    // void function 
    hello();

    // call by reference using pointers
    int a, b;
    cout<<"Enter the value 1:- ";
    cin>>a;
    cout<<"Enter the value 2:- ";
    cin>>b;
    swapPointer(&a,&b);
    cout<<"the value of a is "<<a<<" the value of b is "<<b<<endl;

    // call by refernce using reference variable 
    int c,d;
    cout<<"Enter the value of c:- ";
    cin>>c;
    cout<<"Enter the value of d:- ";
    cin>>d;
    swapReferenceVar(c,d);
    cout<<"the value of c is "<<c<<" the value of d is "<<d<<endl;

    // inline function 
    int e,f;
    cout<<"Enter the value of e and f:- "<<endl;
    cin>>e>>f;
    cout<<"the result of e and f:- "<<divide(e,f)<<endl;

    // static function 
    int g,h;
    cout<<"Enter the number 1:- "<<endl;
    cin>>g;
    cout<<"Enter the number 2:- "<<endl;
    cin>>h;
    cout<<"the value of of h is "<<h<<endl;

    // default value 
    float money;
    cout<<"Enter how much money you have:- ";
    cin>>money;
    cout<<"the value of current money with factor is "<<moneyRecevied(money)<<" in the end of the year."<<endl;

    // Recusion of fuction 
    // factorial of a number 
    int i;
    cout<<"enter a number:- ";
    cin>>i;
    cout<<"The factorial of "<<i<<" is "<<factorial(i)<<endl;

    // function overloading 
    int j,k,l;
    cout<<"Enter the number 1 and number 2:- ";
    cin>>j>>k;
    cout<<"the result of j and k is "<<subtract(j,k)<<endl;
    cout<<"Enter the number 1 and number 2 and number 3 :- ";
    cin>>j>>k>>l;
    cout<<"the result of j and k and l is "<<subtract(j,k,l);

    return 0;
}

int multi(int a, int b){
    int c = a*b;
    return c;
}