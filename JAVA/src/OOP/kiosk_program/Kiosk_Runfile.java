package OOP.kiosk_program;




public class Kiosk_Runfile {
    /**
     * @main() 메서드 동작
     * 프로그램 실행 -> 메뉴 입력 -> 수량 입력 및 가격 계산 -> 가격 출력
     */
    public static void main(String[] args) {
        //TODO:
        Kiosk_Program program = new Kiosk_Program();
        program.input_print();
       program.output_print( program.cost(program.count()));
    }
}

