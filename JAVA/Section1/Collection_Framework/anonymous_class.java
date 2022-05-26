
interface FruitBox { //인터페이스 생성
    String fruit1 = "Podo";
    String fruit2 = "Sa_Gwa";
    void printFruit();
}

public class anonymous_class {
    public static void main(String[] args) {

        //먼저 클래스를 하나 만들어 구현을 한것이 아닌
        //Main 안에서 바로 익명 내부클래스로 사용해 구현했다.
        FruitBox fruitBox = new FruitBox() {
            @Override
            public void printFruit() {
                System.out.println(fruit1 + " & " + fruit2);
            }
        };
        fruitBox.printFruit();
    }
}