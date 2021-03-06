#ifndef Report_H
#define Report_H

#include <string>
using namespace std;

class Report { 
public:
	//Constructors
	Report(); //default
	Report(int y, double b, double i, double mD, double iR, double iIR, double iD); //normal
	Report(const Report& obj); //copy
	//Mutators
	void SetYear(int y);
	void SetYearEndBalence(double endBalence);
	void SetYearEndEarnedInterest(double earnedInterest);
	void SetInitialDeposit(double ideposit);
	void SetMonthlyDeposit(double mdeposit);
	void SetInterestRate(double interestRate);
	//Assessors 
	int GetYear();
	double GetYearEndBalence();
	double GetYearEndEarnedInterest();
	double GetInitialDeposit();
	double GetMonthlyDeposit();
	double GetInterestRate();
	// Print Methods:
	void printDataMenuWithInput();
	void PrintBalenceAndInterestTablesTopWithout();
	void PrintBalenceAndInterestTablesTopWith();
	void PrintBalenceAndInterestTablesBottom();
	// Other Methods:
	

	//Private data members
private:
	int year;
	double yearEndBalence;
	double yearEndEarnedInterest;
	double monthlyDeposit;
	double interestRate;
	double initialDeposit;
};








#endif
