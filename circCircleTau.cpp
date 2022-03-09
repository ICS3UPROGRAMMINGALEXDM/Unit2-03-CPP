// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 02//22
// Description: Calculate the circumference of a circle using TAU and user input
#include <cmath>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
  // Initializing constants
  const float TAU = 2 * M_PI;
  // Initializing variables
  float rad, circ;

  // Getting user input
  cout << "Please enter your radius." << endl;
  cin >> rad;

  // Calculating the circumference
  circ = TAU * rad;

  // Display results
  cout << "The circumference is "<< circ << "cm.";
}
