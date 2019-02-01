import java.util.*;
import java.io.*;

public class game{
    public static void main(String [] args){
        int num;
        String cond;
        Random rand = new Random();
        Scanner input = new Scanner(System.in);
        Scanner scanner = new Scanner(System.in);
        int sec = rand.nextInt(200) + 1;
        
        System.out.println("I'm thinking of a number! Try to guess the number I'm thinking of: ");
    	int num = input.nextInt();    
        while(num!=sec) {
            if(sec>num) {
                System.out.println("Too low! Guess again: ");
    	        int num = input.nextInt();    
            }
            else if(sec<num) {
                System.out.println("Too high! Guess again: ");
    	        int num = input.nextInt();    
            }
        }
        System.out.println("That's it! Would you like to play again? (yes/no): ");
    	String cond = scanner.nextLine();
        if((cond == "yes") || (cond == "Yes") || (cond == "YES") ) {
            //return main();
        }
        else {
            //return 0;
        }
    }
}

