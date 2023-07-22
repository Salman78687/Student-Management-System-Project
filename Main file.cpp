#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <dos.h>
#include <fstream>
#include <sstream>
#include <stack>
using namespace std;


//used for encryption of passwords
struct Hash {
    const int p = 31, m = 1e9 + 7;
    int hash_value;
    Hash(const string& s) {
        int hash_so_far = 0;
        long p_pow = 1;
        const int n = s.length();
        for (int i = 0; i < n; ++i) {
            hash_so_far = (hash_so_far + (s[i] - 'a' + 1) * p_pow) % m;
            p_pow = (p_pow * p) % m;
        }
        hash_value = hash_so_far;
    }
    bool operator==(const Hash& other) {
        return (hash_value == other.hash_value);
    }
};

//prototypes for all the functions
void projectinfo();
void title();
void login();
void signup();
void data();
void ahad();
void abdulrehman();
void salman();
void reverseString(string &str);
void marks(string);
void sortmarks();
void extraoptions(string);
void fees(string);
void mainscreen();
void title();
void password_manager();
void gpa_calculator(); 

void arrowHere(int realPosition, int arrowPosition)
{
	if (realPosition == arrowPosition)
	{
		cout << "====>  ";
	}
	else
	{
		cout << "     ";
	}
}


void title(){
	cout <<" ";
	for(int i=0;i<68;i++){
	 	cout << "\xB2";
	}
		cout << endl 
         << "|  _____ _             _            _    ______          _        _  |" << endl
         << "| /  ___| |           | |          | |   | ___ \\        | |      | | |" << endl
         << "| \\ `--.| |_ _   _  __| | ___ _ __ | |_  | |_/ /__  _ __| |_ __ _| | |" << endl
         << "|  `--. \\ __| | | |/ _` |/ _ \\ '_ \\| __| |  __/ _ \\| '__| __/ _` | | |" << endl
         << "| /\\__/ / |_| |_| | (_| |  __/ | | | |_  | | | (_) | |  | || (_| | | |" << endl
         << "| \\____/ \\__|\\__,_|\\__,_|\\___|_| |_|\\__| \\_|  \\___/|_|   \\__\\__,_|_| |" << endl
         << "|____________________________________________________________________|" << endl
         << endl;
	 
	 cout <<"\n\n                                          \n\n";
}

void welcome(){
	
cout << "\n\n\n\n\n\n\n\t\t\t";
	for(int i=0;i<62;i++){
	 	cout << "\xB2";
	}
	cout << "\n\n"	
<< "\t\t\tMM       MM  MMMMMMMM   MM            MM          MMMMMMMMMM                \n"
<< "\t\t\tMM       MM  MMMMMMMM   MM            MM          MMMMMMMMMM                \n" 
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM      /MMMMMMM\\ \n"
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM     M         M\n"
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM     M  M   M  M\n"
<< "\t\t\tMMMMMMMMMMM  MMMMMMMM   MM            MM          MM      MM     M         M\n"
<< "\t\t\tMMMMMMMMMMM  MMMMMMMM   MM            MM          MM      MM     M    M    M\n"
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM     M         M\n"
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM     M  MMMMM  M\n"
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM     M         M\n" 
<< "\t\t\tMM       MM  MMMMMMMM   MMMMMMMMMM    MMMMMMMM    MMMMMMMMMM      \\MMMMMMM/ \n"
<< "\t\t\tMM       MM  MMMMMMMM   MMMMMMMMMM    MMMMMMMM    MMMMMMMMMM                \n"
<< endl <<endl << "\t\t\t";

	for(int i=0;i<62;i++){
	 	cout << "\xB2";
	}
	cout << "\n\n";	
sleep(3);
system("cls");
}

void projectinfo(){
	int key;
	
	system("cls");
	
	title();
	cout << "\t\t\t  DESCRIPTION\n\n";
	for(int i=0;i<68;i++){
	 	cout << "\xB2";
	}
	cout << "\n\nIt is a Student data management system. Additionally, it will\ncontain a GPA calculator for students to use to figure out their\n"
	<< "SGPA and CGPA. It will keep all of the student's information.\nIt contains sign up and sign in option. The passwords during sign up\n"
	<< "encrypted by hashing. After encrypting each student's password\nwith the use of hashing, it will be stored in a file where it will\n"
	<< "be will be safe and impossible for a regular person to understand.\nWhen a student wants to login, the passwords will be\n"
	<< "read from the file and get verified. The students can make\ntheir accounts safely in this system.\n\n";
	for(int i=0;i<68;i++){
	 	cout << "\xB2";
	}
	
	cout << "\nPress 'Enter' to return to Main Screen.";

	key = _getch();

	if (key == 13)
	{
		mainscreen();
	}
	else
	{
		projectinfo();
	}
}

