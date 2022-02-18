#include "Report.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>


//Constructors
Report::Report() { //default
	year = 0;
	yearEndBalence = 0.00;
	yearEndEarnedInterest = 0.00;
	monthlyDeposit = 0.0;
	interestRate = 0.0;
	initialDeposit = 0.0;
	
	
	
} 

Report::Report(int y, double b, double i, double mD, double iR, double iIR, double iD) { //normal
	year = y;
	yearEndBalence = b;
	yearEndEarnedInterest = i;
	monthlyDeposit = mD;
	interestRate = iR;
	initialDeposit = iD;
}

Report::Report(const Report& obj) { //copy
	year = obj.year;
	yearEndBalence = obj.yearEndBalence;
	yearEndEarnedInterest = obj.yearEndEarnedInterest;
	monthlyDeposit = obj.monthlyDeposit;
	interestRate = obj.interestRate;
	initialDeposit = obj.initialDeposit;

}


//Mutators
void Report::SetYear(int y) {
	year = y;
}

void Report::SetYearEndBalence(double endBalence) {
	yearEndBalence = endBalence;
}

void Report::SetYearEndEarnedInterest(double earnedInterest) {
	yearEndEarnedInterest = earnedInterest;
}

void Report::SetInitialDeposit(double ideposit) {
	initialDeposit = ideposit;
}

void Report::SetMonthlyDeposit(double mdeposit) {
	monthlyDeposit = mdeposit;
}
void Report::SetInterestRate(double interestRate) {
	interestRate = interestRate;
}




//Assessors 
int Report::GetYear() {
	return year;
}

double Report::GetYearEndBalence() {
	return yearEndBalence;
}

double Report::GetYearEndEarnedInterest() {
	return yearEndEarnedInterest;
}
double Report::GetInitialDeposit() {
	return initialDeposit;
}
double Report::GetMonthlyDeposit() {
	return monthlyDeposit;
}
double Report::GetInterestRate() {
	return interestRate;
}


//Print Functions
void Report::printDataMenuWithInput() { // Prints data input menu with input from the user


	cout << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	cout << fixed << setprecision(2) << "Initial Investment Amount: $" << initialDeposit << endl;
	cout << fixed << setprecision(2) << "Monthly Deposit: $" << monthlyDeposit << endl;
	cout << fixed << setprecision(2) << "Annual Interest: " << interestRate << "%" << endl;
	cout << "Number of years: " << year << endl;
	cout << "**********************************" << endl;
}

void Report::PrintBalenceAndInterestTablesTopWithout() { // Prints the top part of the table without monthly deposits
	

	cout << "-------------------------------------------------------------------" << endl;
	cout << "      Balence and Interest Without Additional Monthly Deposits" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "    Year       Year End Balence      Year End Earned Interest" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	
}
void Report::PrintBalenceAndInterestTablesTopWith() { // Prints the top part of the table with monthly deposits

	cout << "-------------------------------------------------------------------" << endl;
	cout << "      Balence and Interest With Additional Monthly Deposits" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "    Year       Year End Balence      Year End Earned Interest" << endl;
	cout << "-------------------------------------------------------------------" << endl;
}
void Report::PrintBalenceAndInterestTablesBottom() { // Prints out bottom of the table, will be used in a loop.
	cout << setw(6) << year << setw(18) << yearEndBalence << setw(28) << yearEndEarnedInterest << endl;

}

//Other functions
