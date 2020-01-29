#include <iostream>
#include "Administrator.h"
#include "HelpDeskEmployee.h"
#include "SoftWareTicket.h"
#include "HardWareTicket.h"
#include <memory>

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
    try {
        //TODO: Remove the following
        std::cout << "Yay! I am running!" << std::endl;
        //TODO: Create an instance of the helpdesk admin class
        Administrator admin;
        //TODO: Read the (normal) employees from the employees.txt file
        // Columns in the text file are: username password departement
        admin.readData();
        //TODO: Add the following helpdesk employees (They are all working on the helpdeskdepartment)
        //username: gerralt, password: catsarecool, expertise: Mice
        admin.addEmployee(std::make_shared<HelpDeskEmployee>("gerralt", "HelpDesk","catsarecool", "Mice"));
        //TODO: Print all employees
        admin.printEmployee();

        //TODO: Add the following tickets. Start with id 1
        //A software ticket with date: 15-01-2018, creator: ruud, "Excel can't calculate the number of days in a year", software: "Office 365"
        admin.addTicket(std::make_shared<SoftWareTicket>("Excel can't calculate the number of days in a year",admin.getEmployeeByName("ruud"),"Office 365"));
        //A hardware ticket with date: 16-01-2018, creator: jeroen, "My mouse doesn't work!", hardwareCode: 5
        admin.addTicket(std::make_shared<HardWareTicket>("My mouse doesn't work!",admin.getEmployeeByName("jeroen"),5));
        //A software ticket with date: 17-01-2018, creator: ruud, "MacOS won't boot on my system", software: "MacOS X"
        admin.addTicket(std::make_shared<SoftWareTicket>(("MacOS won't boot on my system"),admin.getEmployeeByName("ruud"),"MacOS X"));

        //TODO: Solve ticket 2 and 3 (The last two)
        //Ticket 2, solver: gerralt, message: "Try putting it into the USB port instead of the HDMI port."
        admin.solveTicket(admin.getEmployeeByName("gerralt"),admin.getTiketById(2),"Try putting it into the USB port instead of the HDMI port.");
        //Ticket 3, solver: gerralt, message: "Please replace your Dell laptop with a real system"
        admin.solveTicket(admin.getEmployeeByName("gerralt"),admin.getTiketById(3),"Please replace your Dell laptop with a real system.");
        //TODO: Print the tickets
        admin.printTickets();
    } catch (std::exception const &e){
        std::cout << e.what() << std::endl;
    }


    return 0; // TODO: make sure all allocated memory gets freed at the end of this function
}
