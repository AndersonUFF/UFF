package ListaDinamica;
import java.util.*;
/**
 *
 * @author Anderson
 */
public class mainLista {
   public static void main(String[] args){
       Scanner sc = new Scanner(System.in);
       Lista lst;
       lst = new Lista();
       lst.criaLista();
       for (int i = 0; i < 3; i++) {
           System.out.println("Digite um valor");
           lst.insereLista(sc.nextInt());
       }
       lst.imprimeLista();
   }
}
