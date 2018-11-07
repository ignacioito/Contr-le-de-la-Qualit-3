package ca.qc.grasset._420_pa4_ag.tp01;

public class UtilitaireTableau {

    public UtilitaireTableau() {

        super();
    }

    /**
    * Chercher la dernière position dans le tableau de la valeur spécifiée.
    *
    *  test: x = [2, 3, 5]   y = 2  Résultat attendu = 0
    *
    *  @param x Tableau à rechercher
    *  @param y Valeur à rechercher
    *  @return Dernière position de y dans x; -1 si absent
    *  @throws NullPointerException si x est null
    */
    public int chercherDernierePositionValeur(
        final int[] x,
        final int y) {

        for (int i = x.length - 1; i > 0; i--) {
            if (x[i] == y) {
                return i;
            }
        }

        return -1;
    }

    /**
     * Chercher la dernière position de la valeur 0
     *
     *  test: x = [0, 1, 0]   Résultat attendu = 2
     *
     * @param x Tableau à rechercher
     * @return Dernière position de 0 dans x; -1 si absent
     * @throws NullPointerException si x est null
     */
    public int chercherDernierePositionZero(
        final int[] x) {

        for (int i = 0; i < x.length; i++) {
            if (x[i] == 0) {
                return i;
            }
        }
        return -1;
    }

    /**
     * Compter les entiers impairs ou positifs dans un tableau.
     *
     *  test: x = [-3, -2, 0, 1, 4]   Résultat attendu = 3
     *
     * @param x Tableau à rechercher
     * @return Le nombre d'entier impairs ou positif dans x
     * @throws NullPointerException si x est null
     */
    public int compterEntierImpairOuPositif(
        final int[] x) {

        int count = 0;

        for (int i = 0; i < x.length; i++) {
            if (x[i] % 2 == 1 || x[i] > 0) {
                count++;
            }
        }
        return count;
    }

    /**
     * Compte les entiers positifs dans un tableau.
     *
     *  test: x = [-4, 2, 0, 2]   Résultat attendu = 2
     *
     * @param x Tableau à rechercher
     * @return Le nombre d'entier positif dans x
     * @throws NullPointerException si x is null
     */
    public int compterEntierPositif(
        final int[] x) {

        int count = 0;

        for (int i = 0; i < x.length; i++) {
            if (x[i] >= 0) {
                count++;
            }
        }
        return count;
    }
}
