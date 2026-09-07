#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"*********************************************************************************************"<<endl;
    cout<<"                              STUDENT RECORD MANAGEMENT SYSTEM                               "<<endl;
    cout<<"*********************************************************************************************"<<endl;
    cout<<"Enter Max Number Of Students : ";
    cin>>m;
    cout<<"Enter Number Of Students To Register : ";
    cin>>n;
    cout<<endl;
    cout<<endl;

    if(n>m)
    {
        cout<<"Error : Number Of Students To Register Cannot Be Greater Than Max Number Of Students"<<endl;
        return 0;
    }

    int en[m], per[m];
    string name[m], grade[m];
        cout<<"---------------------------------------------------------------------------------------------"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"                              PLEASE ENTER STUDENT DETAILS                                   "<<endl;
        cout<<"Enter Student Enrollment Number : ";
        cin>>en[i];
        cout<<"Enter Student Name : ";
        cin>>name[i];
        cout<<"Enter Student Percentage : ";
        cin>>per[i];
        cout<<"Student's Grade : ";
        cin>>grade[i];
        cout<<endl;
        cout<<endl;
    }
        cout<<"---------------------------------------------------------------------------------------------"<<endl;
        cout<<"                                    CURRENT STUDENT RECORD                                  "<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<en[i]<<"\t"<<name[i]<<"\t"<<per[i]<<"\t"<<grade[i]<<endl;
        }
        cout<<endl;
        cout<<"---------------------------------------------------------------------------------------------"<<endl;
        int pos, p;
        cout<<"Please Enter Position : ";
        cin>>p;
        pos = p-1;
        for(int i=n-1; i>=pos; i--)
        {
            en[i+1] = en[i];
            name[i+1] = name[i];
            per[i+1] = per[i];
            grade[i+1] = grade[i];
        }
        cout<<endl;
        cout<<"                              PLEASE ENTER STUDENT DETAILS                                   "<<endl;
        cout<<"Enter Student Enrollment Number : ";
        cin>>en[pos];
        cout<<"Enter Student Name : ";
        cin>>name[pos];
        cout<<"Enter Student Percentage : ";
        cin>>per[pos];
        cout<<"Student's Grade : ";
        cin>>grade[pos];
        cout<<"Record Inserted Successfully"<<endl;
        cout<<endl;
    
        cout<<"---------------------------------------------------------------------------------------------"<<endl;
        cout<<"                                   UPDATED STUDENT RECORD                                  "<<endl;
        for(int i=0; i<=n; i++)
        {
            cout<<en[i]<<"\t"<<name[i]<<"\t"<<per[i]<<"\t"<<grade[i]<<endl;
        }
        cout<<endl;
        cout<<"---------------------------------------------------------------------------------------------"<<endl;
        cout<<"                                    UPDATE STUDENT RECORD                                    "<<endl;
        int ern, index;
        cout<<"Enter Enrollment Number : ";
        cin>>ern;
        cout<<endl;
    for(int i=0; i<n; i++)
    {
        if(ern==en[i])
        {
            index=i;
        }  
    }
    cout<<"Enter New Percentage : ";
    cin>>per[index];
    cout<<"Enter New Grade      : ";
    cin>>grade[index];
    cout<<"Record Updated Successfully."<<endl;
    cout<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                   UPDATED STUDENT RECORD                                  "<<endl;
    for(int i=0; i<=n; i++)
    {
        cout<<en[i]<<"\t"<<name[i]<<"\t"<<per[i]<<"\t"<<grade[i]<<endl;
    }
    cout<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                    DELETE STUDENT RECORD                                   "<<endl;
    int a, ai;
    cout<<"Enter Position : ";
    cin>>a;
    ai = a-1;
    for(int i=ai; i<n-1; i++)
    {
        en[i] = en[i+1];
        name[i] = name[i+1];
        per[i] = per[i+1];
        grade[i] = grade[i+1];
    }
    cout<<"Record Deleted Successfully"<<endl;
    cout<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                     FINAL STUDENT RECORD                                   "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<en[i]<<"\t"<<name[i]<<"\t"<<per[i]<<"\t"<<grade[i]<<endl;
    }
    cout<<endl;
}