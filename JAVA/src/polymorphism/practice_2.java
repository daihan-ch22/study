package polymorphism;

public class practice_2 {
    public static void main(String[] args) {
        Car car = new Car();
        Vehicle vehicle = car;
        Car car1 = (Car) vehicle;
       // Supercar spotty = (Supercar) car;
        car.open_roof();
    }
}
class Vehicle{
    String model;
    String colour;
    int num_wheels;
    boolean roof;

    void startEngine(){
        System.out.println("Starts the engine");
    }
    void accelerate(){
        System.out.println("Speed up");
    }
    void brake_pedal(){
        System.out.println("Brake on");
    }
    void open_roof(){
        System.out.println("Opening roof");
    }
}

class Car extends Vehicle
{
    Car(){}
    void give_Ride(){
        System.out.println("Thanks for the ride!");
    }
}
class Motorbike
{
    void tricks(){
        System.out.println("Doing some tricks");
    }
}