void members(){
	int key;

	system("cls");
	
	title();
	
	cout << "\n HARWORKING MEMBERS BEHIND THIS PROJECT\n\n";
	sleep(1);
	cout << "-Member 1 : Abdul Ahad Nauman (21K-4618)" << endl;
	sleep(1);
	cout << "-Member 2 : Syed Salman Javed (21K-3439)" << endl;
	sleep(1);
	cout << "-Member 3 : AbdulRehman Muhammad Tahir Sultan (21K-4599)" << endl;
	sleep(1);
	cout << "\nPress 'Enter' to return to Main Screen.";

	key = _getch();

	if (key == 13)
	{
		mainscreen();
	}
	else
	{
		members();
	}

}

void fees(string name){
	stack<int> S;
	
	S.push(165000);
	S.push(165000);
	S.push(135000);
	S.push(120000);
	S.push(145000);

	system("cls");
	cout << "\n\n\n\n\n\t\t";
	for(int i=0;i<94;i++){
		 	cout << "\xB2";
		}
	cout << "\n\n";
	cout << "Printing fees saved in stack in LIFO order\n\n";	
	cout<<"\t\t___________________________________________________________________________________________"<< endl
	<<"\t\t|---------------------------------- FEES INFORMATION --------------------------------------|"<< endl
	<<"\t\t|                                                                                          |"<< endl	
	<<"\t\t|                                   LAST FEES PAID: " << S.top(); S.pop(); cout << "                                 |"<< endl
	<<"\t\t|                                SECOND LAST FEES PAID: " << S.top(); S.pop(); cout << "                             |"<< endl
	<<"\t\t|                                 THIRD LAST FEES PAID: " << S.top(); S.pop(); cout << "                             |"<< endl
	<<"\t\t|                                FOURTH LAST FEES PAID: " << S.top(); S.pop(); cout << "                             |"<< endl
	<<"\t\t|                                 FIFTH LAST FEES PAID: " << S.top(); S.pop(); cout << "                             |"<< endl
	<<"\t\t|                                                                                          |"<< endl	
	<<"\t\t|__________________________________________________________________________________________|_";
	cout << "\n\n\t\t";
	for(int i=0;i<94;i++){
		 	cout << "\xB2";
		}
		
		cout << "\n\n\t\tPRESS ENTER TO GO BACK";
					
				int key = _getch();

				if (key == 13) {
					extraoptions(name);
					return;
				}
	
}

void reverseString(string &str) {
    stack<int> S;

    for (char ch: str) S.push(ch);

//	for (int i=0;i<str.length();i++) {
//        char ch = str[i];
//        S.push(ch);
//    }
 
    for (int i=0;i<str.length();i++) {
        str[i] = S.top();
        S.pop();
    }
}

