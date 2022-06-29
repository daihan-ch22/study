import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class isSubsetOf_24 {
    public static void main(String[] args) {

        int[] base = {10, 99, 123, 7};
        int[] sample = {7, 99, 123, 10};
        System.out.println(isSubsetOf(base, sample));
    }


    public static boolean isSubsetOf(int[] base, int[] sample) {
        // TODO:
        List<Integer> subset = Arrays.stream(base).boxed().collect(Collectors.toList()); // 전부 Integer형으로 전환

        for (int i : sample) {
            if (!subset.contains(i)) {
                return false;
            }
        }
        return true;
    }
}
