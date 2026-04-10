/**
 * @file Officer.h
 * @author Jose Jaime
 * @date 2026-04-09
 * @brief Officer class
 * 
 * Header file for the Officer class
 */


#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * This class inherits from the Employee class. 
 *
 * @class Officer Officer.h "Employee/Officer.h"
 * @brief Represents an Officer employee
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * Shows the officer's details
 *
 * @pre The Officer object must be initialized.
 * @return void None
 * @post The officer's data is printed to the screen.
 * 
 */
  void print();

/**
 * Calculates the officer's pay
 *
 * @pre The hourlyRate, hoursWorked, and evilness must be initialized.
 * @return double The total pay for the officer
 * @post The Officer object is not changed.
 * 
 */
  double calculatePay();

/**
 * Default constructor
 *
 * @pre None
 * @post A new empty Officer object is created.
 * 
 */
  Officer();

/**
 * Makes a new Officer object with the provided data
 *
 * @param int ID The employee identification number for the officer
 * @param int years The number of years the officer has worked.
 * @param double hourlyRate The amount paid per hour
 * @param float hoursWorked The total hours worked
 * @param double evilness The level of evilness for the officer
 * @pre The ID must be unique, hourlyRate, hoursWorked, and evilness must not be negative
 * @post A new Officer object is initialized with the provided data.
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
