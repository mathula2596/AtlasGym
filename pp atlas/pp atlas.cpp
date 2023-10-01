/*inserting the header files*/
#include "stdafx.h" 
#include<conio.h> //header file for getch
#include<iostream>// header file for cin and cout
#include<string> // header file for string data type
#include<fstream>// header file for file data store
#include <iomanip>

using namespace std; /*importing the standard library*/

/*Creating the structure*/
//Member - structure name
struct Member
{
	//creating variables within structure member
	int height, weight;
	string  fname, lname, address, nic, id;
	int phone, age;
	string date;
};

void menu(); //initializing method menu
int main();// initializing main method

Member s[100];// creating object for structure member with the name s 
/*This system will only allow 100 member details to store*/
int a = 1, i; // creating global variables and assigning values

/*creating void method login*/

void login() //login method start
{

	/*Username: - Admin
 Password: - 123 */


	string username = "";
	string password = "";
	char pass;
	cout << "                                                                " << endl;
	cout << "                  .;zs.rtbs.                                                  ATLAS GYM MEMBER MANAGEMENT SYSTEM                         " << endl;
	cout << "                ,dNMBPSri$$$b.                               " << endl;
	cout << "               sNMNBPZSsr'YOJD			" << endl;
	cout << "              ;NMNBPZSsP*ASiTNS                                +------------------------------------------------------------+" << endl;
	cout << "              JNBPZP''.      ?S$                               |  .::           .::::          .::::     .::   .:::     .:: |  " << endl;
	cout << "              TNBP' ._'       ;P                               |  .::         .::    .::     .:    .::   .::   .: .::   .:: |" << endl;
	cout << "             ,''f  _,==.    ._:'                               |  .::       .::        .::  .::          .::   .:: .::  .:: |" << endl;
	cout << "              : `   -.e.` .'_e;                                |  .::       .::        .::  .::          .::   .::  .:: .:: | " << endl;
	cout << "              `',         \                                     |  .::       .::        .::  .::   .::::  .::   .::   .: .:: |" << endl;
	cout << "               |:  `     ,-  '                                 |  .::         .::     .::    .::    .:   .::   .::    .: :: |" << endl;
	cout << "            .--: \      __  /                                   |  .::::::::     .::::         .:::::     .::   .::      .:: |" << endl;
	cout << "         .-'    `.`.   `--, -.                                 + -----------------------------------------------------------+" << endl;
	cout << "        /  _..    `-`-.___/   `." << endl;
	cout << "       :.-'   `..    `-`*-.-.   ." << endl;
	cout << "       /         `.    `-. `-:   ;" << endl;
	cout << "      :            `.     `-. \  :" << endl;
	cout << "      ;              \       ` ;   " << endl;
	cout << "           _.         \        :  ;" << endl;
	cout << "       ;     `-.       `.  .   '  :                  ****************************************************************************************" << endl;
	cout << "       :       :fi.      `-._.'.   " << endl;
	cout << "               iRKMbs.          \ ;                                                     GYM MANAGEMENT SYSTEM" << endl;
	cout << "        `     d*BuG*HBAs._        ;" << endl;
	cout << "         `._.dBNMWMBZNMMJHbs.._..'                     COPYRIGHT © TO ATLAS GYM KANDY                             DESIGN BY :- S.MATHULA     " << endl;
	cout << "           TBNMWMNBPLYOYJSBNY" << endl;
	cout << "            VBNMWMBZSYOJHKNWJ                        ****************************************************************************************" << endl;
	cout << "             SBNMWMBPSYJSBNMZ                        AWARENESS :- Dear users, the special purpose and functions keys will not be worked in " << endl;
	cout << "             IBNWMBRXLJHKNWSi                                     the password area & they will be taken as one of the character. This " << endl;
	cout << "                                                                  will be corrected and updated in the next version of this system." << endl;
	cout << "                                                                  Sorry for the inconvinence caused by us... :(:(:(......" << endl << endl;

	cout << "                                                                                          Username :"; //user will enter the username
	cin >> username;
	cout << "\n                                                                                          Password :";// user will enter the password


	pass = _getch();/* getch will collect the input details from the user
					and will not display anything on the screen and the
					cursor too will not move*/
	while (pass != 13)//13=enter key
	{
		password.push_back(pass);
		cout << '*';
		pass = _getch();
	}
	//validating username and password
	if (username == "Admin" && password == "123")
	{
		system("cls");


		cout << "\n\n\n\n";
		cout << "                               **************************************************************************************";
		cout << "" << endl;
		cout << "                                                              login successful";
		cout << endl;
		cout << "                               **************************************************************************************";
		cout << "" << "\n" << "" << "\n";

		cout << "                                                    PRESS ENTER TO MOVE FOR THE HOME SCREEN" << endl;

		getchar();
		getchar();

	}
	else if (username != "Admin" && password == "123")// validating the username should be correct
	{

		cout << endl;
		cout << endl;
		cout << endl;

		cout << endl;

		cout << "                                                     **************************************************************************************";
		cout << "" << endl;
		cout << "                                                                                          login Failed";
		cout << endl << endl;
		cout << "                                                     **************************************************************************************";
		cout << "\n                                                                                    Please check your username " << endl << endl;
		getchar();
		getchar();
		system("cls");
		login();
		getchar();
	}
	else if (username == "Admin"&& password != "123") //validating the password should be correct
	{
		cout << endl;
		cout << endl;


		cout << "                                                     **************************************************************************************";
		cout << "" << endl;
		cout << "                                                                                            login Failed";
		cout << endl << endl;
		cout << "                                                     **************************************************************************************";
		cout << "\n                                                                                        Please check your password ";
		getchar();
		getchar();
		system("cls");
		login();
		getchar();

	}
	else if (username != "Admin"&& password != "123")//validating the username and the password should be correct
	{
		cout << endl;
		cout << endl;

		cout << "                                                     **************************************************************************************";
		cout << "" << endl;
		cout << "                                                                                            login Failed";
		cout << endl << endl;
		cout << "                                                     **************************************************************************************";
		cout << "\n                                                                            Please check your username and password";
		getchar();
		getchar();
		system("cls");
		login();

	}
}
// login method end

