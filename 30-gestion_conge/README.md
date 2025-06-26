# Leave Management System

A command-line Leave Management System written in C that allows managing employee leave requests, approvals, and tracking.

## Features

### Employee Management

* Add and manage employee records
* Track employee leave balances (default: 30 days)
* View employee details and history

### Leave Management

* Create and submit leave requests
* Approve or reject pending requests
* Automatic leave duration calculation
* Track leave history and status

### Manager Features

* Manage team members
* Process team leave requests
* View team leave status and reports

## Project Structure

* `include/`: Header files
  * `employee.h`: Employee structure and functions
  * `leave_request.h`: Leave request management
  * `leave_management.h`: Core system functions
  * `manager.h`: Manager and team management
* `src/`: Source files
  * `employee.c`: Employee management
  * `leave_request.c`: Leave request processing
  * `leave_management.c`: Core system logic
  * `manager.c`: Team management
* `main.c`: Program entry point
* `Makefile`: Build configuration
* [README.md]: This file

## Prerequisites

* GCC (GNU Compiler Collection)
* Make
* Standard C libraries (stdio.h, string.h, time.h)

## Installation

1. Clone the repository:

   ```bash
   # SSH
   git clone git@github.com:ZahaAnass/leave-management-system.git
   # HTTPS
   git clone https://github.com/ZahaAnass/leave-management-system.git
   # Change directoy to this project after cloning
   cd leave-management-system

## Build

1. Compile the program:

   ```bash
   make clean
   make

2. Run the program:

    ```bash
    ./leave_management

## Usage

The program provides a menu-driven interface with these options:

   1. Add Employee: Add a new employee to the system  
   2. Create Leave Request: Submit a new leave request with dates and reason
   3. Approve/Reject Request: Process pending leave requests
   4. Show Pending Requests: View all pending leave requests
   5. Show Leave Balance: Check an employee's remaining leave days
   6. Sort Employees by Name: View employees in alphabetical order
   7. Exit: Quit the program

## 📝 Example Usage

```bash
    === Leave Management System ===
    1. Add Employee
    2. Create Leave Request
    3. Approve/Reject Request
    4. Show Pending Requests
    5. Show Leave Balance
    6. Sort Employees by Name
    7. Exit
    Enter Your Choice: 


```

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
