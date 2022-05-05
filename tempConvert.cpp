// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: May. 4, 2022
// This program asks the user for temperature in celsius
// then use the function to convert it to farenheit and display it.


#include <iostream>
// import decimal
#include <iomanip>
// import string
#include <string>


// declare the function
void fahrenheit() {

  // variables
  std::string cel_as_string;
  float cel_as_float;
  float celcius_to_fahrenheit;

  // ask for user input
  std::cout << "Enter the tempetature in celsius: ";
  std::cin >> cel_as_string;

  // cast string to float and display the temperature in farenheit
  try {
        cel_as_float = std::stof(cel_as_string);
        celcius_to_fahrenheit = cel_as_float * 1.8 + 32;
        std::cout << std::fixed << std::setprecision(1) <<
                    "The temperature in Fahrenheit is: "<< celcius_to_fahrenheit << "°";
    }
  // catch invalid input
  catch (std::invalid_argument) {
    std::cout <<"Invalid input. Input was not a number" << std::endl;
  }
}


int main() {
  // call the function
  fahrenheit();
}
