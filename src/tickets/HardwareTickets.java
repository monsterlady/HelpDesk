package tickets;

import java.time.LocalDate;
public class HardwareTickets extends Tickets {
    private int computerID;

    public HardwareTickets(LocalDate localDate,String creator, int serialNum, String description, int computerID){
        super(creator,serialNum,description,localDate);
        this.computerID = computerID;
    }

    public int getComputerID() {
        return computerID;
    }

    @Override
    public String toString() {
        String toString = "Ticket " + getSerialNum() +  " ( "+ "Hardwareticket, computerId: "+ getComputerID() +" )";
        toString += super.toString();
        return toString;
    }
}