/*creating a struct2file method to store the
details to the file database from structure*/
void Struct2File()
{
	ofstream myfile("Member.txt");// member is the text file to store the data
	/*ofstream is used to input data to the opened file*/
	for (int b = 0; b < i; b++)
	{
		myfile << s[b].id << endl;
		myfile << s[b].fname << endl;
		myfile << s[b].lname << endl;
		myfile << s[b].address << endl;

		myfile << s[b].age << endl;
		myfile << s[b].phone << endl;
		myfile << s[b].height << endl;
		myfile << s[b].weight << endl;
		myfile << s[b].nic << endl;
		myfile << s[b].date << endl;
	}
	myfile.close();
}//end of method

 /*creating a file2struct method to retrieve the
 details to the structure from file*/

void File2Struct() // this method read the file and temporary store the data 
//from the file and used within other methods
{/*ifstream file class is used to read the data from the member text file*/
	ifstream myfile("Member.txt");
	string t;
	a = 1;
	i = 0;
	if (myfile.is_open())
	{
		while (getline(myfile, t))//getline is used to retrieve the each and every line from file
		{
			if (a == 1)
			{
				s[i].id = t;
				a++;
			}
			else if (a == 2)
			{
				s[i].fname = t;
				a++;
			}
			else if (a == 3)
			{
				s[i].lname = t;
				a++;
			}
			else if (a == 4)
			{
				s[i].address = t;
				a++;
			}

			else if (a == 5)
			{
				s[i].age = atoi(t.c_str());
				a++;
			}
			else if (a == 6)
			{
				s[i].phone = atoi(t.c_str());
				a++;
			}
			else if (a == 7)
			{
				s[i].height = atoi(t.c_str());
				a++;
			}
			else if (a == 8)
			{
				s[i].weight = atoi(t.c_str());
				a++;
			}
			else if (a == 9)
			{
				s[i].nic = t;
				a++;
			}
			else if (a == 10)
			{
				s[i].date = t;
				a = 1;
				i++;
			}
		}
	}
	else
	{
		cout << "\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "\t\t\t\t\t\t File Not Found " << endl;
		cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}
}
//end of method

//method for adding a member