void extraoptions(string name){
	
	if(name=="salman"){
	
		int position = 1;
	 	int keypressed = 0;
	
	 	
	 	while (keypressed != 13)
		{
	
	     system("cls");
	     
		 cout << "\n\n\n\n\n\tUSE UP AND DOWN ARROW TO MOVE AND ENTER TO SELECT!";
		 cout <<"\n\n                                          \n\n";
	     	cout << "\t\xB2"; arrowHere(1, position); cout << "     GO TO HOMEPAGE AGAIN\n";
			cout << "\t\xB2"; arrowHere(2, position); cout << "     YOUR REVERSE INFORMATION USING STACK\n"; 
	     	cout << "\t\xB2"; arrowHere(3, position); cout << "     FEES INFORMATION\n"; 
			cout << "\t\xB2"; arrowHere(4, position); cout << "     SIGN OUT\n";

	     cout << "\n\n";
	     fflush(stdin);
	     
	     	keypressed = _getch();
	
			if (keypressed == 80 && position != 4)
			{
				position++;
			}
			else if (keypressed == 72 && position != 1)
			{
				position--;
			}
			else
			{
				position = position;
			}
		}
		
		if(position==1){
			salman();
		}
		
		else if(position==2){
			    system("cls");
			    cout << "\n\n\n\n";
			    	for(int i=0;i<100;i++){
	 					cout << "\xB2";
					}
					cout << "\n\n";
				string str= "Salman Javed";
			    reverseString(str);
    			cout << "REVERSED NAME: " << str << "\n";
    			
    			str = "K213439";
    			reverseString(str);
    			cout << "REVERSED ROLL NO: " << str << "\n";
    			
    			str = "Computer Science";
    			reverseString(str);
    			cout << "REVERSED DEGREE NAME: " << str << "\n";
    			
    			str = "Karachi";
    			reverseString(str);
    			cout << "REVERSED CAMPUS: " << str << "\n";
    			
    			str = "salman@gmail.com";
    			reverseString(str);
    			cout << "REVERSED EMAIL: " << str << "\n";
    			
    			str = "GULSHAN E IQBAL";
    			reverseString(str);
    			cout << "REVERSED ADDRESS: " << str << "\n";
    			
    			cout << "\n\n";
    			for(int i=0;i<100;i++){
	 					cout << "\xB2";
					}
					cout << "\n\nPRESS ENTER TO GO BACK";
					
				int key = _getch();

				if (key == 13) {
					extraoptions("salman");
					return;
				}
		}
		
		else if(position==3){
			fees(name);
			return;
		}
		
		else if(position==4){
			mainscreen();
			return;
		}
	}
	else if (name=="ahad"){
	
		int position = 1;
	 	int keypressed = 0;
	
	 	
	 	while (keypressed != 13)
		{
	
	     system("cls");
	     
		 cout << "\n\n\n\n\n\tUSE UP AND DOWN ARROW TO MOVE AND ENTER TO SELECT!";
		 cout <<"\n\n                                          \n\n";
	     	cout << "\t\xB2"; arrowHere(1, position); cout << "     GO TO HOMEPAGE AGAIN\n";
			cout << "\t\xB2"; arrowHere(2, position); cout << "     YOUR REVERSE INFORMATION USING STACK\n"; 
	        cout << "\t\xB2"; arrowHere(3, position); cout << "     FEES INFORMATION\n"; 
			cout << "\t\xB2"; arrowHere(4, position); cout << "     SIGN OUT\n";
	     cout << "\n\n";
	     fflush(stdin);
	     
	     	keypressed = _getch();
	
			if (keypressed == 80 && position != 4)
			{
				position++;
			}
			else if (keypressed == 72 && position != 1)
			{
				position--;
			}
			else
			{
				position = position;
			}
		}
		
		if(position==1){
			ahad();
			return;
		}
		
		else if(position==2){
			system("cls");
					cout << "\n\n\n\n";
			    	for(int i=0;i<100;i++){
	 					cout << "\xB2";
					}
					cout << "\n\n";
				string str= "Abdul Ahad";
			    reverseString(str);
    			cout << "REVERSED NAME: " << str << "\n";
    			
    			str = "K214618";
    			reverseString(str);
    			cout << "REVERSED ROLL NO: " << str << "\n";
    			
    			str = "Computer Science";
    			reverseString(str);
    			cout << "REVERSED DEGREE NAME: " << str << "\n";
    			
    			str = "Karachi";
    			reverseString(str);
    			cout << "REVERSED CAMPUS: " << str << "\n";
    			
    			str = "ahad@gmail.com";
    			reverseString(str);
    			cout << "REVERSED EMAIL: " << str << "\n";
    			
    			str = "ABC street";
    			reverseString(str);
    			cout << "REVERSED ADDRESS: " << str << "\n";
    			
    			cout << "\n\n";
    			for(int i=0;i<100;i++){
	 					cout << "\xB2";
					}
					cout << "\n\nPRESS ENTER TO GO BACK";
					
				int key = _getch();

				if (key == 13) {
					extraoptions("ahad");
					return;
				}
		}
		
		else if(position==3){
			fees(name);
			return;
		}
		
		else if(position==4){
			mainscreen();
			return;
		}
	}
	else if(name=="abdulrehman"){

	
		int position = 1;
	 	int keypressed = 0;
	
	 	
	 	while (keypressed != 13)
		{
	
	     system("cls");
	     
		 cout << "\n\n\n\n\n\tUSE UP AND DOWN ARROW TO MOVE AND ENTER TO SELECT!";
		 cout <<"\n\n                                          \n\n";
	     	cout << "\t\xB2"; arrowHere(1, position); cout << "     GO TO HOMEPAGE AGAIN\n";
			cout << "\t\xB2"; arrowHere(2, position); cout << "     YOUR REVERSE INFORMATION USING STACK\n"; 
			cout << "\t\xB2"; arrowHere(3, position); cout << "     FEES INFORMATION\n"; 
			cout << "\t\xB2"; arrowHere(4, position); cout << "     SIGN OUT\n";
	     cout << "\n\n";
	     fflush(stdin);
	     
	     	keypressed = _getch();
	
			if (keypressed == 80 && position != 4)
			{
				position++;
			}
			else if (keypressed == 72 && position != 1)
			{
				position--;
			}
			else
			{
				position = position;
			}
		}
		
		if(position==1){
			abdulrehman();
			return;
		}
		
		else if(position==2){
			system("cls");
					cout << "\n\n\n\n";
			    	for(int i=0;i<100;i++){
	 					cout << "\xB2";
					}
					cout << "\n\n";
				string str= "Abdul Rehman";
			    reverseString(str);
    			cout << "REVERSED NAME: " << str << "\n";
    			
    			str = "K214599";
    			reverseString(str);
    			cout << "REVERSED ROLL NO: " << str << "\n";
    			
    			str = "Computer Science";
    			reverseString(str);
    			cout << "REVERSED DEGREE NAME: " << str << "\n";
    			
    			str = "Karachi";
    			reverseString(str);
    			cout << "REVERSED CAMPUS: " << str << "\n";
    			
    			str = "abdulrehman@gmail.com";
    			reverseString(str);
    			cout << "REVERSED EMAIL: " << str << "\n";
    			
    			str = "street XYZ";
    			reverseString(str);
    			cout << "REVERSED ADDRESS: " << str << "\n";
    			
    			cout << "\n\n";
    			for(int i=0;i<100;i++){
	 					cout << "\xB2";
					}
					cout << "\n\nPRESS ENTER TO GO BACK";
					
				int key = _getch();

				if (key == 13) {
					extraoptions("abdulrehman");
					return;
				}
		}
		
		else if(position==3){
			fees(name);
			return;
		}
		
		else if(position==4){
			mainscreen();
			return;
		}
	}	
}

