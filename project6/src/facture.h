#include<gtk/gtk.h>
#include <gtk/gtkclist.h>
#include <gdk/gdkkeysyms.h>

typedef struct
{
    char id_fact[20];
    char nom[20];
    char prenom[20];
    int jour;
    int mois;
    int annee;
    char reservation[20];
    int montant_total;
    int montant_ttc;


}facture;

void ajouter_facture(facture f);
void supprimer_facture(char id_facture[20]);
void modifier_facture(facture f,char id_fact[20], int jour1,int mois1,int annee1,int montant_total1,int montant_ttc1,char x[20]);
void afficher_facture(GtkWidget *liste);
int verifier (char id_fact[20]);

