/*
* Maximiliano Neaves
* COSC/ITSE 1307
* PythagoreanTheorem
* This program solves a Pythagorean Theorem equation (a^2+b^2=c^2)
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 

int main()
{
	double dblAlpha = 3.0;
	double dblBravo = 4.0;
	double dblCharlie = sqrt(pow(dblAlpha, 2) + pow(dblBravo, 2));
	
	cout << fixed;
	cout << dblAlpha << " + " << dblBravo << " = " << dblCharlie 
		<< endl;

    return 0;
}

