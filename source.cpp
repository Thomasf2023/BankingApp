#include <iostream>
#include <cstring>
#include <fstream>
#include "Report.h"
#include <iomanip>
#include <chrono>
#include <thread>
#include <windows.h>
#include <stdlib.h>

using namespace std;
/* This program will display a screen that tells the user their intial investment, monthly deposit, annual interest, and 
number of years. The program will then display two reports that show balence and interest with and with out additional 
monthly deposits. These reports will include year end balence, and  year end earned interest for a five year period.
In order to do this, this program will have to account for months, opening amount, deposited amount, total, interest,
and closing balence.
Author: Thomas Fiske
Date: 1/31/22 
*/


//This function converts years entered by user to months
int yearCalc(int months) {
	int year;

	year = months / 12;

	return year;
}


void printDataMenu() { // Prints data input menu
	

	cout << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	cout << "Initial Investment Amount:" << endl;
	cout << "Monthly Deposit: " <<  endl;
	cout << "Annual Interest: " <<  endl;
	cout << "Number of years: " << endl;
	cout << "**********************************" << endl;
}

void main() { // Main function

	//Variables
	double openingAmount;
	double depositedAmount;
	double interestRate;
	int months;
	int year;
	int quitChoice;
	boolean loopVar = true;
	double yearlyInterest = 0.0;
	double monthlyInterest;
	double monthlyClosingBalence;
	

	//Class instances
    Report userReport;
	
//Start of menu without input
	while (loopVar == true) { // will loop until program reaches end AND user inputs quit key.
		printDataMenu(); 

		cout << endl;

		cout << "Enter an amount of months (Ex. 12)" << endl;
	        cin >> months;
			if (cin.fail()) //Check to make sure user entered the correct type, if user does not then a message will appear.
			{
				cin.clear(); 
				cin.ignore(); 
				cout << "Please enter an Integer only (ex. 120)." << endl;
				cin >> months; //another chance for user to enter a value
				
			}
			cout << months << " submitted" << endl; // Verifies user input to the user
			cout << endl;
			cout << "Enter an interest rate (Ex. 0.05)" << endl;
		cin >> interestRate;
		if (cin.fail()) 
		{
			cin.clear();
			cin.ignore();
			cout << "Please enter a decimal (ex. 0.05) only" << endl;
			cin >> interestRate;
		}
		cout << fixed << setprecision(2) << interestRate << " submitted" << endl;
		cout << endl;
		cout << "Enter an initial deposited amount (Ex. 1.00)" << endl; 
		cin >> openingAmount;
		if (cin.fail()) 
		{
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer followed by a decimal (ex. 1.00) or integer (1) only." << endl;
			cin >> openingAmount;


		}
		cout << fixed << setprecision(2) << openingAmount << " submitted" << endl;
		cout << endl;
		cout << "Enter a monthly deposit amount (Ex. 50.00)" << endl;
		cin >> depositedAmount;
		if (cin.fail()) 
		{
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer followed by a decimal (ex. 50.00) or integer (50) only." << endl;
			cin >> depositedAmount;
		}
		cout << fixed << setprecision(2) << depositedAmount << " submitted" << endl;
		cout << endl;

		cin.get();
		Sleep(1000); 
		system("CLS");

		year = yearCalc(months);

		userReport.SetYear(year); // Setting 
		userReport.SetInterestRate(interestRate);
		userReport.SetInitialDeposit(openingAmount);
		userReport.SetMonthlyDeposit(depositedAmount);
	

		userReport.printDataMenuWithInput();
		

		cout << endl;
		cout << "Press the enter key to continue";

		cin.get();
		Sleep(1000);
		system("CLS");
		// End of data menu 

		/* Start of balenceand interest tables. These will run as for loops that will loop until the months have been reached
		or 10 years has been reached. The if statements will cause the program to set year, year end balence, and year end 
		earned interest and then print the infomation for that year using the function defined in the Report class.*/
		
		userReport.PrintBalenceAndInterestTablesTopWithout();
		for (int i = 0; i < months + 1; ++i) {
			monthlyInterest = (openingAmount + 0) * (interestRate / 12);
			monthlyClosingBalence = openingAmount + 0 + monthlyInterest;
			yearlyInterest = yearlyInterest + monthlyInterest;
			openingAmount = monthlyClosingBalence;
			if (i == 12) {
				userReport.SetYear(1);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 24) {
				userReport.SetYear(2);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 36) {
				userReport.SetYear(3);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 48) {
				userReport.SetYear(4);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 60) {
				userReport.SetYear(5);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 72) {
				userReport.SetYear(6);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 84) {
				userReport.SetYear(7);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 96) {
				userReport.SetYear(8);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 108) {
				userReport.SetYear(9);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 120) {
				userReport.SetYear(10);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;
				
			}
			
		}

		userReport.PrintBalenceAndInterestTablesTopWith();
		/* for loop that will run until months is reached.This will display the balenceand interest tables with
		monthly deposits */
		for (int i = 0; i < months + 1; ++i) {
			monthlyInterest = (openingAmount + depositedAmount) * (interestRate / 12);
			monthlyClosingBalence = openingAmount + depositedAmount + monthlyInterest;
			yearlyInterest = yearlyInterest + monthlyInterest;
			openingAmount = monthlyClosingBalence;
			if (i == 12) {
				userReport.SetYear(1);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;
				
			}
			if (i == 24) {
				userReport.SetYear(2);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 36) {
				userReport.SetYear(3);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 48) {
				userReport.SetYear(4);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 60) {
				userReport.SetYear(5);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 72) {
				userReport.SetYear(6);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 84) {
				userReport.SetYear(7);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 96) {
				userReport.SetYear(8);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 108) {
				userReport.SetYear(9);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;

			}
			if (i == 120) {
				userReport.SetYear(10);
				userReport.SetYearEndBalence(monthlyClosingBalence);
				userReport.SetYearEndEarnedInterest(yearlyInterest);
				userReport.PrintBalenceAndInterestTablesBottom();
				yearlyInterest = 0;
				
			}
			
		}
		cout << endl;
		cout << endl;
		// now the program will give the option for the user to quit by inputting 1 or 2.
		cout << "Do you wish to return to the main menu? type 1 to return or 2 to quit";
		cin >> quitChoice;
		if (quitChoice == 1) {
			Sleep(1000);
			system("CLS");
			continue;
		}
		if (quitChoice == 2){ // will quit if user inputs 2, with goodbye message.
			cout << endl;
			cout << "***********************" << endl;
			cout << "* Thank you for using *" << endl;
			cout << "*   our app today!!   *" << endl;
			cout << "***********************" << endl;
			break;
		}
		else {
			"Please enter a valid response";
		}

		

		
		

	}




	
}
