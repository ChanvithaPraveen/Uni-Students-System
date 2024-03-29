#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

using namespace std;

//declare global variables
int numOfStudents = 122; //total students in the batch
int count = 1, userInput1;
string lastName;

//declare functions
void logging();
void introduction();
void firstSemMarksIndividual();
void firstSemMarksFull();
void batchmateNames();

void logging()
{
	string password;
	string PASSWORD = "foeusjp";
	
	cout << "\n\n\n\n\t**********Welcome To Faculty Of Engineering University Of Sri Jayawardenapura**********\n";
	cout << "\n\n\n\n\n\t\t   Enter your LAST NAME : ";
	cin >> lastName;
	
	if(lastName == lastName)
	{
		cout << "\n\t\t   Enetr the PASSWORD   : ";
		cin >> password;
		if(password == PASSWORD)
		{
			cout << "\n\t\t   Logging";
			for(int r=1; r<=10; r++)
			{
				cout << ".";
				Sleep(200);
			}
		}else
		{
			cout << "\n\t\t   Your password is invalid!";
			while(password != PASSWORD)
			{			
				cout << "\n\t\t   Enetr the PASSWORD   : ";
				cin >> password;
			}
		}
	}
	system("CLS");
}

class base
{
	public:
		base() { logging(); }
};

base b;

int main()
{
	cout << "\n\t**********Welcome To Faculty Of Engineering University Of Sri Jayawardenapura**********\n";
	cout << "\t     ";
	for(int i=1; i<16; i++)
		{
			cout << "*";
			Sleep(40);
			cout << "*";
		}
	cout << "2018/2019 Batch";
	for(int i=1; i<16; i++)
		{
			cout << "*";
			Sleep(40);
			cout << "*";
		}
	//cout << "\t\t\t********************2018/2019 Batch********************" << endl;
	
	cout << "\n\n   Hi " << lastName << "!";
	
	int userInput;
	
	cout << "\n\n   Press 1 to see Introduction about batch\n";
	cout << "   Press 2 to see Personal Details\n";
	cout << "   Press 3 to see 1st semester results\n";
	cout << "\n   Input: ";
	cin >> userInput; //get user input about selections
	
	if(userInput>0 && userInput<=5) //check if the user input valid or not
	{
		if(userInput==1)
		{
			introduction();
		}
		else if(userInput==2)
		{
			batchmateNames();
		}
		else if(userInput==3)
		{
			cout << "\n   Press 1 to get individual details\n";
			cout << "   Press 2 to get full report of details\n";
			cout << "\n   Input: ";
			cin >> userInput1; //get sub user input 
			
			switch(userInput1)
			{
				case 1: {firstSemMarksIndividual();break;}
				case 2: {firstSemMarksFull();break;}
				default:
				{
					while(userInput1<=0 || userInput1>=3) //loop the fuction if user enter invalid input1
					{
						cout << "   Enter your input again correctly: ";
						cin >> userInput1;
					}
					break;
				}
			}		
		}
	}
	else
	{
		cout << "   Please enter a valid input number!!!\n\n";
	}
	
	while(userInput<=0 || userInput>=5) //loop the fuction if user enter invalid input
	{
		cout << "   Enter your input again correctly: ";
		cin >> userInput;
	}
	
	char homePage;
	cout << "\n\n   Do you want go Home Page: Y or N: ";
	cin >> homePage;
	if(homePage=='Y' || homePage=='y')
	{
		system ("CLS");
		main();
	}
	else
	{
		cout << "   Logging out ";
		for(int r=1; r<=10; r++)
		{
			cout << ".";
			Sleep(200);
		}
		system("CLS");
		logging();
		main();
	}
	
	return 0;
}

void introduction() // Function of Report of the introduction
{
	cout << "\n   INTRODUCTION\n\n";
	cout << "   This is the site of 4th batch in faculty of engineering university of Sri Jayawardanepura."
				"There are \n   121 students in this batch in all over the country with different districts."
				"Started this batch in \n   29th of November in 2019. After the one month orientation period"
				"started the academic studies in 2nd \n   of February in 2020. For more details refer below.\n\n";
	cout << "   Faculty Office\t\t\t\t\t- Tel: 011-3041607\n"
			"   Department of Civil Engineering\t\t\t- Tel: 011-9999999\n"
			"   Department of Computer Engineering\t\t\t- Tel: 011-9999999\n"
			"   Department of Electrical and Electronic Engineering\t- Tel: 011-9999999\n"
			"   Department of Mechanical Engineering\t\t\t- Tel: 011-9999999";
}

