package polymorphism;
public class coffeePrac {
    public static void main(String[] args) {
        Customer customer = new Customer();
        customer.buyCoffee(new Americano());
        System.out.println("Your balance is:" + customer.money);
        customer.buyCoffee(new CaffeLatte());
        System.out.println("Your balance is:" + customer.money);
    }
}


class Coffee{
    int price;
    public Coffee(int price){ //price 초기화
        this.price = price;
    }
}

class Americano extends Coffee{
    public Americano(){
        super(4000);  //상위 클래스 Coffee 생성자 호출 - 아메리카노
    }
    public String toString() { return "Americano 4000"; }
    // Object 클래스 toString()메서드 오버라이딩
}

class CaffeLatte extends Coffee{
    public CaffeLatte(){
        super(5000);
    }
    public String toString() { return "CaffeLatte 5000";}
}
class Customer {
    int money = 50000;
    void buyCoffee(Coffee coffee) { //매개변수의 다형성
        if (money < coffee.price) {
            System.out.println("Not enough balance");
            return;
        }
        money = money - coffee.price; //가진 돈 - 커피 가격
        System.out.println("Purchased " + coffee);
    }
}