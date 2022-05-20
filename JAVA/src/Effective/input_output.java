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
            file.close();
        }
            catch(IOException e){
                e.printStackTrace();

            }

        File file = new File("codestates11.txt");
        file.createNewFile();
        System.out.println(file.getPath());
        System.out.println(file.getParent());
        System.out.println(file.getCanonicalPath());
        System.out.println(file.canWrite());
    }
}
