package Collection_Framework;
public class generic_basic {
    public static void main(String[] args) {
        Box<String> stringBox = new Box<String>();
        stringBox.set("String 4 stringBox");
        System.out.println(stringBox.get());   //String 4 stringBox

        Box<Integer> integerBox = new Box<Integer>();
        integerBox.set(12345);
        System.out.println(integerBox.get()); // 12345
    }
}
class Box<T>
{
    private T t;
    public void set(T t) { this.t = t; }
    public T get() { return t; }
}

/*class Box {
    private String t;
    public String get() { return t; }
    public void set(String t) { this.t = t; }
}

class Box {
    private Integer t;
    public Integer get() { return t; }
    public void set(Integer t) { this.t = t; }*/

