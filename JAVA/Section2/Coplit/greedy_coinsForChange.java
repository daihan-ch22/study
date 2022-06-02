import java.util.*;

public class greedy_coinsForChange {
    public static void main(String[] args) {
        Greedy2 greedy2 = new Greedy2();
        System.out.println(greedy2.partTimeJob(4972));
    }
}
// 1 / 5 / 10 / 50 / 100 / 500 동전
// k값으로 동전 개수를 최소화 해서 줘야함 (% 사용)

// k/500 -> 500원 동전 개수
// k%500 -> 나머지 -> 다음 동전으로 비교


class Greedy2 {
    public int partTimeJob(int k) {
        // TODO:
        int left = k;
        int coin = 0;       // 해당 동전 개수
        int totalCoins = 0; // 동전 총 개수

        coin = left/500;
        totalCoins += coin;
        left = left - (500*coin);
        if(left == 0) return totalCoins;

        coin = left/100;
        totalCoins += coin;
        left = left - (100*coin);
        if(left == 0) return totalCoins;

        coin = left/50;
        totalCoins += coin;
        left = left - (50*coin);
        if(left == 0) return totalCoins;

        coin = left/10;
        totalCoins += coin;
        left = left - (10*coin);
        if(left == 0) return totalCoins;

        coin = left/5;
        totalCoins += coin;
        left = left - (5*coin);
        if(left == 0) return totalCoins;

        coin = left/1;
        totalCoins += coin;
        left = left - (1*coin);


        return totalCoins;
    }
}
