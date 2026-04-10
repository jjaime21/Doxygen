/**
 * @file Employee.h
 * @author Jose Jaime
 * @date 2026-04-08
 * @brief Employee class
 * 
 * Header file for the Employee class
 */


#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * This class is a base class for specific employee types.
 *
 * @class Employee Employee.h "Employees/Employee.h"
 * @brief Represents a generic employee 
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * Shows the employee's details on the screen
 *
 * @pre The Employee object must be initialized.
 * @return virtual void
 * @post The employee's details are printed to the screen.
 * 
 */
  virtual void print();

/**
 * Calculates the total pay for the employee
 *
 * @pre The hourlyRate and hoursWorked must not be negative values.
 * @return virtual The total pay that is calculated.
 * @post The Employee object is not changed.
 * 
 */
  virtual double calculatePay();

/**
 * Shows the employee's annual work anniversary
 *
 * @pre The Employee object must be initialized.
 * @return void None
 * @post The years variable is updated by one and hourlyRate is updated.
 * 
 */
  void anniversary();

/**
 * Default constructor
 *
 * @pre None
 * @post A new empty employee object is created.
 * 
 */
  Employee();

/**
 * Makes a new Employee with the supplied data
 *
 * @param int ID The employee identification number
 * @param int years The number of years the employee has worked.
 * @param double hourlyRate The amount paid per hour to the employee.
 * @param float hoursWorked The number of hours the employee has worked.
 * @pre ID must be unique, and years, hourlyRate, and hoursWorked must be not be negative values.
 * @post A new Employee object is initialized with the provided data.
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
