/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int age,height,prop;
    string stat;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=20){
        cout<<"Enter your height: ";
        cin>>height;
        if(height<160){
            stat = "UNFRIEND";
        }else if(height<175){
            stat = "FRIEND";
        }else{
            cout<<"Enter your property: ";
            cin>>prop;
            if(prop>69000000){
                stat = "MARRIED";
            }else{
                stat = "ONE-NIGHT-STAND";
            }
        }

    }
    else if(age<30){
        cout<<"Enter your property: ";
        cin>>prop;
        if(prop>10000000){
            stat = "BEST FRIEND";
        }else{
            stat = "UNFRIEND";
        }
    }
    else{
        stat = "UNFRIEND";
    }
    cout<<"Your status = "<<stat;
}