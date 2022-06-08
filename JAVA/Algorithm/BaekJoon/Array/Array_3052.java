import java.util.Scanner;
import java.util.*;

public class Array_3052 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int[] temp = new int[10];

        for (int i = 0; i < 10; i++) {
            int num = sc.nextInt();
            if (num > 0) {
                temp[i] = num % 42;
            }
        }
        Arrays.sort(temp);
        int counts = 1;
        for (int i = 1; i < 10; i++) {


                if (temp[i-1] != temp[i]) {
                    ++counts;
                }

        }
        System.out.print(counts);
    }
}