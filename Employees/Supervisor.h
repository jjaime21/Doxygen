/**
 * @file Supervisor.h
 * @author Jose Jaime
 * @date 2026-04-09
 * @brief Supervisor class
 * 
 * Header file for the Supervisor class
 */


#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * This class inherits from the Employee class.
 *
 * @class Supervisor Supervisor.h "Employees/Supervisor.h"
 * @brief Represents a supervisor employee
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised; // the total number of employees managed by the supervisor
 public:

/**
 * Shows the supervisor's details
 *
 * @pre The Supervisor object must be initialized.
 * @return void None
 * @post The supervisor's data is printed to the screen.
 * 
 */
  void print();

/**
 * Calculates the supervisor's pay 
 *
 * @pre The hourlyRate, hoursWorked, and numSupervised must be initialized.
 * @return double The total pay for the supervisor
 * @post The Supervisor object is not changed.
 * 
 */
  double calculatePay();

/**
 * Default constructor
 *
 * @pre None
 * @post A new empty Supervisor object is created.
 * 
 */
  Supervisor();

/**
 * Makes a new Supervisor object with the provided data
 *
 * @param int ID The employee identification number for the supervisor
 * @param int years The number of years the supervisor has worked.
 * @param double hourlyRate The amount paid per hour
 * @param float hoursWorked The total hours worked
 * @param int numSupervised The number of employees the supervisor manages.
 * @pre The ID must be unique, hourlyRate, hoursWorked, and numSupervised must not be negative
 * @post A new Supervisor object is initialized with the provided data.
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
