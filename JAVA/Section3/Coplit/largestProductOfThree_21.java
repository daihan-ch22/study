import java.util.*;

public class largestProductOfThree_21 {
    public static void main(String[] args) {
        //int arr[] = {2, 1, 3, 7};
        int arr[] = {-5, -4, -3, -2, -1};
        System.out.println(largestProductOfThree(arr));
    }

    public static int largestProductOfThree(int[] arr) {
        //3중 포문
        //요소의 세제곱 형식은 안되는듯
        int temp = -2147483648; //정수값만 들어오니 비교를 위해 int형의 뒤에서 마지막 범위로 잡는다.

        if (arr.length >= 3) {
            for (int i = 0; i < arr.length; i++) {
                for (int j = i+1; j < arr.length; j++) {
                    for (int k = j+1; k < arr.length; k++) {
                        if (temp <= arr[i] * arr[j] * arr[k]) {
                            temp = arr[i] * arr[j] * arr[k];
                        }
                    }
                }
            }
        }
        return temp;
    }
}
