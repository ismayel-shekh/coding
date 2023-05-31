#include<bits/stdc++.h>
using namespace std;
class student
{
    public: 
    char name[100];
    int roll;
    int cls;
    char section;         

};
int main()
{
    // student s;
    // s.roll = 29;
    // s.section = 'A';
    // s.cls = 9;
    // char nm[100];
    // strcpy(s.name,nm);
    student rohim;
        rohim.roll=10;
        rohim.cls=5;
        rohim.section='A';
        char nm[100]="rohim King";
        strcpy(rohim.name,nm);

    student korim;
        korim.roll=20;
        korim.cls=6;
        korim.section='B';
        char lm[100]="korim lion";
        strcpy(korim.name,lm);

        cout<<korim.section;
    return 0;    
}