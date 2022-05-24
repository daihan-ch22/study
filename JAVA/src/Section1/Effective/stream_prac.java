package Effective;
import java.util.*;
import java.util.stream.*;

public class stream_prac {
    public static void main(String[] args) {
       /* List<String> animals = Arrays.asList("Cat", "Dog", "horse", "hamster");
        animals.stream()
                .map(i -> i.toLowerCase()) //전부 소문자
                .forEach(System.out::println);
        System.out.println("\n");

        animals.stream() //위의 스트림이 닫혔으니 다시 스트림 생성
                .map(s -> s.toUpperCase()) // 전부 대문자
                .forEach(System.out::println);*/

        Stream<String[]> stringArraysStream = Stream.of
                (new String[] {"Hello", "World", "Java"},
                        new String[] {"danc", "yeah"});

        stringArraysStream.flatMap(Arrays::stream).forEach(System.out::println);
    }

}
