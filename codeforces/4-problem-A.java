import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    int peso = new Scanner (System.in).nextInt();
    
    if (peso%2 == 0 && peso != 2) {
      System.out.println("YES");
    } else{
      System.out.println("NO");
    } 
  }
}