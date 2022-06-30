import java.util.*;


public class power_25 {
    public static void main(String[] args) {
        int base = 2; int exponent = 10;
        System.out.println(power(base,exponent));

    }

    public static long power(int base, int exponent) {

        int count = 1;
        long temp = 1;
        while(count <= exponent) {
            temp = temp * base % 94906249;
            count++;
        }
        return temp;
    }
}
