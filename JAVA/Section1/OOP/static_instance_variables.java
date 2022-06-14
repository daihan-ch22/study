
public class static_instance_variables {
    public static void main(String[] args) {
        Egg egg = new Egg();
        Egg egg1 = new Egg(); // 클래스 Egg의 인스턴스 2개 생성

        //System.out.println(Egg.pepper); //ERROR!
        // Non-static field 'pepper' cannot be referenced from a static context

        //System.out.println(Egg.salt)
        Egg.fried_egg();
        egg1.boiled_egg();
        //Egg.boiled_egg();


    }
}

class Egg {
    public String pepper = "계란 후라이엔 후추지~";
    public static String salt = "계란 후라이엔 소금이 국룰";

    public static void fried_egg() {
        //System.out.println(pepper); // ERROR!
        System.out.println(salt);   // OK
    }

    public void boiled_egg() {
        System.out.println(pepper); // OK
        System.out.println(salt);   // OK
    }


}