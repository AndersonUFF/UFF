/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ListaDinamica;

/**
 *
 * @author Anderson
 */
public class No {
    private int info;
    private No prox;

    public void setInfo(int info) {
        this.info = info;
    }

    public int getInfo() {
        return info;
    }

    public void setProx(No prox) {
        this.prox = prox;
    }

    public No getProx() {
        return prox;
    }
}
