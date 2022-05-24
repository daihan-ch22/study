package Collection_Framework;

import java.util.Set;
import java.util.TreeSet;

public class Comparable_prac {
    public static void main(String[] args) {
        Set<Employee> workers = new TreeSet<>(); //오름차순 정렬

        Employee employee1 = new Employee(11, "Dan", "DevOps");
        Employee employee2 = new Employee(12, "Alex", "FE");
        Employee employee3 = new Employee(15, "Josh", "BE");

        workers.add(employee2);
        workers.add(employee1);
        workers.add(employee3);

        for (Employee employee : workers) {
            System.out.println(employee.id + " " + employee.name +
                    " " + employee.department);
        }
    }
}

class Employee implements Comparable<Employee> {
    int id;
    String name, department;

    public Employee(int id, String name, String department) {
        this.id = id;
        this.name = name;
        this.department = department;
    }

    public int compareTo(Employee employee) {
        if (id > employee.id) {
            return 1;
        } else if (id < employee.id) {
            return -1;
        } else {
            return 0;
        }
    }
}