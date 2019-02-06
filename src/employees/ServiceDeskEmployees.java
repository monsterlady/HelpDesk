package employees;

import employees.Employees;

public class ServiceDeskEmployees extends Employees {
    private String expertise;

    public ServiceDeskEmployees(String username,String password,String expertise){
        super("Helpdesk",username,password);
        this.expertise = expertise;
    }

    public String getExpertise() {
        return expertise;
    }

    @Override
    public String toString() {
        return this.getUsername() + " ( " + this.getDepartment() + " , Expertise: "+ this.getExpertise() +" )" ;
    }
}
