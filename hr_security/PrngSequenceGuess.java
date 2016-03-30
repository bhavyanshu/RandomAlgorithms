/**
 * https://www.hackerrank.com/challenges/prng-sequence-guessing
 */
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class PrngSequenceGuess {

  public static void main(String[] args) {

    Scanner sysin = new Scanner(System.in);

    // first line of input contains a number N<10 indicating the number of test cases
    int cases = sysin.nextInt();

    for (int i=0; i<cases; i++) {

      //take input two unix timestamps
      int start = sysin.nextInt();
      int end = sysin.nextInt();

      // ten lines contain the first ten numbers sequentially generated
      int[] inputv = new int[10];
      for (int j=0; j<10; j++) {
        inputv[j] = sysin.nextInt();
      }

      for (int seed=start; seed<=end; seed++) {
        Random rand = new Random(seed);
        boolean flag = true;

        for (int k=0; k<inputv.length; k++) {
          //check if randomly generated really equal to input, if not set flag false
          if (rand.nextInt(1000) != inputv[k]) {
            flag = false;
            break;
          }
        }

        if (flag) { // all okay! so now print
          System.out.print(seed+" ");
          for (int l=0; l<10; l++) {
            System.out.print(rand.nextInt(1000)+" ");
          }
          System.out.print("\n");
        }
      }
    }
  }
}