struct Student {
		string semester;
		int Calculus; 
		int physics; 
		int DS; 
		int total; 
		int rank; 
	};


	bool compareTwoStudents(Student a, Student b) {
	
		if (a.total != b.total)
			return a.total > b.total;
	
		if (a.Calculus != b.Calculus)
			return a.Calculus > b.Calculus;
	
		if (a.physics != b.physics)
			return a.physics > b.physics;
	
		return (a.DS > b.DS);
	}
	
	void computeRanks(Student a[], int n) {
	
		for (int i = 0; i < n; i++)
			a[i].total = a[i].Calculus + a[i].physics + a[i].DS;
	
		sort(a, a + 5, compareTwoStudents);
		
		for (int i = 0; i < n; i++)
			a[i].rank = i + 1;
	}


void sortmarks(Student a[], int n, string name){
	
	computeRanks(a, n);
		
	
	cout << endl;
	cout << endl;
	for(int i=0;i<100;i++){
	 	cout << "\xB2";
	}
	cout << "\n\n";	
	
	cout << "\t\t\tNo. Semester   Calculus Physics  Data Structures \tTotal\n\n";
	for (int i = 0; i < n; i++) {
		cout << "\t\t\t" << a[i].rank << "  " << a[i].semester  << "	  " << a[i].Calculus << "	 " << a[i].physics << "	 \t" << a[i].DS;
		cout << "\t\t" << a[i].total << " \n";
	}
	cout << "\n\n";
		for(int i=0;i<100;i++){
				cout << "\xB2";
			}
			cout << "\n\n\t\t\tPRESS ENTER TO CONTINUE TO EXTRA OPTIONS";
			
		int key = _getch();

		if (key == 13) {
			extraoptions(name);
			return;
		}
}

void marks(string name){
	
	int n = 5;
	Student a[n];

	a[0].semester = "First";
	a[0].Calculus = 80;
	a[0].physics = 95;
	a[0].DS = 85;


	a[1].semester = "Second";
	a[1].Calculus = 95;
	a[1].physics = 85;
	a[1].DS = 99;


	a[2].semester = "Third";
	a[2].Calculus = 95;
	a[2].physics = 85;
	a[2].DS = 80;


	a[3].semester = "Fourth";
	a[3].Calculus = 80;
	a[3].physics = 70;
	a[3].DS = 90;


	a[4].semester = "Fifth";
	a[4].Calculus = 80;
	a[4].physics = 80;
	a[4].DS = 80;
	
	
	system("cls");	
	cout << endl;
	for(int i=0;i<100;i++){
	 	cout << "\xB2";
	}
	cout << "\n\n";	

	
	cout << "\t\t\tNo. Semester   Calculus Physics  Data Structures \tTotal\n\n";
	for (int i = 0; i < n; i++) {
		cout << "\t\t\t" << i+1 << "  " << a[i].semester  << "	  " << a[i].Calculus << "	 " << a[i].physics << "	 \t" << a[i].DS;
		cout << "\t\t" << a[i].DS+a[i].Calculus+a[i].physics << " \n";
	}
	
	cout << "\n\n\t               PRESS ENTER TO SEE SEMESTERS SORTED ACCORGING TO HIGHER MARKS OBTAINED.\n";
	        
	        int key = _getch();

				if (key == 13) {
					sortmarks(a, n, name);
					return;
				}
}

