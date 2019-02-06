import exceptions.DeskException;

import java.time.LocalDate;

public class Application {

    public static void main(String[] args) {
        /**
         * Add method calls to your administration class below. Your program should perform the given
         * steps. Please also handle errors and print the error message when something went wrong!
         * Possible errors are:
         *  - Adding users with duplicate usernames
         *  - TODO
         *  - Errors reading the input file (In this case the file is ok, but maybe in the future we will use a wrong file)
         */

        //TODO: Remove the following
        System.out.println("Yay! I am running!");

        //TODO: Create an instance of the helpdesk admin class
        Administrator admin = new Administrator();
        //TODO: Read the (normal) employees from the employees.json file


        try {
            admin.readjsonfile("employees.json");
            //TODO: Add the following helpdesk employees (They are all working on the helpdeskdepartment)
            //username: gerralt, password: catsarecool, expertise: Mice
            admin.addServicedeskEmplyees("gerralt", "catsarecool", "Mice");
            //TODO: Print all employees
            admin.showAllemployees();
            //TODO: Add the following tickets. Start with id 1
            //A software ticket with date: 15-01-2018, creator: ruud, "Excel can't calculate the number of days in a year", software: "Office 365"
            admin.addSFTicket(LocalDate.of(2018, 1,15),"ruud", "Excel can't calculate the number of days in a year", "Office 365");
            //A hardware ticket with date: 16-01-2018, creator: jeroen, "My mouse doesn't work!", hardwareCode: 5
            admin.addHWTicket(LocalDate.of(2018, 1,16),"jeroen", "My mouse doesn't work!", 5);
            //A software ticket with date: 17-01-2018, creator: ruud, "MacOS won't boot on my system", software: "MacOS X"
            admin.addSFTicket(LocalDate.of(2018,1,17),"ruud", "MacOS won't boot on my system", "MacOS X");
            //TODO: Solve ticket 2 and 3 (The last two)
            //Ticket 2, solver: gerralt, message: "Try putting it into the USB port instead of the HDMI port."
            admin.solvetickets("gerralt",2,"Try putting it into the USB port instead of the HDMI port.");
            //Ticket 3, solver: gerralt, message: "Please replace your Dell laptop with a real system"
            admin.solvetickets("gerralt",3,"Please replace your Dell laptop with a real system");
            //TODO: Print the tickets
            admin.showAllTickets();
        } catch (DeskException d){
            System.out.println(d.getMessage());
        }
    }
}
