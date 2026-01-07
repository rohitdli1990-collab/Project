#include<iostream>

using namespace std;
int main(){
    // Control Statement 
    // if and else statment
    int age;
    cout<<"Tell me your age:- ";
    cin>>age;
    if(age > 18){
        cout<<"you can drive"<<endl;
    }else{
        cout<<"you cannot drive"<<endl;
    }

    // if else ladder 
    int age1;
    cout<<"tell me your age:- ";
    cin>>age1;
    if (age1>18){
        cout<<"you can not come to my party"<<endl;
    }else if(age1==18){
        cout<<"you are a kid you will get a kid pass to the party"<<endl;
    }else{
        cout<<"you can come to the party"<<endl;
    }

    // switch case statements
    int days;
    cout<<"enter the days serial number";
    cin>>days;
    switch (days){
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"wednesday"<<endl;
        break;
    case 4:
        cout<<"thusday"<<endl;
        break;
    case 5:
        cout<<"friday"<<endl;
        break;
    case 6:
        cout<<"saturday"<<endl;
        break;
    case 7:
        cout<<"sunday"<<endl;
        break;
    }

    // loop control instruction
    // for loop
    for (int a = 0;a<4;a++){
        cout<<a<<endl;
    }
    
    // While loop
    int b = 1;
    while (b<5){
        cout<<b<<endl;
        b++;
    }

    // do-whie loop
    int c = 1;
    do{
        cout<<c<<endl;
        c++;
    } while (c<4);
    
    // break statement 
    for (int d= 1;d<4;d++){
        cout<<d<<endl;
        if (d==2){
            break;
        }
    }
    
    // continue statement 
    for (int e = 0;e<5;e++){
        cout<<e<<endl;
        if(e==1){
            continue;
        }
    }

    
    return 0;
}