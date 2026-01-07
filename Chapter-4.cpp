#include<iostream>
using namespace std;

int main(){
    // Pointer
    int a = 3;
    int* b= &a;
    
    // Address of operator 
    cout<<"the address of a is  "<<b<<endl;

    // dereference of operator 
    cout<<"the value of address b is  "<<*b<<endl;

    // Arrays
    int c[3] = {23,45,67};
    cout<<c[0]<<endl;
    cout<<c[1]<<endl;
    cout<<c[2]<<endl;

    // type of storing data in array 
    // type 1 :- multiline assingment 
    int d[4];
    d[0]= 23;
    d[1]= 25;
    d[2]= 28;
    d[3]= 20;
    cout<<"the value of type 1 is  "<<d[0]<<endl;

    // type 2 :- singleline assingment 
    int e[3] = {267,4567,67676};
    cout<<e[0]<<endl;
    cout<<e[1]<<endl;
    cout<<e[2]<<endl;

    // print of array using a loop
    for (int i = 0; i < 4; i++) {
        cout<<d[i]<<endl;
    }

    // print of array using while loop
    int f = 0;
    while (f < 4) {
        cout<<c[f]<<endl;
        f++;
    }
    
    return 0;

}