void addMember(string z) {// string z is the parameter whih carry member id from checkid method
	system("cls");
	cout << endl << endl;//add member heading
	cout << "\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\t\t\t\t\t\t\t MEMBER REGISTERATION" << endl;
	cout << "\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl << endl;
	cout << "\t\t\t\t\tMember ID : ";//user should enter the id
	s[i].id = z;
	cout << s[i].id << "\n";
	cout << "\t\t\t\t\tFirst Name : ";
	cin >> s[i].fname;
	cout << "\t\t\t\t\tLast Name : ";
	cin >> s[i].lname;
	cout << "\t\t\t\t\tAddress : ";// address should not allow the user to use space bar
	cin >> s[i].address;
	cout << "\t\t\t\t\tContact No : "; //contact no should be integer
	cin >> s[i].phone;
	cout << "\t\t\t\t\tAge : ";//age should be integer
	cin >> s[i].age;
	cout << "\t\t\t\t\tHeight (cm) : ";// height should be in cm
	cin >> s[i].height;
	cout << "\t\t\t\t\tWeight (Kg) : ";// weight should be in integer
	cin >> s[i].weight;
	cout << "\t\t\t\t\tNIC No : ";
	cin >> s[i].nic;
	cout << "\t\t\t\t\tAdmission Date (dd.mm.yyyy) : ";// date should be in the format of dd.mm.yyyy
	cin >> s[i].date;
	getch();
	i++;
	Struct2File();// this method will command the system to store the data to the file
	getchar();
	cout << endl << "\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; //member added message
	cout << "\t\t\t\t\t\t  Member Added Successfully!!!" << endl;
	cout << "\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

	getchar();
}

//method for checking the id for availability
bool checkid()
{

	system("cls");
	string newid;
	cout << "\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\t\t\t\t\t\t\t MEMBER REGISTERATION" << endl;
	cout << "\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl << endl;
	cout << "\t\t\t\t\tMember ID : ";
	cin >> newid;
	for (int b = 0; b < i; b++)
	{
		if (newid == s[b].id)
		{
			cout << "\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "\t\t\t\t\t\t\t This Member already exist" << endl;
			cout << "\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

			cout << "\t\t\t\t\tMember ID :" << s[b].id << "\n";
			cout << "\t\t\t\t\tFirst Name :" << s[b].fname << "\n";
			cout << "\t\t\t\t\tLast Name :" << s[b].lname << "\n";
			cout << "\t\t\t\t\tAddress:" << s[b].address << "\n";
			cout << "\t\t\t\t\tPhone No :" << s[b].phone << "\n";
			cout << "\t\t\t\t\tAge :" << s[b].age << "\n";
			cout << "\t\t\t\t\tHeight :" << s[b].height << "\n";
			cout << "\t\t\t\t\tWeight :" << s[b].weight << "\n";
			cout << "\t\t\t\t\tNIC No :" << s[b].nic << "\n";
			cout << "\t\t\t\t\tAdminssion Date (dd.mm.yyyy) :" << s[b].date << "\n";

			cout << "\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
			cout << "\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;

			getchar();
			getchar();
			checkid();
			return true;
		}
	}
	addMember(newid);// passing the value to the addmember method


}

//method for view all the member details
void viewmember()
{
	system("cls");
	cout << "\t\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";// view member heading
	cout << "\t\t\t\t\t\t\t\t VIEW ALL MEMBER DETAILS\n\n";
	cout << "\t\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";//view member tabular format headings
	cout << "\t*******************************************************************************************************************************************\n\n";
	cout << "\t\tID\tFirst Name" << setw(15) << "Last Name" << setw(15) << " Address" << setw(23) << "Contact No" << setw(10)
		<< "Age" << setw(8) << "Height" << setw(8) << "Weight" << setw(8) << "NIC" << setw(25) << "Admission Date" << setw(10) << endl << endl;
	cout << " \t*******************************************************************************************************************************************\n\n\n";
	for (int b = 0; b < i; b++)//this loop run to filter and display the member details
	{
		cout << "\t\t" << s[b].id << setw(15) << s[b].fname << setw(18) << s[b].lname << setw(26) << s[b].address << setw(12) << s[b].phone << setw(8)
			<< s[b].age << setw(8) << s[b].height << setw(8) << s[b].weight << setw(15) << s[b].nic << setw(20) << s[b].date << setw(10) << "\n";
	}
	getchar();
	getchar();
}

