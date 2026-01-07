#include<iostream>
#include<iomanip>

using namespace std;

int f = 2;

void sum(){
    int a;
    cout<<f;
} 

int main(){
    // variables 
    int c1 = 2;
    cout<<"hello world "<<c1<<endl;

    // comments
    // this is a single line comment

    /*this 
    is 
    a 
    multiline 
    comment
    */

    // data type 
    // int 
    int a = 3;
    cout<<"this is the output of int: "<<a;

    // float
    float b = 4.0;
    cout<<"\n"<<b;

    // char
    char c = 'r';
    cout<<"\n"<<c;

    // double
    double d = 23.56;
    cout<<"\n"<<d;

    // boolean
    bool e = a<b;
    cout<<"\n"<<e<<"\n";

    // variable scope
    // local variable 
    int f = 12;
    cout<<f<<"\n";

    // global variable
    sum();   

    // I/O system
    int num1, num2;
    cout<<"Enter number 1:= \n";
    cin>>num1;
    cout<<"Enter number 2:= \n";
    cin>>num2;
    cout<<"sum of two number is:= "<<num1+num2<<endl;
    // for come into new line using endl
    
    // operators
    cout<<"operators in c++"<<endl;  
    cout<<endl;

    // Aritmatic operator
    int g = 89,h = 56;
    cout<<"Arithmatic operator"<<endl;
    cout<<"the value of g+h = "<<g+h<<endl;
    cout<<"the value of g-h = "<<g-h<<endl;
    cout<<"the value of g*h = "<<g*h<<endl;
    cout<<"the value of g/h = "<<g/h<<endl;
    cout<<"the value of g++ = "<<g++<<endl;
    cout<<"the value of ++g = "<<++g<<endl;
    cout<<"the value of --g = "<<--g<<endl;
    cout<<"the value of g-- = "<<g--<<endl;
    cout<<endl;

    // assingnment operator 
    // int a = 12, b= 34;
    // char = 'a'

    // Comparision operator 
    int i = 34,j = 56;
    cout<<"Comparision operator"<<endl;
    cout<<"The value of i == j is "<<(i==j)<<endl;
    cout<<"The value of i =! j is "<<(i=!j)<<endl;
    cout<<"The value of i < j is "<<(i<j)<<endl;
    cout<<"The value of i > j is "<<(i>j)<<endl;
    cout<<"The value of i <= j is "<<(i<=j)<<endl;
    cout<<"The value of i >= j is "<<(i>=j)<<endl;
    cout<<endl;

    // Logical operator
    cout<<"Logical operator";
    cout<<"The value of i==j and j==i is true? "<<((i==j)&&(j==i))<<endl;
    cout<<"The value of i==j or j==i is true? "<<((i==j)||(j<=i))<<endl;

    // for see global value of f
    cout<<"the global value of f is:- "<<::f<<endl;

    // for finding size of float and double 
    cout<<"the size of 34"<<sizeof(34)<<endl;
    cout<<"the size of 34.4"<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f"<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F"<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l"<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L"<<sizeof(34.4L)<<endl;

    // reference Variable 
    float var = 12;
    float & v = var;
    cout<<v;

    // Typecasting 
    float k = 12.343;
    cout<<(int)k;

    // Constant in C++
    const float l = 34.5;
    // l = 45.6; this give us a error 

    // manupulator in C++
    int m = 34, n = 456, o = 5656, p = 435353;
    cout<<"Without setw"<<endl;
    cout<<"the value of m is "<<m<<endl;
    cout<<"the value of n is "<<n<<endl;
    cout<<"the value of o is "<<o<<endl;
    cout<<"the value of p is "<<p<<endl;

    cout<<"with setw"<<endl;
    cout<<"the value of m is "<<setw(6)<<m<<endl;
    cout<<"the value of n is "<<setw(6)<<n<<endl;
    cout<<"the value of o is "<<setw(6)<<o<<endl;
    cout<<"the value of p is "<<setw(6)<<p<<endl;
   
    return 0;
}