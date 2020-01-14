#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

void direction(int dir,vector<int>v1,int lift,int arr[],int persons,int person_goto,int wt,int gate){
    int lwr=0;
    int hgr=0;
    int lastele=v1.size();
    
    if(dir==1){
		  sort (v1.begin(),v1.end ());
		  cout<<endl;
          lwr=v1[0];
          hgr=v1[lastele-1];
            cout<<lwr<<" "<<hgr<<endl;
            lift=lwr;
         if (lift <= persons || lift>=persons)
		{   
           
		  for (int i = lift; i <=hgr ; i++)
		    {   
		      cout << "Lift Is At " << i << endl;
		      if (gate == 0)
			{
			  if ( i == persons)
			    {
			      cout << "Gate Opens" << endl;
			        gate = 1;
			            int weight;
			                cout << "Enter Your Weight" << endl;
			                    cin >> weight;
                          wt+=weight;
			      if (wt > 500)
				{
				  cout << "OverWeight" << endl;
				}
                else{
                    cout<<"Please Enter The Lift"<<endl;
                }

			    }
			  else
			    cout << "please wait" << endl;
			}
		      if (gate == 1)
			{
			  if (i == person_goto)
			    {
			      cout << "The Lift Is At" << i <<" Door Opens" << endl;
			    }
			}
		      
		    }
		}
	      

    }
    else if(dir==2){
         if (lift <= persons||lift>=persons)
		{
		  sort (v1.begin (), v1.end (),greater<int>());
          lwr=v1[0];
          hgr=v1[lastele-1];
          lift=lwr;
            if (lift <= persons || lift>=persons)
            {   
                for (int i = lift; i <=hgr ; i++)
                    {   
                        cout << "Lift Is At " << i << endl;
                        if (gate == 0)
                        {
                            if ( i == persons)
                                {
                                cout << "Gate Opens" << endl;
                                    gate = 1;
                                        int weight = 0;
                                            cout << "Enter Your Weight" << endl;
                                                cin >> weight;
                                                wt+=weight;
                                if (wt > 500)
                                {
                                cout << "OverWeight" << endl;
                                }
                                else{
                                    cout<<"Please Enter The Lift"<<endl;
                                }

                                }
                            else
                                cout << "please wait" << endl;
                        }
                        if (gate == 1)
                        {
                            if (lift == person_goto)
                                {
                                cout << "The Lift Is At" << i <<" Door Opens" << endl;
                            }
                        }
                    
                    }
            }
		}
    }
}

void use(int dir,vector<int>v1,int lift,int arr[],int persons,int person_goto,int wt,int gate,int num,int x){
     cout << "Enter The Number Of Buttons Pressed" << endl;
	  cin >> num;

	  for (int i = 1; i <= num; i++)
	    {
	      cout << "Enter The Pre-Pressed Floor " << i << endl;
	        cin >> x;
	      v1.push_back (x);
	        cout<<"Enter The Weight Of Person Who Entered On Floor "<< i <<endl;
	            cin>>x;
	                wt+=x;
	    }
        cout<<"1) up 2) down"<<endl;
            cin>>dir;
    cout << "where the person needs to go" << endl;
	  cin >> person_goto;
	    v1.push_back (person_goto);
	     cout<<"dir is "<<dir<<endl;
	    direction(dir,v1,lift,arr,persons,person_goto,wt,gate);
}

int main(){
    int arr[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int lift = arr[0];
    int uself = 0;
    int ch;
    int num;
    int persons;
    cout<<"Enter Persons Floor"<<endl;
    cin>>persons;
    int up = 0;
    int down = 0;
    int choice;
    int person_goto;
    int weight=0;
    int x;
    int gate=0;
    int dir=0;
    int wt=0;
    vector<int>v1;
    while (uself != 1)
    {
      cout << "1) Use Lift 2) Exit" << endl;
      cin >> ch;
      if(ch==1){
          use ( dir,v1,lift,arr,persons,person_goto,wt,gate,num,x);
      }
      else{
          uself=1;
      }
    }
    return 0;
}
