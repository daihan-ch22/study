package polymorphism;

public class practice_1 {
    public static void main(String[] args) {
        Friend friend = new Friend();           // 객체타입과 참조변수 타입 일치
        BoyFriend boyfriend = new BoyFriend();  // 객체타입과 참조변수 타입 일치
        Friend girlfriend = new GirlFriend();   // 객체타입과 참조변수 타입 불 일치
        // 상위클래스 타입의 참조변수로 하위클래스 객체 참조

        //GirlFriend girlFriend2 = new Friend();
        //하위클래스 타입의 참조변수로 상위클래스를 참조 불가 -
        //girlFriend2 의 멤버 개수가 상위클래스 Friend 의 멤버 개수보다 많기 때문
        friend.friendDetails();
        boyfriend.friendDetails();
        girlfriend.friendDetails();
    }
}

class Friend {
    public void friendDetails() {
        System.out.println("I'm your friend");
    }
}

class BoyFriend extends Friend {
    //method override
    public void friendDetails() {
        System.out.println("I'm your boyfriend");
    }

}

class GirlFriend extends Friend {
    //method override
    public void friendDetails() {
        System.out.println("I'm your girlfriend");
    }
}
