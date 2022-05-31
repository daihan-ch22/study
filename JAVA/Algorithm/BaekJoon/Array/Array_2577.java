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

        for(int i = 0; i < 10; ++i) {  // 1~9를 문자 하나씩 비교해야 함
            int count = 0;

            for(int j = 0; j < str.length(); ++j) { // 문자열 길이만큼 돌면서 한 문자씩 i와 비교
                if (str.charAt(j) - '0' == i) { // String 숫자 - '0' 하면 숫자 가 된다 (유니코드 이용)
                    count++;
                }
            }
            System.out.println(count);
        }

    }
}
