package Collection_Framework;

import java.util.Arrays;
import java.util.Comparator;

public class comparator_comparable_prac {
    public static void main(String[] args) {
        String[] arr = {"cat", "Dog", "lion", "tiger", "penguin"};

        Arrays.sort(arr); //String의 Comparable구현에 의한 정렬
        System.out.println("arr= " + Arrays.toString(arr));

        Arrays.sort(arr, String.CASE_INSENSITIVE_ORDER); //대소문자 구분 X
        System.out.println("arr= " + Arrays.toString(arr));

        Arrays.sort(arr, new Descending()); //역순으로 정렬
        System.out.println("arr= " + Arrays.toString(arr));
    }
}

class Descending implements Comparator {
    public int compare(Object o1, Object o2) {
        if (o1 instanceof Comparable && o2 instanceof Comparable) {
            Comparable c1 = (Comparable) o1;
            Comparable c2 = (Comparable) o2;

            return c1.compareTo(c2) * -1;
            //-1을 곱해 기본 정렬 방식에 역으로 변경
            //c2.compareTo(c1)와 같이 순서 변경 가능
        }
        return -1;
    }
}