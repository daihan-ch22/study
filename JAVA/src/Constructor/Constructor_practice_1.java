public class Constructor_practice_1 {
    public static void main(String[] args) {

        Constructor constructor1 = new Constructor();
        Constructor constructor2 = new Constructor("Hello World!");
        Constructor constructor3 = new Constructor(3, 30);
    }
}

class Constructor {
    Constructor()  // Constructor Overloading
    {
        System.out.println("#1 Constructor");
    }

    Constructor(String str) {
        System.out.println("#2 Constructor");
    }

    Constructor(int x, int y) {
        System.out.println("#3 Constructor");
    }
}