void ahad() 
{
system("cls");	
cout << endl;
for(int i=0;i<100;i++){
	 	cout << "\xB2";
	}
cout << "\n\n";	
cout<<"___________________________________________________________________________________________"<<endl;
cout<<"|------------You are Currently Viewing Data of Abdul Ahad Nauman---------------------------|"<<endl;;
cout<<"|                                                                                          |"<<endl;   
cout<<"|----------------------------Abdul Ahad's Institution Data-------------------------------  |"<<endl;		
cout<<"| Roll Number->21K-4618                                                                    |"<<endl;
cout<<"| Degree and Batch->B21 CS                                                                 |"<<endl;
cout<<"| Section->B                                                                               |"<<endl;
cout<<"| Campus->Karachi                                                                          |"<<endl;
cout<<"|                                                                                          |"<<endl;
cout<<"| ---------------------------Abdul Ahad's Personal Information---------------- ------------|"<<endl;
cout<<"| Date Of Birth->20-07-2001                                                                |"<<endl;
cout<<"| Gender->Male                                                                             |"<<endl;
cout<<"| Nationality Card Number->42201-123456789                                                 |"<<endl;
cout<<"| Email Address->abc@gmail.com                                                             |"<<endl;
cout<<"|----------------------------Abdul Ahad's Contact Information------------------------------|"<<endl;
cout<<"|Address -> ABC Street Karachi                                                             |"<<endl;
cout<<"|Phone Number -> 13458955                                                                  |"<<endl;
cout<<"|City->Karachi                                                                             |"<<endl;
cout<<"|Country->Pakistan                                                                         |"<<endl;
cout<<"|------------------------------------------Attendance--------------------------------------|"<<endl;
cout<<"| Linear Algebra->90                                                                       |"<<endl;
cout<<"| Data Structures-> 88                                                                     |"<<endl;
cout<<"| Data Structures Lab->94                                                                  |"<<endl;
cout<<"| Discrete Structures->  99                                                                |"<<endl;
cout<<"| Computer Organization and Assembly Language->88                                          |"<<endl;
cout<<"| Computer Organization and Assembly Language Lab->92                                      |"<<endl;
cout<<"| Accounting And Finance->98                                                               |"<<endl;
cout<<"|--------------------------------Semester GPA and CGPA-------------------------------------|"<<endl;
cout<<"| Fall 2021->2.3                                                                           |"<<endl;
cout<<"| Spring 2022->2.6                                                                         |"<<endl;
cout<<"| Current CGPA->2.5                                                                        |"<<endl;
cout<<"____________________________________________________________________________________________";
cout << "\n\n";
for(int i=0;i<100;i++){
	 	cout << "\xB2";
	}
	
	cout << "\n\n\t\t\t                  PRESS ENTER TO SEE ABDUL AHAD'S MARKS.\n";
	        
	        int key = _getch();

				if (key == 13) {
					marks("ahad");
					return;
				}
}
void salman()
{
	system("cls");
cout << endl;
for(int i=0;i<100;i++){
	 	cout << "\xB2";
	}
cout << "\n\n";	
cout<<"___________________________________________________________________________________________"<<endl;
cout<<"|-----------------------You are Currently Viewing Data of Salman Javed---------------------|"<<endl;;
cout<<"|                                                                                          |"<<endl;   
cout<<"|----------------------------Salman's Institution Data-----------------------------------  |"<<endl;		
cout<<"| Roll Number->21K-3439                                                                    |"<<endl;
cout<<"| Degree and Batch->B21 CS                                                                 |"<<endl;
cout<<"| Section->B                                                                               |"<<endl;
cout<<"| Campus->Karachi                                                                          |"<<endl;
cout<<"|                                                                                          |"<<endl;
cout<<"| ---------------------------Salman's Personal Information-------------------- ------------|"<<endl;
cout<<"| Date Of Birth->03-06-2003                                                                |"<<endl;
cout<<"| Gender->Male                                                                             |"<<endl;
cout<<"| Nationality Card Number->42201-987654321                                                 |"<<endl;
cout<<"| Email Address->salman@gmail.com                                                          |"<<endl;
cout<<"|----------------------------Salman's Contact Information----------------------------------|"<<endl;
cout<<"|Address->Gulshan e Iqbal                                                                  |"<<endl;
cout<<"|Phone Number ->0325-5555555                                                               |"<<endl;
cout<<"|City -> Karachi                                                                           |"<<endl;
cout<<"|Country ->Pakistan                                                                        |"<<endl;
cout<<"|------------------------------------------Attendance--------------------------------------|"<<endl;
cout<<"| Linear Algebra->95                                                                       |"<<endl;
cout<<"| Data Structures->95                                                                      |"<<endl;
cout<<"| Data Structures Lab->93                                                                  |"<<endl;
cout<<"| Discrete Structures-> 91                                                                 |"<<endl;
cout<<"| Computer Organization and Assembly Language->94                                          |"<<endl;
cout<<"| Computer Organization and Assembly Language Lab->100                                     |"<<endl;
cout<<"| Psycology->89                                                                            |"<<endl;
cout<<"|--------------------------------Semester GPA and CGPA-------------------------------------|"<<endl;
cout<<"| Fall 2021-> 2.8                                                                          |"<<endl;
cout<<"| Spring 2022-> 3.0                                                                        |"<<endl;
cout<<"| Current CGPA:2.9                                                                         |"<<endl;
cout<<"____________________________________________________________________________________________";
cout << "\n\n";
for(int i=0;i<100;i++){
	 	cout << "\xB2";
	}
	
	cout << "\n\n\t\t\t                  PRESS ENTER TO SEE SALMAN JAVED's MARKS.\n";
	        
	        int key = _getch();

				if (key == 13) {
					marks("salman");
					return;
				}
	
}
void abdulrehman()
{
	system("cls");
cout << endl;
for(int i=0;i<100;i++){
	 	cout << "\xB2";
	}
cout << "\n\n";	
cout<<"___________________________________________________________________________________________"<<endl;
cout<<"|-------------You are Currently Viewing Data of AbdulRehman Tahir--------------------------|"<<endl;;
cout<<"|                                                                                          |"<<endl;   
cout<<"|--------------------------Abdul Rehman's Institution Data-------------------------------  |"<<endl;		
cout<<"| Roll Number->21K-4599                                                                    |"<<endl;
cout<<"| Degree and Batch->B21 CS                                                                 |"<<endl;
cout<<"| Section->B                                                                               |"<<endl;
cout<<"| Campus->Karachi                                                                          |"<<endl;
cout<<"|                                                                                          |"<<endl;
cout<<"| -------------------------Abdul Rehman's Personal Information---------------- ------------|"<<endl;
cout<<"| Date Of Birth->15-02-2002                                                                |"<<endl;
cout<<"| Gender->Male                                                                             |"<<endl;
cout<<"| Nationality Card Number->42201-558963245                                                 |"<<endl;
cout<<"| Email Address->abdulrehman@gmail.com                                                     |"<<endl;
cout<<"|--------------------------Abdul Rehman's Contact Information------------------------------|"<<endl;
cout<<"|Address -> Street XYZ karachi                                                             |"<<endl;
cout<<"|Phone Number -> 0300-123456789                                                            |"<<endl;
cout<<"|City -> Karachi                                                                           |"<<endl;
cout<<"|Country ->Pakistan                                                                        |"<<endl;
cout<<"|------------------------------------------Attendance--------------------------------------|"<<endl;
cout<<"| Linear Algebra->96                                                                       |"<<endl;
cout<<"| Data Structures->96                                                                      |"<<endl;
cout<<"| Data Structures Lab->95                                                                  |"<<endl;
cout<<"| Discrete Structures-> 97                                                                 |"<<endl;
cout<<"| Computer Organization and Assembly Language->100                                         |"<<endl;
cout<<"| Computer Organization and Assembly Language Lab->92                                      |"<<endl;
cout<<"| Marketing Managment-> 85                                                                 |"<<endl;
cout<<"|--------------------------------Semester GPA and CGPA-------------------------------------|"<<endl;
cout<<"| Fall 2021->3.2                                                                           |"<<endl;
cout<<"| Spring 2022-> 3.0                                                                        |"<<endl;
cout<<"| Current CGPA-> 3.1                                                                       |"<<endl;
cout<<"___________________________________________________________________________________________";
cout << "\n\n";
for(int i=0;i<100;i++){
	 	cout << "\xB2";
	}
	
	cout << "\n\n\t\t\t                  PRESS ENTER TO SEE ABDULREHMANS'S MARKS.\n";
	        
	        int key = _getch();

				if (key == 13) {
					marks("abdulrehman");
					return;
				}
				
}

