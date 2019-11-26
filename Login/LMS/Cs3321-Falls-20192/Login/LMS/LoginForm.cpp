#include "LoginForm.h"
//#include "Students.h"
#include<iostream>
#include<string>
#include<fstream>
#include<sstream> 

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

//int Users(string usersList[], string passwordsList[]);
int adminlogin(string userList[], string passwordsList[],  string userName, string password);
int studentlogin(string userList[], string passwordsList[], string userName, string password);

int indexCounter = 0;
int userIndex = -1;
int userCounter = 0;
int valid;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	LMS::LoginForm form;
	Application::Run(% form);
	
}


int adminlogin(string usersList[], string passwordsList[], string username, string password)           //this is used in order to load the courses
{
	int c = 0;
	int access;
	ifstream ufile("AdminLogin.txt");               //this will open the text file
	if (ufile)
	{
		string uname, pass, line1;
		while (getline(ufile, line1))
		{
			stringstream ss(line1);
			getline(ss, uname, ',');
			getline(ss, pass, ',');
			
			usersList[c] = uname;
			passwordsList[c] = pass;
		

			c++;
			//counter for the users authorized to operate
		}
		ufile.close();
		
		//string username, password;

		for (int i = 0; i < c; i++)
		{
			if ((usersList[i] == username) && (passwordsList[i] == password))
			{
				access = 1;
			}		
		}
		if (access == 1 )
			return 1;
		
		else
			return 0;
	}

}
int studentlogin(string usersList[], string passwordsList[], string username, string password)           //this is used in order to load the courses
{
	int c = 0;
	int access;
	ifstream ufile("StudentLogin.txt");               //this will open the text file
	if (ufile)
	{
		string uname, pass, line1;
		while (getline(ufile, line1))
		{
			stringstream ss(line1);
			getline(ss, uname, ',');
			getline(ss, pass, ',');

			usersList[c] = uname;
			passwordsList[c] = pass;


			c++;
			//counter for the users authorized to operate
		}
		ufile.close();

		//string username, password;

		for (int i = 0; i < c; i++)
		{
			if ((usersList[i] == username) && (passwordsList[i] == password))
			{
				access = 1;
			}
		}
		if (access == 1)
			return 1;

		else
			return 0;
	}

}

int LMS::LoginForm::adminFile(string username, string password)
{
	string usersList[100], passwordsList[100];


	//Users(usersList, passwordsList);
	valid = adminlogin(usersList, passwordsList, username, password);

	if (valid == 1)
	{
		return 1;
	}
	
	else
		return 0;
}

int LMS::LoginForm::studentFile(string username, string password)
{
	string usersList[100], passwordsList[100];


	//Users(usersList, passwordsList);
	valid = studentlogin(usersList, passwordsList, username, password);

	if (valid == 1)
	{
		return 1;
	}

	else
		return 0;
}