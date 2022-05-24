package Effective;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.Executors;
import java.util.concurrent.ExecutorService;

public class threadPool_prac {
    public static void main(String[] args) {
        ExecutorService executorService = Executors.newFixedThreadPool(6);

        for( int i =0; i<10; i++){
            Runnable runnable = new Runnable(){ //

                @Override
                        public void run() {
                    ThreadPoolExecutor threadPoolExecutor = (ThreadPoolExecutor) executorService;

                    //스레드 풀 개수 확인
                    int poolSize = threadPoolExecutor.getPoolSize();

                    //스레드 풀에 있는 해당 스레드 이름 확인
                    String threadName = Thread.currentThread().getName();
                    System.out.println("스레드 풀 개수: " + poolSize + "스레드 이름: " + threadName);
                }
            };

            //스레드 풀 작업 요청
            executorService.execute(runnable);

            //콘솔 출력위해 main스레드에 10ms sleep( ) 메서드 사용
            try{
                Thread.sleep(10); // 10miils
            } catch (InterruptedException e){
                e.printStackTrace();
            }
        }
        //스레드 풀 종료
        executorService.shutdown();
    }
}