class Grade{
	double D_grade=1;
	double Dplus_grade=1.33;
	double Cminus_grade=1.67;
	double C_grade=2;
	double Cplus_grade=2.33;
	double Bminus_grade=2.67;
	double B_grade=3;
	double Bplus_grade=3.33;
	double Aminus_grade=3.67;
	double A_grade=4;
	double Aplus_grade=4;
	
	double grade;
	static int total_ch;
	public:
		Grade(){
			grade=0;
		}
		Grade(int a){
			switch(a){
				case 1:
					grade = Aplus_grade;
				    break;
					
				case 2:
				    grade = A_grade;
					break;
					
				case 3:
				    grade = Aminus_grade;
					break;
					
				case 4:
				    grade = Bplus_grade;
					break;
					
				case 5:
				    grade = B_grade;	
					break;
					
				case 6:
				    grade = Bminus_grade;
					break;
					
				case 7:
				    grade = Cplus_grade;
					break;
					
				case 8:
				    grade = C_grade;
					break;

                case 9:
				    grade = Cminus_grade;
					break;
					
				case 10:
				    grade = Dplus_grade;
				    break;
					
				case 11:
				    grade = D_grade;
				    break;
					
				default:
				    cout << "Wrong Input!\n";									
			}
		}
		
		double grade_point(){
			double ch;
			cout << "Enter the credit hours of the course: "; cin >> ch;
			total_ch = total_ch + ch;
			
			return ch*grade;			
		}
		
		int gettotal_ch(){
            return total_ch;	
		}
		
};
int Grade::total_ch=0; 

	
void gpa_calculator(){
	
	int credit_hour;
	int n, x;
	double GPA=0.0;
	
	system("cls");
	title();
	cout << " \n\n\t\t\t              ENTER -1 TO LEAVE TO GO BACK TO MAIN MENU\n\n\t\t\t";
	for(int i=0;i<69;i++){
	 	cout << "\xB2";
	}
	cout << "\n\n \t\t\t              ENTER THE TOTAL NUMBER OF COURSES WITH LABS: "; cin >> n;
	if(n==-1){
		mainscreen();
		return;
	}
	double a[n];
	
	system("cls");
	cout << "\n1 for A+\n2 for A\n3 for A-\n4 for B+\n5 for B\n6 for B-\n7 for C+\n8 for C\n9 for C-\n10 for D+\n11 for D";
	
	for(int i=0;i<n;i++){
		cout << "\n\nEnter the grade of course " << i+1 << ": "; cin >> x;
		Grade g(x);
		a[i] = g.grade_point();
		credit_hour=g.gettotal_ch();		
	}
	
	for(int i=0;i<n;i++){
		GPA = GPA + a[i];
	}
	GPA = GPA/credit_hour;
	cout << "\nYour SGPA is " << GPA;
	
	cout << "\n\nPress any key to return to Main Screen.";

	 getch();
	 mainscreen();
	
}

