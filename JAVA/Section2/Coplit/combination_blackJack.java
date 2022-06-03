public class combination_blackJack {
    public static void main(String[] args) {

    }
}

class BlackJack {
    public int boringBlackjack(int[] cards) {

        int sum = 0;
        int count = 0;
        boolean[] boo = new boolean[3000];

        for (int i = 0; i < cards.length; i++) {
            for (int j = i + 1; j < cards.length; j++) {
                for (int k = j + 1; k < cards.length; k++) {
                    sum = cards[i] + cards[j] + cards[k];
                    if (isPrime(sum)) {
                        count++;
                    }
                }
            }
        }
        return count;
    }

    //소수 확인 메서드
    public static boolean isPrime(int sum) {

        for(int i=2; i<=Math.sqrt(sum); i++)
        {
            if(sum % i == 0) return false;
        }
        return true;
    }
}