//method for update the details by adding new data
void modification(int q)
{
	char cho;
	do
	{
		cout << endl;
		cout << endl;
		cout << "                                          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
		cout << "\t \t \t \t \t \t PLEASE SELECT THE OPTION TO DO YOUR WORK ON THIS SYSTEM" << endl << endl;
		cout << "                                          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

		cout << "\n\n \t\t\t\t\tChoose 1 for Update First Name" << endl;/*option list for update the member details*/
		cout << "\t\t\t\t\tChoose 2 for Update Lase Name" << endl;
		cout << "\t\t\t\t\tChoose 3 for Update Address" << endl;
		cout << "\t\t\t\t\tChoose 4 for Update Contact No" << endl;
		cout << "\t\t\t\t\tChoose 5 for Update Age" << endl;
		cout << "\t\t\t\t\tChoose 6 for Update Height" << endl;
		cout << "\t\t\t\t\tChoose 7 for Update Weight" << endl;
		cout << "\t\t\t\t\tChoose 8 for Update NIC No" << endl;
		cout << "\t\t\t\t\tChoose 9 for Update Admission Date" << endl;
		cout << "\t\t\t\t\tChoose 0 for Back to Menu" << endl << endl << endl;
		cout << "\t\t\t\t\tTYPE YOUR OPTION HERE................. ";
		//switch case for update
		cin >> cho;
		switch (cho)
		{
			/*this switch case is used to update the member details according to the user need*/
		case '1': cout << "\t\t\t\t\tEnter the New First Name : ";
			cin >> s[q].fname;
			break;
		case '2': cout << "\t\t\t\t\tEnter the New Last Name : ";
			cin >> s[q].lname;
			break;
		case '3': cout << "\t\t\t\t\tEnter the New Address : ";
			cin >> s[q].address;
			break;
		case '4': cout << "\t\t\t\t\tEnter the New Contact No : ";
			cin >> s[q].phone;
			break;
		case '5': cout << "\t\t\t\t\tEnter the New Age : ";
			cin >> s[q].age;
			break;
		case '6': cout << "\t\t\t\t\tEnter the New Height : ";
			cin >> s[q].height;
			break;
		case '7': cout << "\t\t\t\t\tEnter the New Weight : ";
			cin >> s[q].weight;
			break;
		case '8': cout << "\t\t\t\t\tEnter the New NIC No : ";
			cin >> s[q].nic;
			break;
		case '9': cout << "\t\t\t\t\tEnter the New Date (dd.mm.yyyy) : ";
			cin >> s[q].date;
			break;
		case '0': cout << "\t\t\t\t\tBack to Menu : ";
			menu();
			break;
		}
		Struct2File(); //overwrite the updated details to the file
	} while (cho != '9');
}

//method to retieve the details by id when the user press update option
bool modifymember()
{
	string modifyid;
	system("cls");
	cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "\t\t\t\t\t\tUPDATE THE REGISTERED MEMBER DETAILS" << endl;
	cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
	cout << "\t\t\t\t\tEnter Your Member ID : ";
	cin >> modifyid;
	for (int b = 0; b < i; b++)
	{
		if (modifyid == s[b].id) //filter the member details by the member
		{
			cout << "\t\t\t\t\tMember ID : " << s[b].id << "\n";
			cout << "\t\t\t\t\tFirst Name : " << s[b].fname << "\n";
			cout << "\t\t\t\t\tLast Name : " << s[b].lname << "\n";
			cout << "\t\t\t\t\tAddress : " << s[b].address << "\n";
			cout << "\t\t\t\t\tPhone No : " << s[b].phone << "\n";
			cout << "\t\t\t\t\tAge : " << s[b].age << "\n";
			cout << "\t\t\t\t\tHeight : " << s[b].height << "\n";
			cout << "\t\t\t\t\tWeight : " << s[b].weight << "\n";
			cout << "\t\t\t\t\tNIC No : " << s[b].nic << "\n";
			cout << "\t\t\t\t\tAdminssion Date (dd.mm.yyyy) : " << s[b].date << "\n";

			cout << "\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
			cout << "\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
			modification(b);
			return true;
			getch();
		}
	}//message will be displayed when the member id is not found
	cout << "\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "\t\t\t\t\t\t Member Not Found " << endl;
	cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	getchar();
	getchar();
}

