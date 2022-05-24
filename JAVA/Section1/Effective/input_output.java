package Effective;
import java.io.*;

public class input_output {
    public static void main(String[] args) throws IOException {
        try{
            String fileName = "codestates.txt";
            FileReader file = new FileReader(fileName);
            BufferedReader bfile = new BufferedReader(file);

            int data = 0;
            while((data=bfile.read())!= -1){
                System.out.print((char)data);
            }
            System.out.println("\n");
            file.close();
        }
            catch(IOException e){
                e.printStackTrace();

            }

        File file = new File("study/IOtesting.txt"); //File 객체 생성 (매개변수 = 파일 이름)
        file.createNewFile();                                  //createNewFile( )메서드로 실제 파일 생성
        System.out.println(file.getPath());                    //파일의 경로 String으로 반환
        System.out.println(file.getParent());        //파일의 상위 디렉토리를 String or 파일로 반환
        System.out.println(file.getCanonicalPath()); //파일의 정규 경로를 String으로 반환
        System.out.println(file.canWrite());         //쓸수 있는 타입인지 boolean으로 반환
    }
}
