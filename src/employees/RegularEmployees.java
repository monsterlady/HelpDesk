package employees;

import employees.Employees;

public class RegularEmployees extends Employees {
    public RegularEmployees(String department,String username,String password){
        super(department,username,password);
    }

    @Override
    public String toString() {
        return super.toString();
    }
}
