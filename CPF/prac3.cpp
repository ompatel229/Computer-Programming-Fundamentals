#include<iostream>
using namespace std;
int main()
{
    string en, sn, br, sem, mn;
    int m, p, cpf, tom, tm, tmps, result;
    double avg, per;

    cout<<"*****************************************************************"<<endl;
    cout<<"                STUDENT RECORD MANAGEMENT SYSTEM                 "<<endl;
    cout<<"*****************************************************************"<<endl;
    cout<<""<<endl;
    cout<<"Enter Enrollment Number : ";
    cin>>en;
    cout<<"Enter Student Name : ";
    cin.ignore();
    getline(cin, sn);
    cout<<"Enter Branch : ";
    cin>>br;
    cout<<"Enter Semester : ";
    cin>>sem;
    cout<<"Enter Mobile Number : ";
    cin>>mn;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                         STUDENT'S DETAILS                      "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Student's Enrollment Number : "<<en<<endl;
    cout<<"Student's Name              : "<<sn<<endl;
    cout<<"Student's Branch            : "<<br<<endl;
    cout<<"Student's Semester          : "<<sem<<endl;
    cout<<"Student's Mobile Number     : "<<mn<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                      ACEDAMIC INFORMATION                      "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Please Enter Total Marks Per Subject : ";
    cin>>tmps;
    cout<<"Enter Mathematics Marks : ";
    cin>>m;
    cout<<"Enter Physics Marks : ";
    cin>>p;
    cout<<"Enter Computer Programming Foundation Marks : ";
    cin>>cpf;
    cpf--;
    tom = m+p+cpf;
    avg = tom/3;
    tm = tmps*3;
    per = (tom*100)/tm;
    result= ++cpf + cpf++ + --m + ++m - m--;
    cout<<""<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                         ACEDAMIC SUMMARY                       "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Total Marks   : "<<tm<<endl;
    cout<<"Average Marks : "<<avg<<endl;
    cout<<"Percentage    : "<<per<<"%"<<endl;
    cout<<cpf<<endl;
    cout<<result<<endl;

    cout<<"                                          ~developed by Om Patel"<<endl;
    return 0;
}
