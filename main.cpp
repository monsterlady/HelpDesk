#include <iostream>
#include "HelpdeskEmployee.h"
#include "Admin.h"
#include "SoftwareTicket.h"
#include "HardwareTicket.h"

int main()
{
    /**
     *
     * Add method calls to your administration class below. Your program should perform the given
     * steps. Please also handle errors and print the error message when something went wrong!
     * Possible errors are:
     *  - Adding users with duplicate usernames
     *  - TODO
     *  - Errors reading the input file (In this case the file is ok, but maybe in the future we will use a wrong file)
     */

    //TODO: Remove the following

    //TODO: Create an instance of the helpdesk admin class
    Admin admin;

    //TODO: Read the (normal) employees from the employees.txt file
    // Columns in the text file are: username password departement
    admin.readFile("input.txt");

    //TODO: Add the following helpdesk employees (They are all working on the helpdeskdepartment)
    //username: gerralt, password: catsarecool, expertise: Mice
    HelpdeskEmployee *gerralt = new HelpdeskEmployee ("gerralt","catsarecool", "mice");
    admin.addEmployee(gerralt);

    //TODO: Print all employees
    admin.printAllEmployees();

    //TODO: Add the following tickets. Start with id 1
    //A software ticket with date: 15-01-2018, creator: ruud, "Excel can't calculate the number of days in a year", software: "Office 365"
    SoftwareTicket *ticket1 = new SoftwareTicket("15-01-2018", admin.getEmployeeByName("ruud"),"Excel can't calculate the number of days in a year","Office 365");
    admin.addTicket(ticket1);
    //A hardware ticket with date: 16-01-2018, creator: jeroen, "My mouse doesn't work!", hardwareCode: 5
    HardwareTicket *ticket2 = new HardwareTicket("16-01-2018", admin.getEmployeeByName("jeroen"), "My mouse doesn't work", 5);
    admin.addTicket(ticket2);
    //A software ticket with date: 17-01-2018, creator: ruud, "MacOS won't boot on my system", software: "MacOS X"
    SoftwareTicket *ticket3 = new SoftwareTicket("17-01-2018", admin.getEmployeeByName("ruud"), "MacOS won't boot on my system", "MacOS X");
    admin.addTicket(ticket3);

    //TODO: Solve ticket 2 and 3 (The last two)
    //Ticket 2, solver: gerralt, message: "Try putting it into the USB port instead of the HDMI port."
    ticket2->SolveTicket(gerralt, "Try putting it into the USB port instead of the HDMI port.");
    //Ticket 3, solver: gerralt, message: "Please replace your Dell laptop with a real system"
    ticket3->SolveTicket(gerralt, "Please replace your Dell laptop with a real system");

    //TODO: Print the tickets
    admin.printAllTickets();

    return 0; // TODO: make sure all allocated memory gets freed at the end of this function
}
