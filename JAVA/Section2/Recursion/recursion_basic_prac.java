

import java.util.Arrays;

public class recursion_basic_prac {
    public static void main(String[] args) {
        MakeRecursionMethod recursionMethod = new MakeRecursionMethod() {
        };
        int[] arr = {1, 2, 3, 4, 5};
        System.out.println(recursionMethod.arrSum(arr));
    }
}

class MakeRecursionMethod {
    //sum all elements in arr
    public int arrSum(int[] arr) {
        if (arr.length == 0) return 0;

        int[] recurArr = Arrays.copyOfRange(arr, 1, arr.length);
        return arr[0] + arrSum(recurArr);
    }

    /*public int arrSum(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }*/
}

/*
arr{1,2,3,4,5}
5 + arr{1,2,3,4}
4 + arr{1,2,3}
3 + arr{1,2}
2 + arr{1}
1 + arr{0}
 */

