/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.trabalhocalculadora;

import com.mycompany.trabalhocalculadora.visao.JFrTela;


/**
 *
 * @author renat
 */
public class TrabalhoCalculadora {

    public static void main(String[] args) {
                /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new JFrTela().setVisible(true);
            }
        });
    }
}
