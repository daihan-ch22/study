public class DP_steal_urMoneyFrom_da_Safe {
    public static void main(String[] args) {
        safe safeTest = new safe();
        int[] arr = {10, 20, 50};
        System.out.println(safeTest.ocean(100, arr));

    }
}
// [1, 2, 5]  10


//  동전        |0         1       2       3       4       5       6       7       8      9       10
//  type[]     ----------------------------------------------------------------------------> target
//
//   []        |1         0       0       0       0       0       0       0       0      0       0
//  [1]        |1         1       1       1       1       1       1       1       1      1       1
//  [2]        |1         1       2       2       3       3       4       4       5      5       6
//  [5]        |1         1       2       2       3       4       5       6       7      8       10
//
//  answer[]   |1         1       2       2       3       4       5       6       7      8       10
class safe {
    public long ocean(int target, int[] type) {
// CHECKED REFERENCE CODE
// MUST TRY AGAIN
        // target으로 하면 인덱스가 하나 모자르다. 10일때 인덱스는 0~10이라 길이 11이 나옴
        int[] answer = new int[target + 1];

        answer[0] = 1; //target이 0이면 항상 1이 나온다 (위의 표 참고)

        for (int i = 0; i < type.length; i++) {  //i번째 코인타입 부터 type.length 코인 타입까지 돌기
            for (int j = 0; j <= target; j++)    //0원 부터 target원까지 1씩 더하며 column 돌기
            {
                if (type[i] <= j)   //현재 동전 타입보다 현재 target이 커야함. 아니면 에러
                    answer[j] += answer[j - type[i]];  //target에서 동전 타입을 뺀 것을 더해나간다.
            }
        }
        return answer[target];
    }
}

