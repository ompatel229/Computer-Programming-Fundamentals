#include<iostream>
using namespace std;
int main()
{
    int n, min=100, max=0;
    cout<<"*********************************************************************************************"<<endl;
    cout<<"                               SPORTS EVENT SCORE ANALYSIS                                   "<<endl;
    cout<<"*********************************************************************************************"<<endl;
    cout<<"Enter Number of Participants : ";
    cin>>n;
    cout<<endl;
    string pname[n];
    int score[n], totalscore=0, pid[n];
    float avgscore;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter Participant ID : ";
        cin>>pid[i];
        cout<<"Enter Participant Name : ";
        cin.ignore();
        getline(cin, pname[i]);
        cout<<"Enter Score : ";
        cin>>score[i];
        cout<<endl;
    }
    
    int sid, index;
    cout<<"Search Participant\n Enter Participant ID : ";
    cin>>sid;
    cout<<endl;
    for(int a=0; a<n; a++)
    {
        if(sid==pid[a])
        {
            index=a;
        }
    }
    cout<<"---------------------------------"<<endl;
    cout<<"       Participant Found         "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"ID    : "<<pid[index]<<endl;
    cout<<"Name  : "<<pname[index]<<endl;
    cout<<"Score : "<<score[index]<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<endl;
    cout<<endl;

    int temp;
    string tempname;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(score[i]<score[j])
            {
                temp=score[j];
                score[j]=score[i];
                score[i]=temp;
//swapping participant id and name according to score
                temp=pid[j];    
                pid[j]=pid[i];
                pid[i]=temp;

                tempname=pname[j];
                pname[j]=pname[i];
                pname[i]=tempname;
            }
        }
    }
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                        PERFORMANCE RANKING                                  "<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"ID \tName\tScore"<<endl;
    for(int j=0; j<n; j++)
    {
        cout<<pid[j]<<"\t";
        cout<<pname[j]<<"\t";
        cout<<score[j]<<endl;
    }
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    
    cout<<"                                                                       ~developed by Om Patel"<<endl;
}