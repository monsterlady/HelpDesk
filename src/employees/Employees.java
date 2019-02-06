package employees;

public abstract class Employees {
    private String department;
    private String username;
    private String password;

    public Employees(String department,String username,String password){
        this.department = department;
        this.username = username;
        this.password = password;
    }

    public String getDepartment() {
        return department;
    }

    public String getUsername() {
        return username;
    }

    @Override
    public String toString() {
        return this.getUsername() + " ( " + this.getDepartment() + " )" ;
    }
}