void firstSemMarksFull() //Function of Full report of the results 
{
	cout << "\n\tIndex No:"<< "                     GPA" << "                  Rank\n\n";
	for(int count=1; count <=numOfStudents; count++)
	{
		float gpaArray[numOfStudents] = {3.88,4.00,3.46,3.43,3.53,2.95,2.99,3.53,4.00,3.51,3.57,3.82,3.8,
		2.725,0.85,3.9625,3.35,1.1875,3.9625,0.9,3.4875,3.2,3.875,3.525,3.55625,3.7,3.9625,3.4375,2.63125,
		3.3875,3.925,2.50625,3.83125,3.3125,3.21875,3.69375,3.35,3.5125,3.73125,3.75625,4,2.625,3.01875,
		4,3.65625,0,2.61875,3.15625,3.9125,4,3.21875,2.38125,3.3125,3.825,3.55,3.7125,3.86875,3.7,3.5625,
		3.275,3.20625,3.35,3.45625,2.775,4,3.61875,2.84375,3.21875,3.9625,3.83125,3.69375,3.6125,3.85625,
		3.9625,3.73125,3.3875,2.35625,3.5625,3.675,3.55625,2.65625,3.64375,3.1375,1.86875,3.86875,2.83125,
		3.8875,3.56875,3.3,1.70625,3.7625,2.56875,1.6875,3.94375,3.39375,4,3.26875,3.21875,3.85625,3.79375,
		3.51875,3.34375,3.43125,3.50625,3.08125,3.26875,3.59375,3.90625,3.2125,3.56875,2.83125,3.60625,3.85,
		3.7,0,3.1875,4,3.01875,3.5125,3.7375,3.725,3.35};
		
		int rankArray[numOfStudents] = {19,1,68,72,60,98,101,59,1,63,51,29,30,106,120,9,76,118,9,119,6,93,19,
		60,56,39,9,70,108,74,15,112,26,81,87,42,76,63,35,33,1,109,99,1,45,121,110,95,16,1,87,113,81,28,58,	
		38,21,41,54,84,92,76,69,105,1,47,102,87,9,26,42,48,23,9,35,4,114,54,44,57,107,46,96,115,21,103,18,
		51,83,116,32,111,117,14,73,1,85,87,23,31,62,80,71,66,97,85,50,17,91,51,103,49,25,39,121,94,1,99,63,
		34,37,76};
		
		cout << "\t19/ENG/" << count << "  -------------->>  " << gpaArray[count-1] << "  ------------>>  " << rankArray[count-1] << endl;	
	}	
}