void signup(){
	
	system("cls");
	title();
	
	string newName,checkName,newPass,confirmPass;
	int MiniPass ;
	bool if_ON = true;
	bool oo = true;
		
	//UserName Validation
	while(oo){
	    cout << "\n  ====================================================  SIGN-UP  ==================================================== ";
  		cout << " \n\n\n\t\t\t\t                ENTER A NEW USERNAME:= ";
	    getline(cin, newName);
	    MiniPass = newName.length();
	    fstream yusers;
	    yusers.open("Users.txt",ios::in);
	    if(if_ON && MiniPass >= 1 && yusers.is_open()){
	        string readd;
	        while(getline(yusers,readd)){
	            stringstream OnlyUsers(readd);
	            OnlyUsers >> checkName;
	            if(newName == checkName){
	                cout <<"\n*"<< newName <<"* UserName already exists Try another one\n" << endl;
	                if_ON = false;
	            }
	    }
	    yusers.close();
	    if(!if_ON){
	       if_ON = true;
	    }
	    else{
	        oo = false;
	    }
	    }
	}
	//Password Validation
	while(true){
	    cout << " \n\t\t\t\t                ENTER YOUR PASSWORD:= ";
	    getline(cin,newPass);
	    cout << " \n\t\t\t\t                RE-ENTER TO CONFIRM YOUR PASSWORD:= ";
	    getline(cin,confirmPass);
	    MiniPass = newPass.length();
	
	    if (MiniPass < 5){
	        cout << "\nYour password is weak at least 5 letters\n \n";
	    }
	    else if(confirmPass == newPass){
	    	//hashing of password being done
	    	Hash h(newPass);
	    	cout << " \n\t\t\t\t                ENCRYPTED PASSWORD USING HASHING:= " << h.hash_value << endl;
	    	newPass = h.hash_value;
	        fstream users;
	        users.open("Users.txt",ios::app);
	        if(users.is_open()){
	            users << newName +" "+ newPass << endl;
	            users.close();
	        }
	        cout << "\n\t\t\t\t                ===================================\n";
	        cout << "\n\t\t\t\t                New account created Successfully! \n";
	        cout << "\n\t\t\t\t                ===================================\n";
	        cout << "\n\n\t\t\t                  PRESS ENTER TO CONTINUE.\n";
	        
	        int key = _getch();

				if (key == 13) {
					data();
					break;
				}

			}
	    else{
	        cout << "\nPassword confirmation not correct! \n" << endl;
	        sleep(1);
	
	        }
	    }
}

void login() {
	
	system("cls");
	title();
	
	string UserName,Password;
	string UseEnter,PassEnter;
	bool On_Off = true;
	bool Off = true;
	int countt = 0;
	int left = 3;
	
	while(On_Off){

	    fstream user;
	    user.open("users.txt", ios::in);
	    if(countt < 3 && Off && user.is_open()){
	        if(countt > 0){
	        cout << "\nPassword or UserName are not correct!!" << endl;
	        left--;
	        cout << "You have " << left << " attempts left \n" << endl;
	        }
	        cout << "\n  ====================================================  LOGIN  ==================================================== ";
  		    cout << " \n\n\n\t\t\t\t                ENTER YOUR USERNAME:= ";
	        getline(cin,UseEnter);
	        cout << " \n\t\t\t\t                ENTER YOUR PASSWORD:= ";
	        getline(cin,PassEnter);
	        Hash h(PassEnter);
	        PassEnter = h.hash_value;
	        countt++;
	        string read;

	        while(getline(user,read)){
	            stringstream convertor(read);
	            convertor >> UserName >> Password;
	            if(UseEnter == UserName && PassEnter == Password){
	                Off = false;}}

	            }
	    else if(!Off){
	    	cout << "  \n\n\n\t\t\t\tLOGIN IS SUCCESSFUL";
			cout << "\n\n\n\t\t\t\tLOADING...JUST FINISHING UP...";
			sleep(3);
			
			if(UseEnter=="ahad"){
				ahad();
				return;
			}
			else if(UseEnter=="salman"){
				salman();
				return;
			}
			else if(UseEnter=="abdulrehman"){
				abdulrehman();
				return;
			}
			else{
				data();
				return;
			}
	        user.close();
	        On_Off = false;
	}
	    else {
	        cout << "\n**** TRY AGAIN LATER!! **** \n\n";
	        sleep(2);
	        user.close();
	        On_Off = false;
	        mainscreen();
	    }
	}

}

