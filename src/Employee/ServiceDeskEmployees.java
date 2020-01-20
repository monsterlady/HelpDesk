package Employee;

public class ServiceDeskEmployees extends Employees {
    private String expertise;

    public ServiceDeskEmployees(String username, String password, String department, String expertise) {
        super(username, password, department);
        this.expertise = expertise;
    }

    public String getExpertise() {
        return expertise;
    }

    public void setExpertise(String expertise) {
        this.expertise = expertise;
    }

    @Override
    public String toString() {
        return getUsername() + " (" + getDepartment() + ",  Expertise: " + getExpertise() + " )";
    }
}
