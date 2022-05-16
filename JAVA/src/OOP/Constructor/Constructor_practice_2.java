package OOP.Constructor;
public class Constructor_practice_2 {
    public static void main(String[] args) {

        Car camaro = new Car("ZL1 1LE", "Black");
        //참조변수 camaro 에 new로 만든 Car 클래스의 인스턴스의 주소값 저장
        //Car 생성자에 파라미터 model / colour를 받아 인스턴스 변수 초기화

        System.out.println("Model: " + camaro.model + " Colour: " + camaro.colour);

        camaro.power();
        camaro.accelerate();
        camaro.break_pedal();
        camaro.stop();

    }
}


class Car
{
    //속성

    public String model; //필드선언 (인스턴스 변수)
    public String colour;

    public Car(String model, String colour) // 생성자 선언 (인스턴스 변수 초기화)
    {
        this.model = model;
        this.colour = colour;
    }

    //메서드

    void power() {
        System.out.println("Turning the engine on..");
    }

    void accelerate() {
        System.out.println("Speeding up..");
    }

    void break_pedal() {
        System.out.println("Breaks on..");
    }

    void stop() {
        System.out.println("Vehicle has fully stopped.");
    }

}