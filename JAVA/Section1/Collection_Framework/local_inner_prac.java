package Collection_Framework;
public class local_inner_prac {
    public static void main(String[] args) {
        OuterClass2 outerClass2 = new OuterClass2();
        outerClass2.local_test();
    }
}
class OuterClass2{
    int number = 10;
    void local_test(){
        int number2 = 20;

        class LocalClass{ // 지역 내부 클래스 (메서드 안에서 존재)
            void printResult(){
                System.out.printf("외부 클래스 변수 number: %d\n", number);
                System.out.printf("메서드 필드 변수 number2: %d\n", number2);
            }
        }
        //지역 내부 클래스는 일반적으로 선언하고 나서 바로 인스턴스를 만들고 사용
        LocalClass localClass = new LocalClass();
        localClass.printResult();
    }
}

