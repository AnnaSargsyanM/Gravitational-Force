//****************************************************************************************************
//     File:               graviForceFun.cpp
// 
//     Student:            Anna Sargsyan
// 
//     Assignment:         Program #10
// 
//     Course Name:        Programming I
// 
//     Course Number:      COSC 1550-01
// 
//     Due:                April 7, 2023
//
//     This program asks user to input masses of two objects and their 
//     distance. The program then calculates the gravitational force
//     and outputs the result.
//
//
//****************************************************************************************************

#include <iostream>

using namespace std;

const double G = 6.6743e-11;

void readInputs(float&, float&, float&);
void convertInputs(float&, float&);
void calcGraviForce(float&, float, float, float);
void displayResult(float);

int main()
{
	float mass1,
		mass2,
		distance,
		graviForce;

	readInputs(mass1, mass2, distance);
    convertInputs(mass1, mass2);
	calcGraviForce(graviForce, mass1, mass2, distance);
	displayResult(graviForce);

	return 0;

}

//****************************************************************************************************

void readInputs(float& mass1, float& mass2, float& distance)
{
	cout << "Enter the mass 1 and mass 2 in lbs: " ;
	cin >> mass1 >> mass2;

	cout << "Enter the distance between the centers of the masses in meters: ";
	cin >> distance;

	cout << endl;
}

//****************************************************************************************************

void convertInputs(float& mass1, float& mass2)
{
	mass1 = mass1 / 2.2;
	mass2 = mass2 / 2.2;

}

//****************************************************************************************************

void calcGraviForce(float& graviForce, float mass1, float mass2, 
	                float distance)
{
	graviForce = G * mass1 * mass2 / (distance * distance);

}

//****************************************************************************************************

void displayResult(float graviForce)
{
	cout << "The gravitational force is: " << graviForce << " N" << endl;
}

/*

Enter the mass 1 and mass 2 in lbs: 154.324 13.2e24
Enter the distance between the centers of the masses in meters: 6.39e6

The gravitational force is: 687.965 N

*/