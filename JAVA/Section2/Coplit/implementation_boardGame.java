import java.util.*;
import java.util.LinkedList;
import java.util.Queue;

public class implementation_boardGame {
    public static void main(String[] args) {
    BoardGame game = new BoardGame();
    int[][] commands = new int[][]
            {
                    {0, 0, 0, 0, 0},
                    {0, 0, 1, 0, 0},
                    {0, 0, 0, 0, 0},
                    {0, 0, 0, 1, 0},
                    {0, 0, 0, 0, 0}
            };
        System.out.println(game.boardGame(commands, "DDRRRUDUDUD"));
    }
}

//커맨드 문자열을 하나하나 쪼개서 queue에 넣는다.
// while로 queue.size() ==0 이 될때까지 반복

//커맨드를 확인후 배열의 해당 위치 확인
// 먼저 커맨드를 적용한 위치가 배열을 벗어나면 바로 null 때리기
//만약 위치 배열의 값이 1이면 point ++; 그리고 나서 trigger 좌표 변경

class BoardGame{
    public Integer boardGame(int[][] board, String operation) {

        int points = 0;
        int trigger1 = 0;
        int trigger2 = 0;

        Queue<Character> queue = new LinkedList<Character>();
        for(char c : operation.toCharArray()){
            queue.add(c);
        }
            while (!queue.isEmpty()) {
                switch (queue.peek()) {
                    case 'U':
                        if (trigger1-1 < 0 ) return null;   // check if the target area is out of Array size
                        if (board[trigger1 - 1][trigger2] == 1)  //if the value in the index is 1
                        {
                            points++;
                            trigger1--; // UP
                            queue.poll();
                            break;
                        } else { // if the value is 0
                            queue.poll();
                            trigger1--;
                            break;
                        }

                    case 'D':
                        if (trigger1+1 > board.length ) return null; // check if the target area is out of Array size
                        if (board[trigger1 + 1][trigger2] == 1) {
                            points++;
                            trigger1++; //DOWN
                            queue.poll();
                            break;
                        } else {
                            trigger1++;
                            queue.poll();
                            break;
                        }
                    case 'L':
                        if (trigger2-1 < 0) return null;
                        if (board[trigger1][trigger2 - 1] == 1) {
                            points++;
                            trigger2--;
                            queue.poll();
                            break;
                        } else {
                            trigger2--;
                            queue.poll();
                            break;
                        }

                    case 'R':
                        if(trigger2+1 > board.length ) return null;

                        if (board[trigger1][trigger2 + 1] == 1) {
                            points++;
                            trigger2++;
                            queue.poll();
                            break;
                        } else {
                            trigger2++;
                            queue.poll();
                            break;
                        }

                }

            }
        return points;
    }
}