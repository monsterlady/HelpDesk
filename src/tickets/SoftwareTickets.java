package tickets;

import java.time.LocalDate;

public class SoftwareTickets extends Tickets {
    private String nameofAPP;

    public SoftwareTickets(LocalDate localDate, String creator, int serialNum, String description, String nameofAPP){
        super(creator,serialNum,description,localDate);
        this.nameofAPP = nameofAPP;
    }

    public String getNameofAPP() {
        return nameofAPP;
    }

    @Override
    public String toString() {
        String toString = "Ticket " + getSerialNum() +  " ( "+ "Softwareticket, Application: "+ getNameofAPP() +" )";
                toString += super.toString();

                return toString;
    }
}
