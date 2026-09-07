#include<iostream>
using namespace std;
int main()
{
    int tmps, m, p, cpf, tom, tm;
    double avg, per;
    cout<<"Please Enter Total Marks Per Subject : ";
    cin>>tmps;
    cout<<"Enter Mathematics Marks : ";
    cin>>m;
    cout<<"Enter Physics Marks : ";
    cin>>p;
    cout<<"Enter Computer Programming Foundation Marks : ";
    cin>>cpf;
    tom = m+p+cpf;
    avg = tom/3;
    tm = tmps*3;
    per = (tom*100)/tm;
    cout<<endl;
    cout<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                         ACEDAMIC SUMMARY                       "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Total Marks   : "<<tom<<endl;
    cout<<"Average Marks : "<<avg<<endl;
    cout<<"Percentage    : "<<per<<"%"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                                          ~developed by Om Patel"<<endl;
}