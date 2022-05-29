import java.util.*;
import java.util.stream.Collectors;
import java.util.LinkedList;
import java.util.Queue;


public class printer {
    public static void main(String[] args) {

        Solution1 sol = new Solution1();
        int[] arr = {7, 4, 5, 6};
        System.out.println(sol.queuePrinter(2, 10, arr));
    }
}


class Solution1 {

    public int queuePrinter(int bufferSize, int capacities, int[] documents) {

        //결과를 담을 변수를 선언, 초기화
        int count = 0;

        //인쇄 환경을 담을 큐를 선언. (new queue로는 안됨 Queue는 인터페이스라 linkedlist or 우선순위 큐 같은걸로 구현)
        Queue<Integer> queue = new LinkedList<>(); // 선언만 한 상태. queue = [] 나 마찬가지

        //선언한 큐를 0으로 채워준다. //0은 대기열에 아무것도 없는걸 가정
        for(int i = 0; i< bufferSize; i++){
            queue.add(0);
        }

        //시작////////////

        //첫 시작은 초기값을 빼주고, 0번 문서를 넣는다. 이후 결과 1 증가
        // 첫 1초는 직접 작성 -> 반복문안에서 하면 예외 케이스를 따로 넣어야하기 때문에 하드코딩한다
        queue.poll(); // 맨 앞의 0이 나가게되고
        queue.add(documents[0]); // 첫번째 문서를 넣어준다. 그리고 배열에서 첫번째 문서를 빼야함!
        documents = Arrays.copyOfRange(documents, 1, documents.length); // 안빼면 무한루프
        count ++; // 1초 지남



        //반복 시작, (더이상 출력될 문서가 없는 경우까지(documents) && 큐가 비어있지 않는 경우 - 대기열이 존재하지 않는 경우(중요)) **STOP!!!
        while(documents.length != 0 || queue.stream().reduce(0, Integer::sum) != 0)
        {

            //**대기중인 문서가 남아있는 경우 (documents)
            if(documents.length !=0)
            {
                int sum = queue.stream().reduce(0, Integer::sum) + documents[0]; //queue에 남아있는 모든 요소의 합 + 가장 처음에 들어올 문서

                //***작업중인 문서(큐 안에 남아있는 문서)와 가장 처음 들어올 문서(documents[0]) 를 합한 크기가 capacities보다 큰 경우 -> 문서는 못 들어오고 큐만 움직임
                //현재 문서가 나가면서 작업중인 문서의 크기가 달라진다.
                if(sum > capacities)
                {
                    queue.poll();
                    sum = queue.stream().reduce(0, Integer::sum) + documents[0]; //poll로 제거된 이후의 합을 다시 계산

                    //문서가 제거되고, 남은 대기열의 첫번째 문서를 포함했을때, 수용 가능하다면
                    if(sum <= capacities )
                    {
                        queue.add(documents[0]);
                        documents = Arrays.copyOfRange(documents, 1, documents.length); //문서가 빠졌으므로 배열의 0번째 삭제
                        count++; //1초 지남
                    }
                    //문서가 제거되고, 남은 대기열의 첫번째 문서를 포함했을때, 수용 못한다면 (if(sum > capacities)
                    //문서는 큐에 못들어가지만 큐에서 poll을 해서 한칸 움직이기 때문에 뒤에 생긴 빈 queue에 0을 넣어야 유지가 된다.
                    else
                    {
                        queue.add(0);
                        count++;
                    }
                }
                //***작업중인 문서(큐 안에 남아있는 문서)와 가장 처음 들어올 문서(documents[0]) 를 합한 크기가 capacities보다 작은 경우 -> 큐 움직이고 문서 ㄷ,ㄹ아엄
                else
                {
                    queue.poll();
                    queue.add(documents[0]);
                    documents = Arrays.copyOfRange(documents, 1, documents.length);
                    count++;
                }
            }

            //**대기중인 문서가 없는 경우(documents)
            else
            {
                queue.poll();
                queue.add(0); //큐는 항상 채워야 한다.
                count++;
            }
        }
        return count;
    }
}


/*

// 도전했던 것..

        List<Integer> list = Arrays.stream(documents).boxed().collect(Collectors.toList());

        Queue<Integer> 문서공간 = new LinkedList<Integer>();
        Queue<Integer> 작업공간 = new LinkedList<Integer>();

        Queue<Integer> 프린트 = new LinkedList<Integer>();

        int a = 문서공간.size();
        int count = 0;
        int sum = 0;
        //List<Integer> list = new ArrayList<>();
        //queue1     = documents 배열
        //queue      = 작업공간 큐
        //queuePrint = 프린터 큐

        for(int i = 0; i<documents.length; i++){
            문서공간.add(list.get(i));
        }
        for(int j = 0; j<documents.length; j++){
            프린트.add(0);
        }

        while(문서공간.size() != 0) {
            if(작업공간.size() == 0) {
                //1초 지남
                //sum = 문서공간.peek(); //document배열의 맨 처음 요소
                작업공간.add(문서공간.poll());
                count++;
                //프린트.add(작업공간.poll()); // --> 뒤에서 또 할 것이므로 제외
            }

            if(작업공간.size()>=bufferSize) { //현재 작업 공간 수가 더 크면 초만 지나감
                count++;
                작업공간.add(문서공간.poll());
            }

            else if(작업공간.size() < bufferSize) //전체 용량이 여유 있을 경우
            {
                //queue의 현재 요소 사이즈가 capacities보다 작으면
                if(프린트.peek()+작업공간.peek() < capacities)
                {
                    count += (bufferSize-1);
                    프린트.add(작업공간.poll());
                }
                else
                {
                    count += (bufferSize);
                    작업공간.add(문서공간.poll());
                    프린트.add(작업공간.poll());
                }
            }
        }
        return count;
    }
    }
    */