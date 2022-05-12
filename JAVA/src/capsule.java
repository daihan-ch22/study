public class capsule {
    public static void main(String[] args) {

        Worker worker = new Worker();

        worker.setName("DANC");
        worker.setAge(15);
        worker.setIdnum(3311);

        String name = worker.getName();
        System.out.println("name: " + name );
        System.out.println("Age: " + worker.getAge());
        System.out.println("IdNum: " + worker.getIdnum());
    }
}
class Worker
{
    private String name;    //Worker 클래스 외부에서 접근 불가
    private int age;
    private int idnum;

    public String getName(){  //멤버변수의 값
        return name;
    }
    public int getAge(){
        return age;
    }
    public int getIdnum(){
        return idnum;
    }
    public void setName(String name){  //Setter 멤버변수 값 변경
        this.name = name;
    }
    public void setAge(int age){
        if(age < 1) return;
        this.age = age;
    }
    public void setIdnum(int id){
        this.idnum = id;
    }

}