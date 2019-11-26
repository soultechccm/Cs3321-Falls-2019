#include "LoginForm.h"
#include<iostream>
#include<string>
#include<fstream>
#include<sstream> 

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

int userlogin(string roleList[], string userList[], string passwordsList[], string userName, string password);

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

//////////////////////////User login files//////////////////////
int LMS::LoginForm::userFile(string username, string password)
{
	string usersList[100], passwordsList[100], roleList[100];


	//Users(usersList, passwordsList);
	valid = userlogin(roleList, usersList, passwordsList, username, password);

	if (valid == 2)
	{
		return 2;
	}
	if (valid == 1)
	{
		return 1;
	}
	else
		return 0;
}


int userlogin(string roleList[], string usersList[], string passwordsList[], string username, string password)           //this is used in order to load the courses
{
	int c = 0;
	int access;
	ifstream ufile("Login.txt");               //this will open the text file
	if (ufile)
	{
		string uname, pass, role, line1;
		while (getline(ufile, line1))
		{
			stringstream ss(line1);
			getline(ss, uname, ',');
			getline(ss, pass, ',');
			getline(ss, role, '!');

			usersList[c] = uname;
			passwordsList[c] = pass;
			roleList[c] = role;

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
				if (roleList[i].compare("Admin") == 0) {
					access = 2;
				}
			}
		}

		switch (access)
		{
		case 2:
			return 2;
			break;
		case 1:
			return 1;
			break;
		default:
			return 0;
		}
	}


}