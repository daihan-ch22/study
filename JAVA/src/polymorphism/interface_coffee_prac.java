

//인터페이스 Customer
interface Customer {
    public abstract String getOrder();
}

// CustomerA / B 의 Customer interface 구현
class CafeCustomerA implements Customer {

    public String getOrder() {
        return "Iced Americano";
    }

}

class CafeCustomerB implements Customer {

    public String getOrder() {
        return "George Pie";
    }
}

//사장
class CafeOwner {
    void giveItem(Customer customer) {
        System.out.println("Sold " + customer.getOrder());
    }
}

//ORDER - MAIN
public class interface_coffee_prac {
    public static void main(String[] args) {
        CafeOwner cafeOwner = new CafeOwner();
        Customer cafeCustomerA = new CafeCustomerA();
        Customer cafeCustomerB = new CafeCustomerB();

        cafeOwner.giveItem(cafeCustomerA);
        cafeOwner.giveItem(cafeCustomerB);

    }
}

