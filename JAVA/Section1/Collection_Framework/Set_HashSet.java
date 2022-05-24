package Collection_Framework;
import java.util.*;

public class Set_HashSet {
    public static void main(String[] args) {
        HashSet<String> languages = new HashSet<String>();

        languages.add("apple");
        languages.add("orange");
        languages.add("mango");
        languages.add("strawberry");
        languages.add("grape");
        languages.add("apple");

        Iterator i = languages.iterator();

        while (i.hasNext()) {
            System.out.println(i.next());
        }
    }
}
