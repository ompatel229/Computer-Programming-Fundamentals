#include<iostream>
using namespace std;
int main()
{
    int choice;
    string en, sn, br, sem, mn;
    int m, p, cpf, tom, tm, tmps, result;
    float avg, per;

    cout<<"---------------------------Main Menu-----------------------------"<<endl;
    cout<<"1. Student New Registration"<<endl;
    cout<<"2. Display Student Record"<<endl;
    cout<<"3. Enter Student Marks"<<endl;
    cout<<"4. Display Academic Result"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<""<<endl;
    cout<<"Enter Choice : ";
    cin>>choice;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    switch(choice)
    {
    case 1:
        {
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                      STUDENT'S REGESTRATION                    "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
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
    break;
        }
    case 2:
        {
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                      STUDENT'S REGESTRATION                    "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
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
    break;
        }
    case 3:
        {
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
    tom = m+p+cpf;
    avg = (float)tom/3;
    tm = tmps*3;
    per = (float)(tom*100)/tm;
    cout<<""<<endl;
    cout<<""<<endl;
    break;
        }
    case 4:
        {
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
    tom = m+p+cpf;
    avg = (float)tom/3;
    tm = tmps*3;
    per = (float)(tom*100)/tm;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                         ACEDAMIC SUMMARY                       "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Total Marks   : "<<tm<<endl;
    cout<<"Average Marks : "<<avg<<endl;
    cout<<"Percentage    : "<<per<<"%"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                         ACEDAMIC SUMMARY                       "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    if(tom>=150)
    {
        cout<<"Congratulations! You have successfully passed the examinations."<<endl;
        cout<<"Result        : PASS"<<endl;

    }
    else{
        cout<<"Result        : FAIL"<<endl;
        cout<<"Better luck next time! You have not passed the examinations."<<endl;
    }
    if(per>100||per<0)
        {
            cout<<"Invalid Percentage";
        }
        else if(per>=90)
        {
            cout<<"Grade         : O"<<endl;
            cout<<"Perfromance   : Outstanding";
        }
        else if(per>=80)
        {
            cout<<"Grade         : A+"<<endl;
            cout<<"Perfromance   : Excellent";
        }
        else if(per>=70)
        {
            cout<<"Grade         : A"<<endl;
            cout<<"Perfromance   : Very Good";
        }
        else if(per>=60)
        {
            cout<<"Grade         : B+"<<endl;
            cout<<"Perfromance   : Good";
        }
        else if(per>=50)
        {
            cout<<"Grade         : B"<<endl;
            cout<<"Perfromance   : Satisfactory";
        }
        else
        {
        cout<<"You Have Failed The Exam."<<endl;
        }
    }
    case 5:
        {
            exit(0);
        }
    }
    
    cout<<"                                          ~developed by Om Patel"<<endl;
    return 0;
}
