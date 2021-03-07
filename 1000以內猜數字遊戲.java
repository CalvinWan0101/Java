package com.mycompany.firsttry;
import java.util.Scanner;
public class GuessNumber1000 {
    public static void main(String[] args) {
        float number = (float) Math.random();
        number *= 1000.0f;
        int answer = (int) number;
        Scanner watch = new Scanner(System.in);
        while (true) {
            int guess = watch.nextInt();
            if (guess > answer) {
                System.out.println("Tooooooooo large");
            } else if (guess < answer) {
                System.out.println("Tooooooooo small");
            } else {
                System.out.println("Bingo");
            }
        }
    }
}
