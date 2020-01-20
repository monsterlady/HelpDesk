import Employee.Employees;
import Tickets.Ticket;
import org.json.JSONArray;
import org.json.JSONObject;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;

public class Administrator {
    private ArrayList<Employees> employees;
    private ArrayList<Ticket> tickets;

    public Administrator() {
        this.employees = new ArrayList<>();
        this.tickets = new ArrayList<>();
    }

    public void scanAllEmployees(String nameOfTheFile) throws HelpDeskException{
        try{
            String jsonString = new String(Files.readAllBytes(Paths.get(nameOfTheFile)));
            JSONArray jsonArray = new JSONArray(jsonString);
            for(int i =0; i < jsonArray.length();i++){
                JSONObject jsonObject = jsonArray.getJSONObject(i);
                Employees nwEmplyee = new Employees(jsonObject);
                employees.add(nwEmplyee);
            }

        }catch (IOException e){
           throw new HelpDeskException("无法找到该文件！");
        }
    }

    public void printAllEmployees(){
        System.out.println("Employees:: ");
        System.out.append("\n");
        for(Employees each : employees){
            System.out.println(each.toString());
        }
    }

    public void addNewEmployee(Employees nw){
        employees.add(nw);
    }

    public Employees getEmployeeByUserName(String username){
        for(Employees each : employees){
            if(each.getUsername().equals(username)){
                return each;
            }
        }
        return null;
    }

    public void addNewTickets(Ticket ticket){
        tickets.add(ticket);
    }

    public Ticket getTicketBySerialNum(int i){
        for (Ticket each: tickets) {
            if(each.getUniqueNum() == i){
                return each;
            }
        }
        return null;
    }

    public void printAllTickets(){
        System.out.println("Tickets: ");
        System.out.append("\n");
        for (Ticket each: tickets
             ) {
            System.out.println(each.toString());
        }
    }
}
