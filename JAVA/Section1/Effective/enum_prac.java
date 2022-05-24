package Effective;

enum Fruits {APPLE, STRAWBERRY, MANGO, WATERMELON, ORANGE}

public class enum_prac {
    public static void main(String[] args) {
        //열거 객체 메서드 values()를 사용해 enum객체를 배열로 바꿔 fruit에 주소 대입
        Fruits[] fruits = Fruits.values();

        for (Fruits f : fruits) {
            System.out.println(f);

            // 망고 0을 기준 APPLE -2, STRAWBERRY -1, WATERMELON 1, ORANGE 2
            System.out.println(f.compareTo(Fruits.MANGO));
        }
        switch (Fruits.APPLE) {  //switch-case로 많이 쓴다.
            case APPLE:
                System.out.println("Wow APPLE!");
                break;
            case WATERMELON:
                System.out.println("Oh Watermelon!");
                break;
            case ORANGE:
                System.out.println("umm..Orange..");
                break;
        }
    }
}


