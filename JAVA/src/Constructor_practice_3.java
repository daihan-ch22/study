public class Constructor_practice_3 {
    public static void main(String[] args) {

        iPhone i = new iPhone("blue", "xs", false); //클래스 내 생성자의 파라미터로 들어감
        iPhone j = new iPhone("red");
        System.out.println("\n***MY IPHONE***");
        System.out.println("colour: " + i.colour + "\nmodel: " + i.model + "\ndamaged?: " + i.damaged);
        System.out.println("\n***YOUR IPHONE***");
        System.out.println("colour: " + j.colour + "\nmodel: " + j.model + "\ndamaged?: " + j.damaged);

    }
}

class iPhone { //클래스 영역

    //필드 영역
    String colour;    //(인스턴스 변수)
    String model;      //(인스턴스 변수)
    boolean damaged;  //(인스턴스 변수)

    iPhone(String colour, String model, boolean damaged)  //생성자
    {
        this.colour = colour;      //클래스명인 iPhone 대신 this를 쓴다
        this.model = model;          //생성자 안의 this.변수명 은 필드의 변수를 가르킨다!
        this.damaged = damaged;
    }

    iPhone(String colour) {
        this(colour, "X", true);

        // main 에서 iPhone j = new iPhone("red"); 라고 새 인스턴스를 만들었다.
        // 지금 이 범위에 있는 생성자 안에서 this(colour, "X", true);를 썻는데 각각 아래와 같다.
        // this() 안에 3개의 매개변수를 넣었다 -> 즉 3개의 매개변수를 갖는 생성자를 현재 클래스 내에서 호출한다

        // String colour 하나만을 매개변수로 갖는 생성자의 매개변수 colour를 그대로 재사용
        // X: 3개의 매개변수를 갖는 생성자의 2번째 매개변수 값 으로써 문자 "X"를 넣는다.
        // true: 3개의 매개변수를 갖는 생성자의 3번째 매개변수 값 으로써 boolean 타입인 true를 넣는다.
    }
}
