package Array;

//로또 번호 생성기
public class Lottery {
    public static void main(String[] args) {
        int[] balls = new int[45]; //45개의 정수값을 저장하기 위한 배열 new로 생성함. 초기화는 아직 안됨

        //반복문으로 45길이의 배열 요소에 1~45까지의 값을 저장한다.
        for(int i = 0; i< balls.length; i++)
        {
            balls[i] = i+1; // 1부터 들어가야 하니 i+1을 한다.
        }

        int tempSwap = 0; //두 값을 바꿀때 사용할 임시 변수
        int j = 0;        //임의의 값을 얻어서 저장할 변수
        int bonus = 0;    // 보너스 공

        //임의의 요소와 배열의 i 번째 요소에 저장된 값을 swap
        //0번째부터 5번째 요소까지 6개만 바꾼다.
        for (int i = 0; i< 6; i++)
        {
            j = (int)(Math.random() * 45); // 0~44 범위의 임의의 값 획득
            tempSwap = balls[i];
            balls[i] = balls[j];
            balls[j] = tempSwap;
        }

        bonus = (int)(Math.random() * 45);

        //배열 balls의 앞에서 부터 6개의 요소 출력
        System.out.print("추첨번호는:: ");
        for (int i = 0; i<6; i++)
        {
            System.out.printf("%d ", balls[i]);
            if (i == 5)
            {
                System.out.printf("\nBonus ball: %d\n", bonus);
            }
        }

    }
}
