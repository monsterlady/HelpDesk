package Tickets;

import Employee.Employees;

public class SoftwareTickets extends Ticket {
    private String nameOfApp;

    public SoftwareTickets(Employees creator, String description, String nameOfApp) {
        super(creator, description);
        this.nameOfApp = nameOfApp;
    }

    public String getNameOfApp() {
        return nameOfApp;
    }

    public void setNameOfApp(String nameOfApp) {
        this.nameOfApp = nameOfApp;
    }

    @Override
    public String toString() {
        return  "Ticket " + getUniqueNum() +
                " (SoftwareTicket" + ", Application : " + getNameOfApp() +"):\n" +
                "Status : " + (isStatus() ? "Open\n" : "Solved\n") +
                getCreator().toString() + ": " + getDescription() + "\n"+
                (getSlover() == null ? "" : getSlover().toString() + ": " + getSolution() + "\n")
                ;
    }
}
