/*
Assingment1ACM.cpp
Aaron McCormick
Calculating taxes for a given number
*/
#include "pch.h"
#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;
	double price;
	double stax = 0.065;
	double ctax = 0.02;
	double total;
	double stax_total;
	double ctax_total;
	double total_tax;
    
	cout << "How much was your purchace?" << endl;
	cin >> price;

	stax_total = (price * stax);
	ctax_total = (price * ctax);
	total = price + stax_total + ctax_total;
	total_tax = stax_total + ctax_total;

	cout << "\tPurchase Price "<< setw(32) << ":" <<price << "\n\tState Sales Tax " << setw(31) << ":" << stax_total << "\n\tCounty Sales Tax " << setw(30) << ":" << ctax_total << "\n\tTotal Tax(State Sales Tax + County Sales Tax) :" << total_tax << "\n\tFinal Price " << setw(35) << ":" << total;


	
}