void mainscreen(){
	
	int position = 1;
 	int keypressed = 0;

 	
 	while (keypressed != 13)
	{

     system("cls");
	
	 title();
	
	 cout << "\tUSE UP AND DOWN ARROW TO MOVE AND ENTER TO SELECT!";
	 cout <<"\n\n                                          \n\n";
     	cout << "\t\xB2"; arrowHere(1, position); cout << "     LOGIN PAGE\n";
		cout << "\t\xB2"; arrowHere(2, position); cout << "     SIGN-UP\n"; 
     	cout << "\t\xB2"; arrowHere(3, position); cout << "     GPA CALCULATOR\n"; 
		cout << "\t\xB2"; arrowHere(4, position); cout << "     PROJECT INFO\n";
		cout << "\t\xB2"; arrowHere(5, position); cout << "     MEMBERS\n"; 
     	cout << "\t\xB2"; arrowHere(6, position); cout << "     EXIT PROGRAM\n"; 
     cout << "\n\n";
     fflush(stdin);
     
     	keypressed = _getch();

		if (keypressed == 80 && position != 6)
		{
			position++;
		}
		else if (keypressed == 72 && position != 1)
		{
			position--;
		}
		else
		{
			position = position;
		}
	}
	
	if(position==1){
		login();
	}
	
	else if(position==2){
		signup();
	}
	
	else if(position==3){
		gpa_calculator();
	}
	
	
	else if(position==4){
	    projectinfo();
	}
	
	else if(position==5){
		members();
	}
	
	else if(position==6){
		cout << "\n\n\t\t     THANK YOU FOR USING OUR STUDENT MANAGEMENT SYSTEM :)\n\n";
	    exit(0);
	}	
	
}


void data(){
	char another, choice;

	 FILE *fp, *ft;

struct student {

        char first_name[50], last_name[50];

        char course[100];

        int section;

    };



    struct student e;
    char xfirst_name[50], xlast_name[50];
    long int recsize;

    fp=fopen("data.txt","rb+");

    if (fp == NULL) {
        fp = fopen("data.txt","wb+");

        if (fp==NULL)
        {
             puts("Cannot open file");
             return ;
        }
    }


 recsize = sizeof(e);


 while(1) {
 	
 	 int position = 1;
 	 int keypressed = 0;

 	
 	while (keypressed != 13)
	{

     system("cls");
	
	 title();
	
	 cout << "\tUSE UP AND DOWN ARROW TO MOVE AND ENTER TO SELECT!";
	 cout <<"\n\n                                          \n\n";
     	cout << "\t\xB2"; arrowHere(1, position); cout << "     Add    Records\n"; 
     	cout << "\t\xB2"; arrowHere(2, position); cout << "     View   Records\n";  
     	cout << "\t\xB2"; arrowHere(3, position); cout << "     Remove Records\n";
        cout << "\t\xB2"; arrowHere(4, position); cout << "     Back to Main Menu\n";
        cout << "\t\xB2"; arrowHere(5, position); cout << "     Exit Program";
		 
     cout << "\n\n";
     fflush(stdin);
     
     	keypressed = _getch();

		if (keypressed == 80 && position != 5)
		{
			position++;
		}
		else if (keypressed == 72 && position != 1)
		{
			position--;
		}
		else
		{
			position = position;
		}
	}
	
	choice = position;
	
	if(choice==1){
		  fseek(fp,0,SEEK_END);
	            another ='Y';
	            while(another == 'Y' || another == 'y') {
	            	
	                  system("cls");
	                cout << "Enter the First Name : "; cin >> e.first_name;
	                cout << "Enter the Last Name : "; cin >> e.last_name;
	                cout << "Enter the Course    : "; cin >> e.course;
	                cout << "Enter the Semester   : "; cin >> e.section;
	                cout << "Enter Home Address : ";
	                fwrite(&e,recsize,1,fp);
	                cout << "\n Add Another Record (Y/N) ";
	                fflush(stdin);
	                another = getchar();
	            }
	       }
	       
	       else if(choice==2){
	       	 system("cls");
	           rewind(fp);
	           cout << "\xB2\xB2 View the Records in the Database \xB2\xB2 ";
	           cout << "\n";
	           while (fread(&e,recsize,1,fp) == 1){
	           cout << "\n";
	           cout <<"\nName     :: " <<e.first_name <<" "<<e.last_name;
	           cout <<"\nCourse   :: " <<e.course ;
	           cout <<"\nSemester  :: "<<e.section;
	           }
	           cout << "\n\n";
	           system("pause");
		   }
		   
		   else if(choice==3){
		   	  system("cls");
	           another = 'Y';
	          while (another == 'Y'|| another == 'y')
	          {
	              cout << "\n Enter the last name of the student to delete : ";
	              cin >> xlast_name;
	
	              ft = fopen("temp.dat", "wb");
	
	              rewind(fp);
	              while (fread (&e, recsize,1,fp) == 1)
	
	                 if (strcmp(e.last_name,xlast_name) != 0)
	                {
	                    fwrite(&e,recsize,1,ft);
	                }
	                fclose(fp);
	                fclose(ft);
	                remove("data.txt");
	                rename("temp.dat","users.txt");
	
	                fp=fopen("data.txt","rb+");
	
	                cout << "\n Delete Another Record (Y/N) ";
	                fflush(stdin);
	                another = getchar();
	              }
		     } 
		     			 
			 else if(choice==4){
				mainscreen();
	
			 }
			 
			else if(choice==5){
		     	fclose(fp);
	              cout << "\n\n";
	              cout << "\t\t     THANK YOU FOR USING OUR STUDENT MANAGEMENT SYSTEM :)";
	              cout << "\n\n";
	              exit(0);
			 }
     }
}

int main() {
	
	welcome();
	mainscreen();

return 1;
}

