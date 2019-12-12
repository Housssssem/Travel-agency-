#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "facture.h"
#include <gtk/gtkclist.h>
#include <gdk/gdkkeysyms.h>


void
on_afficher_facture_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1;
GtkWidget *facture_client;
GtkWidget *treeview1;

facture_client=lookup_widget(objet,"window1");

gtk_widget_destroy(window1);
facture_client=lookup_widget(objet,"facture_client");
facture_client=create_facture_client();

gtk_widget_show(facture_client);

treeview1=lookup_widget(facture_client,"treeview1");

afficher_facture(treeview1);
}


void
on_retour1_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1,*facture_client;

facture_client=lookup_widget(objet,"facture_client");

gtk_widget_destroy(facture_client);
window1=create_window1();

}


void
on_recherche_facture_clicked           (GtkWidget      *objet,
                                        gpointer         user_data)
{
int x;
char id_fact2[20];

GtkWidget *output2;
GtkWidget *input1;
GtkWidget *modifier;
modifier=lookup_widget(objet,"modifier");
input1=lookup_widget(objet,"id_facture");
output2=lookup_widget(objet,"erreur");
strcpy(id_fact2,gtk_entry_get_text(GTK_ENTRY(input1)));
x=verifier(id_fact2);
if (x!=1)
{gtk_label_set_text(GTK_LABEL(output2),"numero de facture incorrect !");
}
}

void
on_supprimer_facture_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *supprimer_fact;
GtkWidget *facture_client;

facture_client=lookup_widget(objet,"facture_client");
gtk_widget_destroy(facture_client);
supprimer_fact=create_supprimer_fact();
gtk_widget_show(supprimer_fact);
}


void
on_modifier_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *modifier;
GtkWidget *facture_client;

facture_client=lookup_widget(objet,"facture_client");
gtk_widget_destroy(facture_client);
modifier=create_modifier();
gtk_widget_show(modifier);
}


void
on_retour2_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *modifier;
GtkWidget *facture_client;
GtkWidget *treeview1;

facture_client=lookup_widget(objet,"modifier");

gtk_widget_destroy(modifier);
facture_client=lookup_widget(objet,"facture_client");
facture_client=create_facture_client();

gtk_widget_show(facture_client);

treeview1=lookup_widget(facture_client,"treeview1");

afficher_facture(treeview1);
}





void
on_valider_clicked                     (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *input;
GtkWidget *jour11;
GtkWidget *mois11;
GtkWidget *annee11;
GtkWidget *Combobox1;

    char y[20];
    char id_fact1[20];
    int jour1;
    int mois1;
    int annee1; 
    int montant_total1;
    int montant_ttc1; 
    facture f;
    char w[20];
   
input=lookup_widget(objet,"id_facture");

jour11=lookup_widget(objet,"jour");
mois11=lookup_widget(objet,"mois");
annee11=lookup_widget(objet,"annee");
Combobox1=lookup_widget(objet,"combobox1");

strcpy(id_fact1,gtk_entry_get_text(GTK_ENTRY(input)));
jour1=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour11));
mois1=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois11));
annee1=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee11));
//strcpy(id_fact1,gtk_entry_get_text(GTK_ENTRY(input)));

if (strcmp("20%",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0)
{strcpy (w,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)));
//y=w;
}
else if (strcmp("30%",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0)
{strcpy (w,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)));
//y=w;
}
else if (strcmp("40%",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0)
{strcpy (w,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)));
//y=w;
}
else if (strcmp("50%",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0)
{strcpy (w,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)));
//y=w; 
}
modifier_facture(f,id_fact1,jour1,mois1,annee1,montant_total1,montant_ttc1,w); 
}



void
on_retour3_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *supprimer_fact;
GtkWidget *facture_client;
GtkWidget *treeview1;

facture_client=lookup_widget(objet,"supprimer_fact");

gtk_widget_destroy(supprimer_fact);
facture_client=lookup_widget(objet,"facture_client");
facture_client=create_facture_client();

gtk_widget_show(facture_client);

treeview1=lookup_widget(facture_client,"treeview1");

afficher_facture(treeview1);
}



void
on_recherche_facture2_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
int x;
char id_fact2[20];

GtkWidget *output22;
GtkWidget *input11;
GtkWidget *supprimer_fact;
supprimer_fact=lookup_widget(objet,"supprimer_fact");
input11=lookup_widget(objet,"id_facture0");
output22=lookup_widget(objet,"supprimer");
strcpy(id_fact2,gtk_entry_get_text(GTK_ENTRY(input11)));
x=verifier(id_fact2);
if (x!=1)
{gtk_label_set_text(GTK_LABEL(output22),"numero de facture incorrect !");
}
}


void
on_recherchefacture_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
int x;
char id_fact2[20];

GtkWidget *output22;
GtkWidget *input11;
GtkWidget *supprimer_fact;
supprimer_fact=lookup_widget(objet,"supprimer_fact");
input11=lookup_widget(objet,"id_facture0");
output22=lookup_widget(objet,"supprimer");
strcpy(id_fact2,gtk_entry_get_text(GTK_ENTRY(input11)));
x=verifier(id_fact2);
if (x!=1)
{gtk_label_set_text(GTK_LABEL(output22),"numero de facture incorrect !");
}
}


