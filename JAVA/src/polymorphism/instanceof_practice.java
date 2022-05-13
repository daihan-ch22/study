package polymorphism;

import java.util.function.LongUnaryOperator;

public class instanceof_practice {
    public static void main(String[] args) {
        Liquid liq = new Liquid();
        Liquid liq1 = new Water();


        System.out.println(liq instanceof Pepsi);  //false
        System.out.println(liq1 instanceof Water);  //false
        System.out.println(liq instanceof Object); //true

        Liquid pep = new Pepsi();
        System.out.println(pep instanceof Object); //true
        System.out.println(pep instanceof Liquid); //true
        System.out.println(pep instanceof Water);  //false
        System.out.println(pep instanceof Pepsi);  //true

    }
}


class Liquid{}
class Pepsi extends Liquid{}
class Water extends Liquid{}