//method for search the member by ID
bool searchbymemberid()
{
	system("cls");
	string searchid;
	cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "\t\t\t\t\t\t\tSEARCH FOR MEMBER DETAILS" << endl;
	cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
	cout << "\t\t\t\t\tEnter Your Member ID : ";
	cin >> searchid;//input the member id from user
	for (int b = 0; b < i; b++)
	{
		if (searchid == s[b].id)
		{
			cout << "\t\t\t\t\tMember ID : " << s[b].id << "\n";
			cout << "\t\t\t\t\tFirst Name : " << s[b].fname << "\n";
			cout << "\t\t\t\t\tLast Name : " << s[b].lname << "\n";
			cout << "\t\t\t\t\tAddress : " << s[b].address << "\n";
			cout << "\t\t\t\t\tPhone No : " << s[b].phone << "\n";
			cout << "\t\t\t\t\tAge : " << s[b].age << "\n";
			cout << "\t\t\t\t\tHeight : " << s[b].height << "\n";
			cout << "\t\t\t\t\tWeight : " << s[b].weight << "\n";
			cout << "\t\t\t\t\tNIC No : " << s[b].nic << "\n";
			cout << "\t\t\t\t\tAdminssion Date (dd.mm.yyyy) : " << s[b].date << "\n";

			cout << "\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
			cout << "\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
			getchar();
			getchar();
			return true;
		}
	}//message will be displayed when the member id is not found
	cout << "\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "\t\t\t\t\t\t Member Not Found " << endl;
	cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	getchar();
	getchar();
}

//method for search the member by NIC
bool searchbynic()
{
	system("cls");
	cout << endl << endl;


	string searchnic;

	cout << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n ";
	cout << "\t\t\t\t\t SEARCH THE MEMBERS FROM FILE \n";
	cout << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n ";
	cout << "\t\t\t\t\tEnter Your NIC NO : ";
	cin >> searchnic;

	for (int b = 0; b < i; b++)
	{
		if (searchnic == s[b].nic) //this will filter the member details by checking the data with NIC no
		{
			cout << "\t\t\t\t\tMember ID : " << s[b].id << "\n";
			cout << "\t\t\t\t\tFirst Name : " << s[b].fname << "\n";
			cout << "\t\t\t\t\tLast Name : " << s[b].lname << "\n";
			cout << "\t\t\t\t\tAddress : " << s[b].address << "\n";
			cout << "\t\t\t\t\tPhone No : " << s[b].phone << "\n";
			cout << "\t\t\t\t\tAge : " << s[b].age << "\n";
			cout << "\t\t\t\t\tHeight : " << s[b].height << "\n";
			cout << "\t\t\t\t\tWeight : " << s[b].weight << "\n";
			cout << "\t\t\t\t\tNIC No : " << s[b].nic << "\n";
			cout << "\t\t\t\t\tAdminssion Date (dd.mm.yyyy) : " << s[b].date << "\n";

			cout << "\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
			cout << "\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
			getchar();
			getchar();
			return true;


		}
	}
	//this message will be displayed when the NIC No is not registered on the system
	cout << "\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "\t\t\t\t\t\t Member Not Found " << endl;
	cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	getchar();
	getchar();



}

//method for help