void firstSemMarksIndividual() //Function of Individual report of the result
{
	float gpaArray[numOfStudents] = {3.88,4.00,3.46,3.43,3.53,2.95,2.99,3.53,4.00,3.51,3.57,3.82,3.8,
		2.725,0.85,3.9625,3.35,1.1875,3.9625,0.9,3.4875,3.2,3.875,3.525,3.55625,3.7,3.9625,3.4375,2.63125,
		3.3875,3.925,2.50625,3.83125,3.3125,3.21875,3.69375,3.35,3.5125,3.73125,3.75625,4,2.625,3.01875,
		4,3.65625,0,2.61875,3.15625,3.9125,4,3.21875,2.38125,3.3125,3.825,3.55,3.7125,3.86875,3.7,3.5625,
		3.275,3.20625,3.35,3.45625,2.775,4,3.61875,2.84375,3.21875,3.9625,3.83125,3.69375,3.6125,3.85625,
		3.9625,3.73125,3.3875,2.35625,3.5625,3.675,3.55625,2.65625,3.64375,3.1375,1.86875,3.86875,2.83125,
		3.8875,3.56875,3.3,1.70625,3.7625,2.56875,1.6875,3.94375,3.39375,4,3.26875,3.21875,3.85625,3.79375,
		3.51875,3.34375,3.43125,3.50625,3.08125,3.26875,3.59375,3.90625,3.2125,3.56875,2.83125,3.60625,3.85,
		3.7,0,3.1875,4,3.01875,3.5125,3.7375,3.725,3.35};
		
	int rankArray[numOfStudents] = {19,1,68,72,60,98,101,59,1,63,51,29,30,106,120,9,76,118,9,119,6,93,19,
		60,56,39,9,70,108,74,15,112,26,81,87,42,76,63,35,33,1,109,99,1,45,121,110,95,16,1,87,113,81,28,58,	
		38,21,41,54,84,92,76,69,105,1,47,102,87,9,26,42,48,23,9,35,4,114,54,44,57,107,46,96,115,21,103,18,
		51,83,116,32,111,117,14,73,1,85,87,23,31,62,80,71,66,97,85,50,17,91,51,103,49,25,39,121,94,1,99,63,
		34,37,76};
	
	int y;
	
	cout << "\t19/ENG/";
	cin >> y;
	
	while(y<=0 || y>=numOfStudents)
	{
		cout << "   \tEnter your index again correctly: 19/ENG/";
		cin >> y;
	}
	cout << "\n\tIndex No:"<< "                     GPA" << "                  Rank\n\n";
	cout << "\t19/ENG/" << y << "  -------------->>  " << gpaArray[y-1] << "  ------------>>  " << rankArray[y-1] << endl;
}

