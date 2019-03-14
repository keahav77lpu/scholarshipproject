/////<<*********L P U scholrship meni c++ project*****>>////

#include<fstream>
#include<conio.h>
#include<iomanip>
#include<iostream>
#include<ctime>
#include<string>
#include<bits/stdc++.h>
#include<stdlib.h>
typedef long long int lli;
using namespace std;
void intro();

//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************

void order()
	{
	ifstream input; string str;
	input.open("textoil.txt");
	if(!input)
	{
		cout<<"Sorry,file can not be open!!!"<<endl;
	}
	else
	{
			input>>str;
		while(!input.eof())
		{
			cout<<str<<"\n";
				input>>str; 
		}
	}
	input.close();
}
void design()
{
	ifstream in;string s1;
	in.open("M.txt");
	in>>s1;
	while(!in.eof())
		{
			cout<<s1<<"\n";
				in>>s1; 
		}
}
class student
{
	lli reg;
   	//char fname[70];
	float per;
	char cource[70];
   friend class studentA;
public:
 	void disp()
	{
			fstream input; string line;
	input.open("study.txt");
	if(!input)
	{
		cout<<"sorry file caanot open";
	//	return 1;
	}
	while(getline(input,line))
	{
		cout<<line<<endl;
	}
	input.close();
		   }
	

