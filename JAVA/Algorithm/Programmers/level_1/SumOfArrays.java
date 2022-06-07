
// arr1 랑 arr2의 행과 열이 같다는 거지, 행과 열의 사이즈가 같다가 아니다.
// 4*4 / 3*3 정사각형 배열 X
// 5*3 / 5*3 식으로

class LetsSumTheArray {
    public int[][] solution(int[][] arr1, int[][] arr2) {
        int[][] answer = new int[arr1.length][arr1[0].length];


        for(int i = 0 ; i<arr1.length; i++)
        {
            for(int j = 0; j<arr1[0].length; j++)
            {
                answer[i][j] = arr1[i][j] + arr2[i][j];
            }
        }


        return answer;
    }
}