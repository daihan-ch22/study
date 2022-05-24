package Collection_Framework;
public class generic_method {
    public static void main(String[] args) {
        NormalClass normal = new NormalClass();

        String strInput = normal.accept("DANC");
        String strInput2 = normal.accept("DANC2");

        normal.<String, Integer> getPrint(strInput, 3);
    }
}
class NormalClass{ // 일반 클래스 안에서 지네릭 메서드 선언
    public <T> T accept(T t){ // T accept 에서 T는 리턴타입  (예 int accept (int t)
        return t;
    }
    public <K, V> void getPrint(K k, V v){ // 리턴 타입 앞에 타입변수 선언
        System.out.println(k + ":" + v);
    }
}