  void tw()
  {
		float maarks; 
    cout<<"\n Enter your % marks :"<<endl;
    cin>>maarks;
 if(maarks>=98)
  cout<<"\n FEES = 14500 PER SEMESTER i.e. SCHOLARSHIP OF 75000 PER SEMESTER";
else if(maarks>=90&&maarks<98)
  cout<<"\n FEES = 39500 PER SEMESTER i.e. SCHOLARSHIP OF 50000 PER SEMESTER";
   else if(maarks>=80&&maarks<90)
      cout<<"\n FEES = 49500 PER SEMESTER i.e. SCHOLARSHIP OF 40000 PER SEMESTER";
		else if(maarks>=70&&maarks<80)
	  cout<<"\n FEES = 59500 PER SEMESTER i.e. SCHOLARSHIP OF 30000 PER SEMESTER";
		  else 
	cout<<"\n Sorry you are not elegible to take admission in LPU";
	cout<<"\n Thank you for showing intreast in lpu"<<endl; 
	
	char c;
	cout<<"\n\n\n\nDo you want to display registered data (Y/N) :";
			cin>>c;
			fflush(stdin);
			if(c=='Y'||c=='y')
			{ 
			fflush(stdin);
			cout<<"\n\n\t\tYour details :\n\n";
				disp();

			}    
}

void  Lpu_nest()
{   int ch;
order();
	 cout<<"\n\nSELECT YOUR CHOICE";
	 cout<<"\n1.90% MARKS IN LPU NEST\n2.TOP 10 % STUDENT QUALIFYING\n3.11% TO 20% STUDENT QUALIFYING\n4.21% TO 35% STUDENT QUALIFYING";
	cin>>ch;
	switch(ch)
{
		case 1: cout<<"\n FEES = 14500 PER SEMESTER i.e. SCHOLARSHIP OF 75000 PER SEMESTER";
	    break;
	case 2: cout<<"\n FEES = 39500 PER SEMESTER i.e. SCHOLARSHIP OF 50000 PER SEMESTER";
	   break;
	   	case 3: cout<<"\n FEES = 49500 PER SEMESTER i.e. SCHOLARSHIP OF 40000 PER SEMESTER";
			break;
   case 4:	cout<<"\n FEES = 59500 PER SEMESTER i.e. SCHOLARSHIP OF 30000 PER SEMESTER";
					break;
	default: cout<<"\n WRONG CHOICE";
	
	char c;	 
cout<<"\n\n\n\nDo you want to display registered data (Y/N) :";
			cin>>c;
			fflush(stdin);
			if(c=='Y'||c=='y')
			{ 
			fflush(stdin);
			cout<<"\n\n\t\tYour details :\n\n";
				disp();

			}													       
}

}

void JEE_main()
{  
    int marks;
	cout<<"\n ENTER YOUR MARKS\n";
    cin>>marks;
                                         
	if(marks>200)
	{
	cout<<"\n FEES = 14500 PER SEMESTER i.e. SCHOLARSHIP OF 75000 PER SEMESTER";
	cout<<"\nYOUR REG NO is 11708567";
    }
	else if(marks>150&&marks<=200)
	{
	cout<<"\n FEES = 39500 PER SEMESTER i.e. SCHOLARSHIP OF 50000 PER SEMESTER";
	cout<<"\nYOUR REG NO is 11708567";
    }
	else if(marks>125&&marks<=150)
	{
	cout<<"\n FEES = 49500 PER SEMESTER i.e. SCHOLARSHIP OF 40000 PER SEMESTER";
	cout<<"\nYOUR REG NO is 11708567";
	}
	else if(marks>100&&marks<=125)
	{
	cout<<"\n FEES = 59500 PER SEMESTER i.e. SCHOLARSHIP OF 30000 PER SEMESTER";
    cout<<"\nYOUR REG NO is 11708567";
	}
	else 
	{
	cout<<"\n FEES = 84500 PER SEMESTER i.e. NO SCHOLARSHIP FOR YOU";   
     cout<<"\nYOUR REG NO is 11708567";
    }                                        

 char c;
 cout<<"\n\n\n\nDo you want to display registered data (Y/N) :";
			cin>>c;
			fflush(stdin);
			if(c=='Y'||c=='y')
			{ 
			fflush(stdin);
			cout<<"\n\n\t\tYour details :\n\n";
				disp();

			}
		}
};
class studentA:public student
{
		char grade;
	int fess;
	char email[20];
	char pass[20];
	char sex;
	long long int mob;
	char f1name[30];
	char f2name[30];
	//string fname;
	float schoolarship;
	public: 	
	void apply()
	{   
	   design();
	   char c; 
	   studentA stu;
	     cout<<"\n\n\t\tEnter your first Name :";
		 cin>>f1name;
		  cout<<"\n\n\t\tEnter your last Name :";
		 cin>>f2name;
		 fflush(stdin);
		 cout<<"\n\n\t\tEnter your mobile no.:";
		 cin>>mob;
	    fflush(stdin);
		cout<<"\n\n\t\tEnter sex(M/F) :";
		cin>>sex;
		fflush(stdin);
		cout<<"\n\n\n\t\tEnter your Email Id :";
		cin.get(email,20);
		fflush(stdin);
		cout<<"\n\n\t\tEnter your DOB : ";
		cin.get(pass,20);
		fflush(stdin);
		
			ofstream outfile;
	outfile.open("study.txt");
	outfile<<"Name :"<<f1name<<" "<<f2name<<"\n";
	outfile<<"Mobile no. :"<<mob<<"\n";
	outfile<<"Sex :"<<sex<<"\n";
	outfile<<"Email ID :"<<email<<"\n";
	outfile<<"date of birth :"<<pass<<"\n";
			
			cout<<"\n\n************Registered successfully****************";
			
			fflush(stdin);
			outfile.close();
		  }	   
	  	
