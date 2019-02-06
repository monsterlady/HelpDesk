package tickets;
import employees.ServiceDeskEmployees;

import java.time.LocalDate;

public abstract class Tickets {
    private String creator;
    private ServiceDeskEmployees solver;
    private  int serialNum;
    private String description;
    private String fixDescription;
    private LocalDate localDate;

    public Tickets(String creator,int serialNum,String description,LocalDate localDate){
        this.creator = creator;
        this.serialNum = serialNum;
        this.description = description;
        this.localDate = localDate;
    }

    public int getSerialNum() {
        return serialNum;
    }

    public String getDescription() {
        return description;
    }

    public String getFixDescription() {
        return fixDescription;
    }

    public boolean isStatus() {
        if(fixDescription != null){
            return true;
        } else {
            return false;
        }
    }

    public String getCreator() {
        return creator;
    }


    public void solve(ServiceDeskEmployees solver,String fixDescription){
        this.solver = solver;
        this.fixDescription = fixDescription;
    }

    public LocalDate getLocalDate() {
        return localDate;
    }

    @Override
    public String toString() {
        if(this.isStatus()){
            return  "Status : Solved "+ getLocalDate()+ "\n" + getCreator() + " : " + getDescription() + "\n" + solver.toString() + " : " + getFixDescription();

        } else {
            return "Status : Open "+ getLocalDate()+ "\n" +  getCreator() + " : " + getDescription();
        }
    }
}
