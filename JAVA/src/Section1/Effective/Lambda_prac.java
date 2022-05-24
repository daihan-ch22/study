package Effective;

@FunctionalInterface
interface MyFunctionalInterface {
    public void accept(int x); //매개변수 O / 반환타입 X

    //public void accept2(int z); - 애너테이션으로 2개의 추상 메서드 방지
    //ERROR:: Multiple non-overriding abstract methods found
    //in interface Effective.MyFunctionalInterface
}
@FunctionalInterface
interface FuncInterfaceTest {
    public int calculation(int x, int y);  //매개변수 O / 반환타입 O
}

public class Lambda_prac {
    public static void main(String[] args) {
        MyFunctionalInterface exam;
        exam = (x) -> {
            int result = x * 5;
            System.out.println(result);
        };
        exam.accept(5);

        exam = (x) -> System.out.println(x * 5);
        exam.accept(2);

        //////////////////////////////////
        FuncInterfaceTest caltest;
        caltest = (x, y) -> {
            int result = x + y;
            return result;
        };
        System.out.println(caltest.calculation(2, 5));

        caltest = (x, y) -> x / y;
        double result2 = caltest.calculation(5, 2);
        System.out.println(result2);
    }
}
