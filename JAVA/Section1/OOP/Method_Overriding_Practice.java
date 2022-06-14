
public class Method_Overriding_Practice {
    public static void main(String[] args) {
        Cat[] cats = new Cat[]{new Dusty(), new Toto(), new Galbi()};

        for (int i = 0; i < cats.length; i++) {
            cats[i].sleepmode();
        }
    }
}

class Cat {
    void sleepmode() {
        System.out.println("zzzz...");
    }
}

class Dusty extends Cat {
    void sleepmode() {
        System.out.println("안자고 뭐해");
    }
}

class Toto extends Cat {
    void sleepmode() {
        System.out.println("토토 잔다");
    }
}

class Galbi extends Cat {
    void sleepmode() {
        System.out.println("갈비 잔다");
    }
}