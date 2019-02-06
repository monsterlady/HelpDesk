import employees.Employees;
import employees.RegularEmployees;
import employees.ServiceDeskEmployees;
import exceptions.DeskException;
import org.json.JSONArray;
import org.json.JSONObject;
import tickets.HardwareTickets;
import tickets.SoftwareTickets;
import tickets.Tickets;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.time.LocalDate;
import java.util.ArrayList;

public class Administrator {
    public ArrayList<Employees> arrayListofEmployees = new ArrayList<>();
    public ArrayList<Tickets> arrayListofTickets = new ArrayList<>();
    private static int serialnum = 1;

    public Employees getEmployeeByUsername(String username) {
        for (Employees employees : arrayListofEmployees) {
            if (employees.getUsername().equals(username)) {
                return employees;
            }
        }
        return null;
    }

    public void showAllemployees() throws DeskException {
        if (!arrayListofEmployees.isEmpty()) {
            for (Employees employees : arrayListofEmployees) {
                System.out.println(employees.toString());
            }
        } else {
            throw new DeskException("There's no employees now!");
        }
    }

    public void showAllTickets() throws DeskException {
        if (!arrayListofTickets.isEmpty()) {
            for (Tickets tickets : arrayListofTickets) {
                System.out.println(tickets.toString() + "\n");
            }
        }
    }

    public Tickets findTickets(int serial) throws DeskException {
        if (!arrayListofTickets.isEmpty()) {
            for (Tickets tickets : arrayListofTickets) {
                if (tickets.getSerialNum() == serial) {
                    return tickets;
                }
            }
            throw new DeskException("No ticket matched!");
        } else {
            throw new DeskException("There's no Tickets now");
        }
    }

    public void addSFTicket(LocalDate localDate,String creator, String description, String nameofAPP) {
        SoftwareTickets softwareTickets = new SoftwareTickets(localDate,creator, serialnum, description, nameofAPP);
        arrayListofTickets.add(softwareTickets);
        serialnum++;

    }

    public void addHWTicket(LocalDate localDate, String creator, String description, int computerID) {
        HardwareTickets hardwareTickets = new HardwareTickets(localDate,creator, serialnum, description, computerID);
        arrayListofTickets.add(hardwareTickets);
        serialnum++;

    }

    public void addRefularEmployees(String department, String username, String password) throws DeskException {
        RegularEmployees regularEmployees = new RegularEmployees(department, username, password);
        if(getEmployeeByUsername(username) == null) {
            arrayListofEmployees.add(regularEmployees);
        } else {
            throw new DeskException(username + " existed!");
        }

    }

    public void addServicedeskEmplyees(String username, String password, String expertise) throws DeskException {
        ServiceDeskEmployees serviceDeskEmployees = new ServiceDeskEmployees(username, password, expertise);
        if (getEmployeeByUsername(username) != null) {
            throw new DeskException(username + " existed!");
        } else {
            arrayListofEmployees.add(serviceDeskEmployees);
        }

    }

    public void readjsonfile(String filename) throws DeskException {
        try {
            String jsonstring = new String(Files.readAllBytes(Paths.get(filename)));
            JSONArray jsonArray = new JSONArray(jsonstring);
            for (int i = 0; i < jsonArray.length(); i++) {
                JSONObject jsonObject = jsonArray.getJSONObject(i);
                addRefularEmployees(jsonObject.getString("department"), jsonObject.getString("username"), jsonObject.getString("password"));
            }
        } catch (IOException i) {
            throw new DeskException("There's no file named " + filename);
        }
    }

    public void solvetickets(String username,int serialise,String description) throws DeskException {
            Employees employees = getEmployeeByUsername(username);
            if (employees == null) {
                throw new DeskException("There's no " + username);
            }

            if(employees instanceof RegularEmployees){
                throw new DeskException(username+" is not Service desk Employee!");
            }

                findTickets(serialise).solve((ServiceDeskEmployees) employees,description);
            }
        }