	  	void graduation()
{

		char ch;
		design();
	cout<<"\n\nSELECT YOUR CHOICE\n"<<endl;
	cout<<"\n 1.B-TECH\n"<<endl;
	cout<<"\n 2.BBA\n"<<endl;
	cout<<"\n 3.BCA\n"<<endl;
	cout<<"\n 4.EXIT\n"<<endl;
	cout<<"\n\n\tPlease Select Your Option (1-4) ";
		cin>>ch;
		switch(ch)
		{
			case '1': btech();
				break;
			case '2': bba();
				break;
			case '3': bca();
				break;
			case '4':
				break;
			default :cout<<"\a";
		}
}

void diploma()
{
		char ch;
		order();
	cout<<"\n\nSELECT YOUR CHOICE\n"<<endl;
	cout<<"\n 1.B-TECH\n"<<endl;
	cout<<"\n 2.BBA\n"<<endl;
	cout<<"\n 3.BCA\n"<<endl;
	cout<<"\n 4.EXIT\n"<<endl;
	cout<<"\n\n\tPlease Select Your Option (1-4) ";
		cin>>ch;
		switch(ch)
		{
			case '1': btech();
				break;
			case '2': bba();
				break;
			case '3': bca();
				break;
			case '4':
				break;
			default :cout<<"\a";
		}
}
void btech()
{
    char ch;
    order();
	cout<<"\nnscholarship based upon :\n";
	cout<<"\n 1.JEE main"<<endl;
	cout<<"\n 2.LPUNEST"<<endl;
	cout<<"\n 3.12th "<<endl;
    cout<<"\n\n\tPlease Select Your Option (1-3) ";
		cin>>ch;
		switch(ch)
		{
			case '1': JEE_main();
				break;
			case '2': Lpu_nest();
				break;
			case '3': tw();
				break;
		}
    
}
void bba()
{
	order();
	cout<<"\nnscholarship based upon :\n";
//	cout<<"\n 1.JEE main"<<endl;
	cout<<"\n 1.LPUNEST"<<endl;
	cout<<"\n 2.12th "<<endl;
	cout<<"\n\n\tPlease Select Your Option (1-2) ";
	     char ch;
		cin>>ch;
		switch(ch)
		{
			case '1': Lpu_nest();
				break;
			case '2': tw();
				break;
        }
}
void bca()
{
	order();
	cout<<"\nnscholarship based upon :\n";
	//cout<<"\n .JEE main"<<endl;
	cout<<"\n 1.LPUNEST"<<endl;
	cout<<"\n 2.12th "<<endl;
	cout<<"\n\n\tPlease Select Your Option (1-2) ";
		char ch;
		cin>>ch;
		switch(ch)
		{
			case '1': Lpu_nest();
				break;
			case '2': tw();
				break;
}
}

};


//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************

void intro()
{
	cout<<"\n\n\n\t \t\t\t\t\t WELCOME TO LOVELY PROFESIONAL UNIVERSITY SIR/MA'AM..\n\n"<<endl;
	cout<<"**************************************************************";
	cout<<"\t\t\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*";
	cout<<"\n\n\tPROJECT MADE BY : KESHAV SINGH";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tSUBMITTED TO: Dr. PRADEEP SIR"<<endl;
	cout<<"\n\tCOLLEGE : LOVELY PROFESIONAL UNIVERSITY\n\n"<<endl;
	cout<<"**************************************************************";
	cout<<"\t\t\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*";
	
}

int main()
{   
    studentA *s;
	char ch;
	int pas;
	time_t now = time(0);
	struct tm *ltm = localtime(&now);
	cout<<"\n\t\t\t\t\t\t\t\tTODAY date is  :"<<ltm->tm_mday<<"/"<<1 + ltm->tm_mon<<"/"<<1900 + ltm->tm_year;
	cout.setf(ios::fixed|ios::showpoint);
	cout<<setprecision(2); // program outputs decimal number to two decimal places
	cout<<"\n\n\n\t\t\t\t\t\t\t  Enter your PASSWORD TO UNLOCK:";
	cin>>pas;
	if(pas==11709237)
	{
	intro();
	do
	{
			
		cout<<"\n\n\n\t Please select your BRANCH ";
		cout<<"\n\n\t01.Graduation ";
		cout<<"\n\n\t02.Diploma";
		cout<<"\n\n\t03.Apply";
		cout<<"\n\n\t04.Exit";
		cout<<"\n\n\tPlease Select Your Option (1-4) :";
		cin>>ch;
		switch(ch)
		{
			case '1': s->graduation();
				break;
			case '2': s->diploma();
				break;
			case '3': s->apply();
			    break;
				case '4':	
			default :cout<<"\a";
		}
    	}while(ch!='4');
	return 0;
}
}

//***************************************************************
//    			END OF PROJECT
//***************************************************************
