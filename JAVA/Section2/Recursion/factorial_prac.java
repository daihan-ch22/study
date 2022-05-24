package study.JAVA.src.Section2.Recursion;
public class factorial_prac {
    public static void main(String[] args) {
        Factorial factorial = new Factorial();
        System.out.println(factorial.calFactorial(5));
    }
}
class Factorial{
    // !5 = 1 * 2 * 3 * 4 * 5
    // !0 = 1
    int calFactorial(int num){
        if(num<= 1) return 1;   // !1 = 1, !0 = 1

        return num * calFactorial(num-1);
        //  5 * calFactorial(4)
        //  5 * 4 * calFactorial(3) ....
        //  5 * 4 * 3 * calFactorial(2) ....
    }
}