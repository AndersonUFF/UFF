package ListaDinamica;

/**
 *
 * @author Anderson
 */
public class Lista {
    private No prim;
    
    //incia uma lista vazia
    public void criaLista(){
        prim = null;
    }
    
    //insere no final da lista
    public void insereLista(int info){
        if(prim == null){
            No novo = new No();
            novo.setInfo(info);
            novo.setProx(prim);
            prim = novo;
        }else{
            No aux;
            No novo = new No();
            novo.setInfo(info);
            for (aux = prim; aux.getProx() != null; aux = aux.getProx());
            novo.setProx(aux.getProx());
            aux.setProx(novo);
        }
    }
    
    //imprime a lista
    public void imprimeLista(){
        for(No aux = prim; aux != null; aux = aux.getProx()){
            System.out.print(aux.getInfo() + " ");
        }
    }
}
