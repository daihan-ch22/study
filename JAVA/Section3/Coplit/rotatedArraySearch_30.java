import java.util.*;

public class rotatedArraySearch_30 {
    public static void main(String[] args) {
        int[] rotated = {9,10,15,4,6,8};
        int target = 6;
        System.out.println(rotatedArraySearch(rotated,target));
    }

    public static int rotatedArraySearch(int[] rotated, int target) {
        // TODO:
        //Linear Search
        for(int i=0;i<rotated.length;i++)
        {
            if(target == rotated[i]) {
                return i;
            }
        }
     return -1;
    }
}