void
on_valider0_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *input11;
//GtkWidget *supprimer_fact;
char id_fact0[20];
input11=lookup_widget(objet,"id_facture0");
strcpy(id_fact0,gtk_entry_get_text(GTK_ENTRY(input11)));

//supprimer_fact⁼lookup_widget(objet,"supprimer_fact");
supprimer_facture(id_fact0);


}


void
on_ajouter_clicked                     (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *ajouter;
GtkWidget *facture_client;

facture_client=lookup_widget(objet,"facture_client");
gtk_widget_destroy(facture_client);
ajouter=create_ajouter();
gtk_widget_show(ajouter);
}


/*void
on_ajouterfact_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
/*
GtkWidget *input1,*input2,*input3,*input4,*input5,*input6;
GtkWidget *ajouter;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;

facture f;
/*int jour100;
int mois100;
int annee100;
char id_fact100[20];
char reservations100[20];/
char montant_total100[20];
char montant_ttc100[20];
int x;
int y;
ajouter=lookup_widget(objet,"ajouter");

jour=lookup_widget(objet,"Jour");
mois=lookup_widget(objet,"Mois");
annee=lookup_widget(objet,"Annee");
input1=lookup_widget(objet,"id_fact0");
input2=lookup_widget(objet,"nom");
input3=lookup_widget(objet,"prenom");
input4=lookup_widget(objet,"reservation");
input5=lookup_widget(objet,"montant_total");
input6=lookup_widget(objet,"montant_ttc");

strcpy(f.id_fact,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(f.nom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(f.prenom,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(f.reservation,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(montant_total100,gtk_entry_get_text(GTK_ENTRY(input5))); //
strcpy(montant_ttc100,gtk_entry_get_text(GTK_ENTRY(input6))); //

sscanf(montant_total100,"%d",&x);
sscanf(montant_ttc100,"%d",&y);
f.montant_total=x;
f.montant_ttc=y;
f.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
f.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
f.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));


ajouter_facture(f);*/



void
on_retour4_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *ajouter;
GtkWidget *facture_client;
GtkWidget *treeview1;

ajouter=lookup_widget(objet,"ajouter");

gtk_widget_destroy(ajouter);
facture_client=lookup_widget(objet,"facture_client");
facture_client=create_facture_client();

gtk_widget_show(facture_client);

treeview1=lookup_widget(facture_client,"treeview1");

afficher_facture(treeview1);
}




void
on_recherche_facture100_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
facture f;
GtkWidget *modifier;
GtkWidget *input1,*output1,*output2,*output3,*output4,*output5;

char id_fact [20];
char montant_total500[20];
char montant_ttc500[20];


output1=lookup_widget(objet,"nom100");
output2=lookup_widget(objet,"prenom100");
output3=lookup_widget(objet,"reservation100");
output4=lookup_widget(objet,"montant_total100");
output5=lookup_widget(objet,"montant_ttc100");
input1=lookup_widget(objet,"id_facture");
strcpy(id_fact,gtk_entry_get_text(GTK_ENTRY(input1)));

FILE *p;
	p=fopen("/home/yasmine/Projects/projet6/src/facture.txt","r");
	if(p!=NULL)
{
while(fscanf(p,"%s %s %s %d %d %d %s %d %d \n",f.id_fact,f.nom,f.prenom,&f.jour,&f.mois,&f.annee,f.reservation,&f.montant_total,&f.montant_ttc)!=EOF)
{
	if (strcmp(f.id_fact,id_fact)==0)
{
//gtk_entry_set_text (GTK_ENTRY (output1),f.id_fact);
gtk_entry_set_text (GTK_ENTRY (output1),f.nom);
gtk_entry_set_text (GTK_ENTRY (output2),f.prenom);
gtk_entry_set_text (GTK_ENTRY (output3),f.reservation);
gtk_entry_set_text (GTK_ENTRY (output4),montant_total500);
gtk_entry_set_text (GTK_ENTRY (output5),montant_ttc500);
sscanf (montant_total500,"%d",&f.montant_total);
sscanf(montant_ttc500,"%d",&f.montant_ttc);
}
}}}



void
on_ajouterfact1_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *input1,*input2,*input3,*input4,*input5,*input6;
GtkWidget *ajouter;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;

facture f;
/*int jour100;
int mois100;
int annee100;
char id_fact100[20];
char reservations100[20];*/
char montant_total100[20];
char montant_ttc100[20];
int x;
int y;
ajouter=lookup_widget(objet,"ajouter");

jour=lookup_widget(objet,"Jour");
mois=lookup_widget(objet,"Mois");
annee=lookup_widget(objet,"Annee");
input1=lookup_widget(objet,"id_fact0");
input2=lookup_widget(objet,"nom");
input3=lookup_widget(objet,"prenom");
input4=lookup_widget(objet,"reservation");
input5=lookup_widget(objet,"montant_total");
input6=lookup_widget(objet,"montant_ttc");

strcpy(f.id_fact,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(f.nom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(f.prenom,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(f.reservation,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(montant_total100,gtk_entry_get_text(GTK_ENTRY(input5))); //
strcpy(montant_ttc100,gtk_entry_get_text(GTK_ENTRY(input6))); //

sscanf(montant_total100,"%d",&x);
sscanf(montant_ttc100,"%d",&y);
f.montant_total=x;
f.montant_ttc=y;
f.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
f.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
f.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));


ajouter_facture(f);

}