void help()
{
	system("cls");
	cout << endl;
	cout << "\t\t\t ***********************************************************************************************************   " << endl;
	cout << " \t\t\t\t\t                           HELP MENU" << endl;
	cout << "  \t\t\t ***********************************************************************************************************" << endl;
	cout << endl;
	cout << "\t\t\tIt is a gym member management system for Atlas Gym in Kandy. " << endl;
	cout << "\t\t\tIt is developed by using the visual C++ in visual studio 2017 version software." << endl;
	cout << "\t\t\tThis system will provide only a command line interface to the users. " << endl;
	cout << "\t\t\tThis system will work with the options choose by the users. " << endl;
	cout << "" << endl;
	cout << "\t\t\tThe user can press 1 upto 7 numbers after login to the system with correct username and password. " << endl;
	cout << endl;
	cout << "                        \t\t\t..............................................  " << endl;
	cout << "                        \t\t\t.  1 is for register a new member            ." << endl;
	cout << "                        \t\t\t.  2 is for update the registered member     ." << endl;
	cout << "                        \t\t\t.  3 is for search the member by ID          ." << endl;
	cout << "                        \t\t\t.  4 is for search the member by NIC No      ." << endl;
	cout << "                        \t\t\t.  5 is for view all the registered members  ." << endl;
	cout << "                        \t\t\t.  6 is for getting onscreen help            ." << endl;
	cout << "                        \t\t\t.  7 is for Exit                             ." << endl;
	cout << "                        \t\t\t.............................................." << endl;
	cout << "" << endl;
	cout << "\t\t\tTo do update, search and view, the member should be already registered and should have the member id." << endl;
	cout << "\t\t\tMember id should be in integer value and it should be assigned mannually by the user or receptionist. " << endl;
	cout << "\t\t\tTo do work in this syetm the user should consider the data type while registering and updating details." << endl;
	cout << "\t\t\tPlease use underscore when inserting two words for the fields mainly address don't use space." << endl << endl << endl;
	cout << "\t\t\tTo add the member to the system follow the below steps" << endl;
	//help guides to register a new member
	cout << "\t\t\t\t1. Type the option as 1 in homescreen after login to the system" << endl << endl;
	cout << "\t\t\t\t2. Then press the enter key on the keyboard" << endl << endl;
	cout << "\t\t\t\t3. Then enter the member id (member id should be in unique format and in the assending order." << endl;
	cout << "\t\t\t\t   If your enter the same id which was already stored then the system will display the " << endl;
	cout << "\t\t\t\t   available details of that id. To find the last member id the view option will help you.)" << endl << endl;
	cout << "\t\t\t\t4. Then enter the next details of the members by using the keyboard and enter key." << endl << endl;
	cout << "\t\t\t\t5. After the system stored the details member added successfully message will be displayed." << endl << endl;
	cout << "\t\t\t\t6. Then press enter key to go back to the homescreen." << endl << endl << endl << endl << endl;

	//help guides to update the registered member
	cout << "\t\t\tTo update the details of the member follow the below steps" << endl;
	cout << "\t\t\t\t1. Type the option as 2 in homescreen after login to the system" << endl << endl;
	cout << "\t\t\t\t2. Then press the enter key on the keyboard" << endl << endl;
	cout << "\t\t\t\t3. Then enter the member id and press enter key(Member id should be available on the database." << endl;
	cout << "\t\t\t\t   If you enter the wrong id member not found message will be displayed. Otherwise " << endl;
	cout << "\t\t\t\t   details of that member id will be displayed along with the menu options.)" << endl << endl;
	cout << "\t\t\t\t4. To update the details of that member then select the option according to that menu." << endl;
	cout << "\t\t\t\t   The options should be in integer format and within 0 to 9." << endl << endl << endl << endl;
	cout << "\t\t\t\t   Functions of the update options are below. " << endl;
	cout << endl;
	cout << "                        \t\t\t..............................................  " << endl;
	cout << "                        \t\t\t.  1 is for update First Name                ." << endl;
	cout << "                        \t\t\t.  2 is for update Last Name                 ." << endl;
	cout << "                        \t\t\t.  3 is for update Address                   ." << endl;
	cout << "                        \t\t\t.  4 is for update Contact No                ." << endl;
	cout << "                        \t\t\t.  5 is for update Age                       ." << endl;
	cout << "                        \t\t\t.  6 is for update Height                    ." << endl;
	cout << "                        \t\t\t.  7 is for update Weight                    ." << endl;
	cout << "                        \t\t\t.  8 is for update NIC NO                    ." << endl;
	cout << "                        \t\t\t.  9 is for update Admission Date            ." << endl;
	cout << "                        \t\t\t.  0 is for back to Homescreen               ." << endl;
	cout << "                        \t\t\t.............................................." << endl;
	cout << "" << endl;
	cout << "\t\t\t\t   The users should type the option according to the field which they want to edit. " << endl << endl;
	cout << "\t\t\t\t5. Then press the enter key on the keyboard. The system will ask to add the new data " << endl << endl;
	cout << "\t\t\t\t6. After typing the new data then the user should press the enter key. Here too the user " << endl;
	cout << "\t\t\t\t   should be aware of the data type likes integer, string and the space characters. " << endl << endl;
	cout << "\t\t\t\t7. After pressing the enter key the system will show the same option menu for the same " << endl;
	cout << "\t\t\t\t   id to update another details. If needed the user can again choose the option and edit the data." << endl;
	cout << "\t\t\t\t   You cannot modify the ID once stored. Otherwise the user should type the option as " << endl;
	cout << "\t\t\t\t   0 and press the enter key to move for the homescreen." << endl << endl << endl << endl;


	//guides to search the member from the file by using id
	cout << "\t\t\tTo search the details of the member user can use two methods. " << endl;
	cout << "\t\t\t\t1. Using ID" << endl << endl;
	cout << "\t\t\t\t2. Using NIC No" << endl << endl << endl;
	cout << "\t\t\tTo search by Id follow the below steps," << endl;
	cout << "\t\t\t\t1. Select the option as 3 in homescreen and press enter key. " << endl << endl;
	cout << "\t\t\t\t2. Then, enter the member id to search and again press the enter key." << endl << endl;
	cout << "\t\t\t\t3. If the ID is correct member details will be diaplayed and " << endl;
	cout << "\t\t\t\t   otherwise member not found message will be displayed." << endl << endl;
	cout << "\t\t\t\t4. Then press the enter key to again go back to the homescreen." << endl << endl << endl;

	//guide to search the member from the file by using the NIC No
	cout << "\t\t\tTo search by NIC No follow the below steps," << endl;
	cout << "\t\t\t\t1. Select the option as 4 in homescreen and press enter key. " << endl << endl;
	cout << "\t\t\t\t2. Then, enter the NIC No to search and again press the enter key." << endl << endl;
	cout << "\t\t\t\t3. If the NIC No is correct then the member details will be diaplayed and " << endl;
	cout << "\t\t\t\t   otherwise member not found message will be displayed." << endl << endl;
	cout << "\t\t\t\t4. Then press the enter key to again go back to the homescreen." << endl << endl << endl << endl;

	//guide to view all the member from the file 
	cout << "\t\t\tTo view all the member details follow the below steps," << endl;
	cout << "\t\t\t\t1. Type the option as 5 in homescreen after login to the system." << endl << endl;
	cout << "\t\t\t\t2. Then press the enter key on the keyboard." << endl << endl;
	cout << "\t\t\t\t3. Then the system will diaply all the member details." << endl << endl;
	cout << "\t\t\t\t4. Again press enter key to go back to the homescreen." << endl << endl << endl << endl << endl;

	// guide to get into the help guides
	cout << "\t\t\tTo get into the help option follow the below steps" << endl;
	cout << "\t\t\t\t1. Type the option as 6 in homescreen after login to the system" << endl << endl;
	cout << "\t\t\t\t2. Then press the enter key on the keyboard" << endl << endl;
	cout << "\t\t\t\t3. Then the system will display the help menu." << endl << endl;
	cout << "\t\t\t\t4. Again press enter key to go back to the homescreen." << endl << endl << endl << endl << endl;

	// guide to get into the exit option and close the system
	cout << "\t\t\tTo exit from the system follow the below steps" << endl;
	cout << "\t\t\t\t1. Type the option as 7 in homescreen after login to the system" << endl << endl;
	cout << "\t\t\t\t2. Then press the enter key on the keyboard" << endl << endl;
	cout << "\t\t\t\t3. Then the system will display the confirmation details." << endl << endl;
	cout << "\t\t\t\t4. In that screen type Y or y for exit and N or n for cancel." << endl;
	cout << "\t\t\t\t   If you press N or n the system will go back to the homescreen." << endl;
	cout << "\t\t\t\t   If you press any other letter the system will ask again the correct letter." << endl << endl << endl << endl << endl;

	cout << "" << endl;
	cout << "\t\t\tIn future this can be modified with more advanced features." << endl;
	cout << "" << endl;
	cout << "                              \t\t\t Thanks for Atlas Gym " << endl;
	cout << "" << endl;
	cout << "\t\t\tFor further details" << endl;
	cout << "\t\t\tContact" << endl;
	cout << "\t\t\tHND in Com" << endl;
	cout << "\t\t\tEsoft Metro Campus " << endl;
	cout << "\t\t\tJaffna" << endl;
	cout << "" << endl;

	getchar();
	cout << "\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	cout << "\t\t\t\t\t\tPRESS ENTER TO GO FOR HOMESCREEN" << endl << endl;
	cout << "\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	getchar();
}
//method for exit
void exi()
{
	string ex;
	system("cls");
	cout << "       " << endl;
	cout << "\t \t \t \t \t \t\t       + ------------------------ +     " << endl;
	cout << "\t \t \t \t \t \t\t       |                          |              " << endl;
	cout << "\t \t \t \t \t \t\t       |         THANK YOU        |" << endl;
	cout << " \t \t \t \t \t \t\t       |      ESOFT METRO CAMPUS  |" << endl;
	cout << "\t \t \t \t \t \t\t       |            JAFFNA        |" << endl;
	cout << " \t \t \t \t \t \t\t       |                          |  " << endl;
	cout << "  \t \t \t \t \t \t\t       + ------------------------ +" << endl;
	cout << "       " << endl;
	cout << "       " << endl;
	cout << "       " << endl;
	cout << "       " << endl;
	cout << "                                          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	cout << "\t \t \t \t \t \t \t\tARE YOU SURE DO YOU WANT TO CLOSE THE SYSTEM" << endl << endl;
	cout << "\t \t \t \t \t \t \t\tYES ....................PRESS Y" << endl;
	cout << "\t \t \t \t \t \t \t\tNO  ....................PRESS N" << endl << endl;

	cout << "                                          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;
	cout << "\t \t \t \t \t \t PRESS Y / N ........................ ";
	cin >> ex;
	if (ex == "Y" || ex == "y")//y or Y for exit
	{

		std::exit(0);


	}
	else if (ex == "N" || ex == "n")//n or N for back
	{
		system("cls");

		menu();
		getchar();
	}
	else
	{
		cout << endl << endl << endl << endl;
		cout << "\t\t\t\t\t\tPLEASE CHECK YOUR ENTERED LETTER" << endl << endl;
		//check the option message will be displayed
		getchar();
		getchar();
		exi();
		system("cls");

		getchar();
	}

}
//method for option choosing
void menu()
{
	system("cls");
	char choice;
	File2Struct();
	do
	{
		system("cls");
		cout << endl << endl;
		cout << "                                          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
		cout << "\t \t \t \t \t \t PLEASE SELECT THE OPTION TO DO YOUR WORK ON THIS SYSTEM" << endl << endl;
		cout << "                                          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;
		cout << "\n\n \t\t\t\t\tChoose 1 for Add members" << endl;
		cout << "\t\t\t\t\tChoose 2 for Update members" << endl;
		cout << "\t\t\t\t\tChoose 3 for Search members by ID" << endl;
		cout << "\t\t\t\t\tChoose 4 for Search members by NIC No" << endl;
		cout << "\t\t\t\t\tChoose 5 for View all members" << endl;
		cout << "\t\t\t\t\tChoose 6 for Help option" << endl;
		cout << "\t\t\t\t\tChoose 7 for Exit from the system" << endl << endl << endl;
		cout << "\t\t\t\t\tTYPE YOUR OPTION HERE (Option must be in integer format & within 1-7)......... ";
		cin >> choice;
		switch (choice)//switch to execute the methods according to the users option 
		{
		case '1': system("cls");
			checkid();
			break;
		case '2': system("cls");
			modifymember();
			break;
		case '3': system("cls");
			searchbymemberid();
			break;
		case '4': system("cls");
			searchbynic();
			break;
		case '5': system("cls");
			viewmember();
			break;
		case '6':
			help();
			break;
		case '7': system("cls");
			exi();
			getchar();
			break;
		default: //used to display check the option
			cout << "                                          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
			cout << "\t \t \t \t \t             PLEASE CHOOSE THE CORRECT OPTIONS FROM THE ABOVE LIST" << endl << endl;
			cout << endl;
			cout << "                                          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;
			getchar();
			getchar();
			menu();
			getchar();
		}

	} while (choice != '7');
}

//main method
/*main method will be executed when run the source code and this will run the statements one by one*/

int main()
{

	login();
	menu();

} //end of main method
//end of system
