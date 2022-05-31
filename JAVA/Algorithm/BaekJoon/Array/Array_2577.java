import java.util.Scanner;

public class Array_2577 {
    public Array_2577() {
    }

    void input() {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[3];
        int mult = 1;

        for(int i = 0; i < arr.length; ++i) {
            arr[i] = sc.nextInt();
            mult *= arr[i];
        }

        String str = Integer.toString(mult);

        for(int i = 0; i < 10; ++i) {
            int count = 0;

            for(int j = 0; j < str.length(); ++j) {
                if (str.charAt(j) - 48 == i) {
                    ++count;
                }
            }

            System.out.println(count);
        }

    }
}
