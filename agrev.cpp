// agrev.cpp
// Erroll Abrahamian, CISP 360
// 09/16/2018

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string firstName,
		lastName,
		jan = "Avg January Temperature",
		jan50 = "Avg Projected Jan Temp in 50 Years",
		july = "Avg July Temperature",
		july50 = "Avg Projected July Temp in 50 Years",
		degF = " degrees F",
		degC = " degrees C";

	float seaInc,
		tempInc15,
		tempInc50;

	const float TEMPDENJAN = 35,
				TEMPNYCJAN = 32,
				TEMPPHXJAN = 62,
				TEMPSACJAN = 50;

	const float TEMPDENJUL = 88,
				TEMPNYCJUL = 85,
				TEMPPHXJUL = 106,
				TEMPSACJUL = 92;

	const float TEMPLAJAN = 62,
				TEMPLAJUL = 79;
		
	cout << "Hey you! What's your first name?" << endl;
	cin >> firstName;
	cout << "" << endl;
	cout << "OK, what about your last name?" << endl;
	cin >> lastName;
	cout << "" << endl;

	cout << "What is the mean annual sea level increase per year, in mm? Currently predicted at 3.1." << endl;
	cin >> seaInc;
	cout << "" << endl;

	cout << "What is the mean air temperature increase for the next 15 years, in degrees F? Currently predicted at 2.0." << endl;
	cin >> tempInc15;
	cout << "" << endl;

	// All temps will increase at the same rate over 50 years
	tempInc50 = tempInc15 / 15 * 50;
	// convert the increase to Celsius
	
	// Make all temperatures print 2 decimals
	cout << fixed << setprecision(2);

	// Output all the things!

	
	cout << left << setw(45) << "DENVER" << left << setw(38) << "DENVER" << endl;
	cout << "---------------------------------------------------------------------------" << endl;
	cout << left << setw(45) << jan << left << setw(38) << july << endl;
	cout << right << setw(6) << TEMPDENJAN << degF << "    " << right << setw(6) << (TEMPDENJAN - 32) / 1.8 << degC << "         " 
		<< right << setw(6) << TEMPDENJUL << degF << "    " << right << setw(6) << (TEMPDENJUL - 32) / 1.8 << degC << endl;
	cout << "" << endl;
	cout << left << setw(45) << jan50 << left << setw(38) << july50 << endl;
	cout << right << setw(6) << TEMPDENJAN + tempInc50 << degF << "    " << right << setw(6) << ((TEMPDENJAN + tempInc50) - 32) / 1.8 << degC << "         " 
		<< right << setw(6) << TEMPDENJUL + tempInc50 << degF << "    " << right << setw(6) << ((TEMPDENJUL + tempInc50) - 32) / 1.8 << degC << endl;
	cout << "" << endl;

	cout << left << setw(45) << "LOS ANGELES" << left << setw(38) << "LOS ANGELES" << endl;
	cout << "---------------------------------------------------------------------------" << endl;
	cout << left << setw(45) << jan << left << setw(38) << july << endl;
	cout << right << setw(6) << TEMPLAJAN << degF << "    " << right << setw(6) << (TEMPLAJAN - 32) / 1.8 << degC << "         " 
		<< right << setw(6) << TEMPLAJUL << degF << "    " << right << setw(6) << (TEMPLAJUL - 32) / 1.8 << degC << endl;
	cout << "" << endl;
	cout << left << setw(45) << jan50 << left << setw(38) << july50 << endl;
	cout << right << setw(6) << TEMPLAJAN + tempInc50 << degF << "    " << right << setw(6) << ((TEMPLAJAN + tempInc50) - 32) / 1.8 << degC << "         " 
		<< right << setw(6) << TEMPLAJUL + tempInc50 << degF << "    " << right << setw(6) << ((TEMPLAJUL + tempInc50) - 32) / 1.8 << degC << endl;
	cout << "" << endl;

	cout << left << setw(45) << "NEW YORK CITY" << left << setw(38) << "NEW YORK CITY" << endl;
	cout << "---------------------------------------------------------------------------" << endl;
	cout << left << setw(45) << jan << left << setw(38) << july << endl;
	cout << right << setw(6) << TEMPNYCJAN << degF << "    " << right << setw(6) << (TEMPNYCJAN - 32) / 1.8 << degC << "         " 
		<< right << setw(6) << TEMPNYCJUL << degF << "    " << right << setw(6) << (TEMPNYCJUL - 32) / 1.8 << degC << endl;
	cout << "" << endl;
	cout << left << setw(45) << jan50 << left << setw(38) << july50 << endl;
	cout << right << setw(6) << TEMPNYCJAN + tempInc50 << degF << "    " << right << setw(6) << ((TEMPNYCJAN + tempInc50) - 32) / 1.8 << degC << "         " 
		<< right << setw(6) << TEMPNYCJUL + tempInc50 << degF << "    " << right << setw(6) << ((TEMPNYCJUL + tempInc50) - 32) / 1.8 << degC << endl;
	cout << "" << endl;

	cout << left << setw(45) << "PHOENIX" << left << setw(38) << "PHOENIX" << endl;
	cout << "---------------------------------------------------------------------------" << endl;
		cout << left << setw(45) << jan << left << setw(38) << july << endl;
	cout << right << setw(6) << TEMPPHXJAN << degF << "    " << right << setw(6) << (TEMPPHXJAN - 32) / 1.8 << degC << "         " 
		<< right << setw(6) << TEMPPHXJUL << degF << "    " << right << setw(6) << (TEMPPHXJUL - 32) / 1.8 << degC << endl;
	cout << "" << endl;
	cout << left << setw(45) << jan50 << left << setw(38) << july50 << endl;
	cout << right << setw(6) << TEMPPHXJAN + tempInc50 << degF << "    " << right << setw(6) << ((TEMPPHXJAN + tempInc50) - 32) / 1.8 << degC << "         " 
		<< right << setw(6) << TEMPPHXJUL + tempInc50 << degF << "    " << right << setw(6) << ((TEMPPHXJUL + tempInc50) - 32) / 1.8 << degC << endl;
	cout << "" << endl;

	cout << left << setw(45) << "SACRAMENTO" << left << setw(38) << "SACRAMENTO" << endl;
	cout << "---------------------------------------------------------------------------" << endl;
		cout << left << setw(45) << jan << left << setw(38) << july << endl;
	cout << right << setw(6) << TEMPSACJAN << degF << "    " << right << setw(6) << (TEMPSACJAN - 32) / 1.8 << degC << "         " 
		<< right << setw(6) << TEMPSACJUL << degF << "    " << right << setw(6) << (TEMPSACJUL - 32) / 1.8 << degC << endl;
	cout << "" << endl;
	cout << left << setw(45) << jan50 << left << setw(38) << july50 << endl;
	cout << right << setw(6) << TEMPSACJAN + tempInc50 << degF << "    " << right << setw(6) << ((TEMPSACJAN + tempInc50) - 32) / 1.8 << degC << "         " 
		<< right << setw(6) << TEMPSACJUL + tempInc50 << degF << "    " << right << setw(6) << ((TEMPSACJUL + tempInc50) - 32) / 1.8 << degC << endl;
	cout << "" << endl;

	return 0;
}

// g++ -std=c++14 -g -Wall agrev.cpp
// ./a.out