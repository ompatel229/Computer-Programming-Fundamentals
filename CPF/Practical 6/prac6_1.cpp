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
    cout<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                     PARTICIPANT PERFORMANCE                                 "<<endl;
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
    for(int k=0; k<n; k++)
    {
        totalscore += score[k];
    }
    cout<<"Total Score : "<<totalscore<<endl;
    avgscore = (float)totalscore/n;
    cout<<"Average Score : "<<avgscore<<endl;
  for(int l=0; l<n; l++)
    {
        if(min>score[l])
        {
            min = score[l];
        }
    }
    for(int m=0; m<n; m++)
    {
        if(max<score[m])
        {
            max = score[m];
        }
    }
    cout<<"Highest Score : "<<max<<endl;
    cout<<"Lowest Score : "<<min<<endl;
    
    cout<<"                                                                       ~developed by Om Patel"<<endl;
}