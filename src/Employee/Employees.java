package Employee;

import org.json.JSONObject;

public class Employees {
    private String username,password,department;

    public Employees(JSONObject jsonObject) {
        this.username = jsonObject.getString("username");
        this.password = jsonObject.getString("password");
        this.department = jsonObject.getString("department");
    }

    public Employees(String username, String password, String department) {
        this.username = username;
        this.password = password;
        this.department = department;
}

    public String getDepartment() {
        return department;
    }

    public void setDepartment(String department) {
        this.department = department;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    @Override
    public String toString() {
        return  getUsername() + " (" + getDepartment() + ")";
    }
}
