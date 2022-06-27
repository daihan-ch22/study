import java.util.*;

public class bubbleSort_22 {
    public static void main(String[] args) {
        int arr[] = {3, 4, 1, 5, 9, 2};



            int[] ans = bubbleSort(arr);
            for(int i = 0 ; i< ans.length; i++)
            {
                System.out.println(ans[i]);
            }

    }


    public static int[] bubbleSort(int[] arr) {
        // TODO:
        int temp = 0;
        boolean sorted = false;

        for(int i =1; i<arr.length; i++)
        {
            for(int j = 0; j<arr.length-i; j++) //
            {
                if(arr[j] > arr[j+1])
                {
                    temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                    sorted = true;
                }
            }
            if(sorted==false) break;
        }
        return arr;
    }
}
