package Tickets;

import Employee.Employees;

public class HardwareTickets extends Ticket {
    private int computerId;

    public HardwareTickets(Employees creator, String description, int computerId) {
        super(creator, description);
        this.computerId = computerId;
    }

    @Override
    public String toString() {
        return "Ticket " + getUniqueNum() +
                " (HardwareTicket" + ", computerId : " + computerId +"):\n" +
                "Status : " + (isStatus() ? "Open\n" : "Solved\n") +
                getCreator().toString() + ": " + getDescription() + "\n"+
                (getSlover() == null ? "" : getSlover().toString() + ": " + getSolution() + "\n")
                ;
    }
}