void batchmateNames()
{
	const char *namesArray[numOfStudents] = {
		"AMEENUDEEN - KANDY",
		"ABEYGUNAWARDANA",
		"ABEYKOON - MATALE",
		"KOONGAHA - GAMPAHA",
		"RAJADURAI ",
		"MAISOOR",
		"KULATHUNGA - RATNAPURA",
		"BANDARA - KURUNEGALA",
		"PASYALA - GAMPAHA",
		"BASKARAN DAJEV",
		"IMIYAGE - GAMPAHA",
		"THATHSARA - GAMPAHA",
		"UMESH - PUTTALM",
		"GAMANAYAKAGE - GAMPAHA",
		"DIMANTHA - GAMPAHA",
		"ILIYAPPA - PUTTALM",
		"KACHCHAKADUGE FERNANDO",
		"MIHINDUKULASURIYA - GAMPAHA",
		"WARNAKULASOORIYA - POLONNARUWA",
		"GAMAGE - COLOMBO",
		"SACHCHITHANANTHAN",
		"HITIHAMI - BADULLA",
		"ANJANA - KALUTHARA",
		"DON - KALUTHARA",
		"EDIRISINGHA - NUWARA ELIYA",
		"HARITHA - COLOMBO",
		"ALUTHGAMA - GAMPAHA",
		"UTHAYAKUMAR",
		"DASUN - KALUTHARA",
		"HERATH - GAMPAHA",
		"HETTIARACHCHIGE - GAMPAHA",
		"HETTIARACHCHILAGE - GAMPAHA",
		"ALUTHGE",
		"UDUMALAGALA - GALLE",
		"KARIYAWASAM - GAMPAHA",
		"MITHARA - GALLE",
		"ISHAQU",
		"NABARUNNAGEY - COLOMBO",
		"TIKIRA - HAMBANTHOTA",
		"KATHRI - KALUTHARA",
		"PATHMARASA",
		"JAYAKODY - GAMPAHA",
		"JAYALATH - KURUNEGALA",
		"JAYASINGHE - KANDY",
		"YAPAE - GAMPAHA",
		"SRIKANTHARASA",
		"KARAVITA - GAMPAHA",
		"ATHUKORALAGE - GAMPAHA",
		"KARIYAWASAM - GAMPAHA",
		"THIVAGARASARMA",
		"BANDARA - KURUNEGALA",
		"HERATH - COLOMBO",
		"KASTHURI - GAMPAHA",
		"RUSIRUI - KANDY",
		"JASENTHU - GAMPAHA",
		"RAMANATHAN",
		"HIRUSH - COLOMBO",
		"MALITHA - COLOMBO",
		"KONARA - NUWARA ELIYA",
		"HANSA - BADULLA",
		"WANASINGH - KURUNEGALA",
		"NAPE - GALLE",
		"AMODA - GALLE",
		"JEEWANTHA - GAMPAHA",
		"WARNAKULASURIYA - PUTTALM",
		"MADABAVITAGE - GAMPAHA",
		"MATARA - KALUTHARA",
		"MANCHANAYAKA - GAMPAHA",
		"RATHAKRISHNAN",
		"RATHNASEKARA - COLOMBO",
		"KANTHRIGE - GAMPAHA",
		"LOKU - KALUTHARA",
		"WATUNA - COLOMBO",
		"MUDALI - KALUTHARA",
		"ANDARA - COLOMBO",
		"HETTIARACHCHIGE - GAMPAHA",
		"PERERA - GAMPAHA",
		"PORUTHOTAGE - PUTTLM",
		"NISHALYA",
		"EDIRISINGHE - GAMPAHA",
		"JANITH - KURUNEGALA",
		"PUSSADENIYA",
		"KRISHANTHI",
		"UDAKUMBURA - KANDY",
		"RAJAPAKSHE - GAMPAHA",
		"JAYAWEERA - GAMPAHA",
		"RANAMUKA - GAMPAHA",
		"GALLE - GAMPAHA",
		"SENADHEERA - GAMPAHA",
		"NISHANKAGE - GAMPAHA",
		"BASTIAN - GAMPAHA",
		"GINIGAL - GALLE",
		"SAJITH - HAMBANTHOTA",
		"GAVISHKA - GAMPAHA",
		"SENANAYAKE - KURUNEGALA",
		"SENARATNE - COLOMBO",
		"JESURASA",
		"SERAM",
		"SILVA",
		"JAHAPU - GAMPAHA",
		"SIVASANKARANATHAN",
		"SIVASHANMUGAMOORTHY - JAFFNA",
		"HENNADIGE",
		"SUBASINHA - KEGALLE",
		"KUDA",
		"NAMARATHNA - GAMPAHA",
		"PATHIRANNEHELAGE - KURUNEGALA",
		"PELENDAGE - GAMPAHA",
		"WAHARAKA - GAMPAHA",
		"WANASINGHA - KURUNEGALA",
		"WEERATHUNGAGE - GAMPAHA",
		"UDAMULLE - MATALE",
		"WICKRAMASINGHE - GAMPAHA",
		"WICKRAMATHILAKA - MATARA",
		"UNKNOWN PERSON",
		"WIJESINGHE - KURUNEGALA",
		"WIJETHUNGE - MATALE",
		"WITHARAMA - RATNAPURA",
		"YASAWARDHANA - COLOMBO",
		"YUVESHANTH",
		"MADUWANTHA - GALLE",
		"PUSSELLA - GAMPAHA"};
		
			cout << "\n   Press 1 to get individual name\n";
			cout << "   Press 2 to get full report of names\n";
			cout << "   Press 3 to generate a random person\n";
			cout << "\n   Input: ";
			cin >> userInput1; //get sub user input 
			
			switch(userInput1)
			{
				case 1: { //get individual name
					int p;
					cout << "\t19/ENG/";
					cin >> p;
					cout << "\t" << namesArray[p-1];
					
					while(p<=0 || p>=numOfStudents)
					{
						cout << "   \tEnter your index again correctly: 19/ENG/";
						cin >> p;
					}
					;break;}
				
				case 2: { // get full report of names
					for(int count=1; count<=numOfStudents; count++)
					{
						cout << "\n\t" << namesArray[count-1] << endl;
					}
					break;}
				
				case 3: { // get a random name
					int randomNumber;
					srand(time(NULL));
					randomNumber = 1 + rand() % numOfStudents;
					cout << "\t19/ENG/" << randomNumber;
					cout << "\n\t" << namesArray[randomNumber-1];									
					break;
				}
				default:
				{
					while(userInput1<=0 || userInput1>=3) //loop the fuction if user enter invalid input1
					{
						cout << "   Enter your input again correctly: ";
						cin >> userInput1;
					}
					break;
				}
			}
}








