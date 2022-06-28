import java.lang.reflect.Array;
import java.util.*;

public class fibonacci_23 {

    public static void main(String[] args) {
        System.out.print(fibonacci(9));

    }

    public static int fibonacci(int num) {
        // TODO:

        ArrayList<Integer> list = new ArrayList<>();

        list.add(0);
        list.add(1);

        return fiboCal(list, num);
    }

    public static int fiboCal(ArrayList<Integer> list, int num)
    {

        if(num >= list.size()){
                list.add(fiboCal(list, num-1) + fiboCal(list, num-2));
            }

        return list.get(num);

    }
}
