package Tickets;

import Employee.Employees;

public abstract class Ticket {
    private static int serialNum = 0;
    private int uniqueNum;
    private Employees creator,slover;
    private boolean status;
    private String description,solution;

    public Ticket(Employees creator, String description) {
        serialNum++;
        this.solution = "";
        this.slover = null;
        this.status = true;
        this.creator = creator;
        this.description = description;
        setUniqueNum(serialNum);
    }




    public String getSolution() {
        return solution;
    }

    public void setSolution(String solution) {
        this.solution = solution;
    }

    public int getSerialNum() {
        return serialNum;
    }


    public Employees getCreator() {
        return creator;
    }

    public int getUniqueNum() {
        return uniqueNum;
    }

    public void setUniqueNum(int uniqueNum) {
        this.uniqueNum = uniqueNum;
    }

    public void setCreator(Employees creator) {
        this.creator = creator;
    }

    public Employees getSlover() {
        return slover;
    }

    public void setSlover(Employees slover) {
        this.slover = slover;
    }

    public boolean isStatus() {
        return status;
    }

    public void setStatus(boolean status) {
        this.status = status;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

}
