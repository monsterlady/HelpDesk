import Employee.Employees;
import Employee.ServiceDeskEmployees;
import Tickets.HardwareTickets;
import Tickets.SoftwareTickets;
import Tickets.Ticket;

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
        try{
            admin.scanAllEmployees("employees.json");
        //TODO: Add the following helpdesk employees (They are all working on the helpdeskdepartment)
        //username: gerralt, password: catsarecool, expertise: Mice
        Employees gerralt = new ServiceDeskEmployees("gerralt","catsarecool","helpdesk","Mice");
        admin.addNewEmployee(gerralt);
        //TODO: Print all employees
        admin.printAllEmployees();
            //TODO: Add the following tickets. Start with id 1
            //A software ticket with date: 15-01-2018, creator: ruud, "Excel can't calculate the number of days in a year", software: "Office 365"
            Ticket s1 = new SoftwareTickets(admin.getEmployeeByUserName("ruud"),"Excel can't calculate the number of days in a year","Office 365");
            admin.addNewTickets(s1);
            //A hardware ticket with date: 16-01-2018, creator: jeroen, "My mouse doesn't work!", hardwareCode: 5
            Ticket h1 = new HardwareTickets(admin.getEmployeeByUserName("jeroen"),"My mouse doesn't work!",5);
            admin.addNewTickets(h1);
            //A software ticket with date: 17-01-2018, creator: ruud, "MacOS won't boot on my system", software: "MacOS X"
            Ticket s2 = new SoftwareTickets(admin.getEmployeeByUserName("ruud"),"MacOS won't boot on my system","MacOS X");
            admin.addNewTickets(s2);

            //TODO: Solve ticket 2 and 3 (The last two)
            //Ticket 2, solver: gerralt, message: "Try putting it into the USB port instead of the HDMI port."
            admin.getTicketBySerialNum(2).setSlover(admin.getEmployeeByUserName("gerrelt"));
            admin.getTicketBySerialNum(2).setSolution("fuck ur mopkm");
            admin.getTicketBySerialNum(2).setStatus(false);
            //Ticket 3, solver: gerralt, message: "Please replace your Dell laptop with a real system"
            admin.getTicketBySerialNum(3).setSlover(admin.getEmployeeByUserName("gerrelt"));
            admin.getTicketBySerialNum(3).setSolution("Please replace your Dell laptop with a real system");
            admin.getTicketBySerialNum(3).setStatus(false);
            admin.getEmployeeByUserName("123");
        }catch(NullPointerException|HelpDeskException n){
            n.printStackTrace();
        }

        //TODO: Print the tickets
        admin.printAllTickets();
    }
}
