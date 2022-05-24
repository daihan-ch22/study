import java.util.*;
public class ElectricityBill {
  public static void main(String[] args) {
    System.out.println("=".repeat(25));
    System.out.println(" 주택용 전기요금(저압) 계산기 ");
    System.out.println("=".repeat(25));

    //TODO:

    double result = 0;

    Scanner usageInput = new Scanner(System.in);
    System.out.println("사용 전력량을 입력해 주세요. (단위 KWh)");
    double powerUsage = usageInput.nextDouble();

    // 1, 100 이하인 경우 전력당 60.7 원이 부가됩니다. (사용한 전력 100 kWh 이하일 경)
    if(powerUsage <=100)
    {
        result = powerUsage * 60.7;
      System.out.printf("사용 전력량: %f 의 전기요금은 %.2f 입니다.", powerUsage, result);
    }



    // 2, 100 이하인 경우 전력당 60.7원 부과, 100 초과인 경우 125.9원 부과 (사용한 전력이 100 kWh 초과일 경우)
  }
}
