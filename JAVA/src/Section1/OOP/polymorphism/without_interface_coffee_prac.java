package polymorphism;

//Customer A always drinks iced longblack
//Customer B always have strawberry pie
//손님이 추가될 때마다 메서드 오버라이딩을 해야하는 번거로움이 크다.

//ordering menu
public class without_interface_coffee_prac {
    public static void main(String[] args) {

        CafeOwner cafeowner = new CafeOwner();
        CafeCustomerA customerA = new CafeCustomerA();
        CafeCustomerB customerB = new CafeCustomerB();

        //CafeOwner클래스의 인스턴스 변수 cafeowner를 통해 giveCoffee의 메소드에 접근
        //CustomerA의 객체변수 customerA, Customer의 객체변수 customerB가 들어감
        cafeowner.giveCoffee(customerA);
        cafeowner.giveCoffee(customerB);  //
    }
}

//카페손님
class CafeCustomer{
    String CafeCustomerName;   // 메인에서 인스턴스를 만들어 Customer A와 Customer B 저장

    void setCafeCustomerName(String CafeCustomerName){
        this.CafeCustomerName = CafeCustomerName;
    }
}

//CafeCustomer 클래스로부터 단골 A 단골 B 클래스로 상속
class CafeCustomerA extends CafeCustomer{ } //CafeCustomer의 필드와 메서드 상속
class CafeCustomerB extends CafeCustomer{ } //CafeCustomer의 필드와 메서드 상속

//카페 사장
class CafeOwner{
    // giveCoffee메서드 오버라이딩으로  A / B 나눔
    // 손님이 추가될 때마다 메서드 오버라이딩을 해야하는 번거로움이 크다.
    void giveCoffee(CafeCustomerA cafeCustomerA){    //메인에서 customerA 객체변수를 받아옴
        System.out.println("iced longblack to Customer A");
    }
    void giveCoffee(CafeCustomerB cafeCustomerB){    //메인에서 customerB 객체변수를 받아옴
        System.out.println("Strawberry pie to Customer B");
    }
}

