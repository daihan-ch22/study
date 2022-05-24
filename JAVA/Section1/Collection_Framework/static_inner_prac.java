package Collection_Framework;

public class static_inner_prac {
    public static void main(String[] args) {
       OuterClass1.Static_InnerClass n = new OuterClass1.Static_InnerClass();
       //외부 클래스.내부클래스

       n.printResult();
    }
}
class OuterClass1{
    private int number = 10;
    private static int static_num = 30;

    void print(){
        System.out.println("Instance Method");
    }
    static void staticPrint(){
        System.out.println("Static Method");
    }
    static class Static_InnerClass{   //정적 내부 클래스
        void printResult(){
                        System.out.println("Outer number = " + static_num + "is Static variable in Outer Class");
                        staticPrint();
                        // print(); ERROR!
                        // number 변수와 print 메서드는 사용 불가 (정적 멤버가 아니다)
        }
    }
}