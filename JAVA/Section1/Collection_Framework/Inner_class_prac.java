package Collection_Framework;

public class Inner_class_prac {
    public static void main(String[] args) {
        OuterClass o_class = new OuterClass();
        System.out.println("외부 클래스 사용해서 내부 클래스 기능 호출");
        o_class.testClass();

    }

}
class OuterClass                     // 외부 클래스
{
    private int num = 100;           // 외부 클래스 필드 변수
    private static int S_num = 500;  // 외부 클래스 필드 변수 2

    private inClass innerClass;      // 내부 클래스 자료형 변수 선언


   public OuterClass()               // 외부 클래스 생성자
   {
       innerClass = new inClass();
   }
    //inClass innerClass = new inClass();
    //외부 클래스는 기본생성자로 자동생성 시키고 내부클래스 인스턴스 만들어도 가능

    class inClass                    // 인스턴스 내부 클래스
    {
        int inNum = 5;               // 내부 클래스의 인스턴스 변수

        void testResult() {
            System.out.println("Outer num = " + num + " 외부 클래스의 인스턴스 변수");
            System.out.println("Outer S_num = " + S_num + " 외부 클래스의 정적 변수");
        }
    }
    public void testClass() {
        innerClass.testResult();
    }
}

