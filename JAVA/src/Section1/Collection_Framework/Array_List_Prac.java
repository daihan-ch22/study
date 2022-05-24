package Collection_Framework;
import java.util.*;

public class Array_List_Prac {
    public static void main(String[] args) {
        List<String> list = new ArrayList<>(20);
        //20개의 객체 저장가능
        //다이아몬드 연산자 - 컴파일러가 유추해서 String타입을 마저 채워 넣는다.

        list.add("Dusty"); //ArrayList에 저장 -0
        list.add("Boi"); //1
        list.add("Dan"); //2

        Iterator<String> iterator = list.iterator();
        //iterator 메서드로 list의 요소 에 접근한다.

        while(iterator.hasNext()) //가져올 객체가 있는지 확인후 있으면 진행
        {
            String str = iterator.next();
            System.out.println(str);
        }

        int size = list.size(); //저장 객체수 확인 size()

        for (int i=0; i<list.size(); i++)
        {
            String str = list.get(i);
            System.out.println(i + ":" + str);
        }
        list.remove(0);
    }
}
