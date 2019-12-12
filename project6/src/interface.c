/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *afficher_facture;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));
  gtk_window_set_default_size (GTK_WINDOW (window1), 500, 500);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  afficher_facture = gtk_button_new_with_mnemonic (_("affcher toutes les factures"));
  gtk_widget_show (afficher_facture);
  gtk_fixed_put (GTK_FIXED (fixed1), afficher_facture, 104, 208);
  gtk_widget_set_size_request (afficher_facture, 248, 37);

  g_signal_connect ((gpointer) afficher_facture, "clicked",
                    G_CALLBACK (on_afficher_facture_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, afficher_facture, "afficher_facture");

  return window1;
}

GtkWidget*
create_facture_client (void)
{
  GtkWidget *facture_client;
  GtkWidget *fixed2;
  GtkWidget *treeview1;
  GtkWidget *label2;
  GtkWidget *supprimer_facture;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label6;
  GtkWidget *modifier;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label5;
  GtkWidget *retour1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label1;
  GtkWidget *ajouter;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image10;
  GtkWidget *label17;

  facture_client = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (facture_client), _("facture_client"));
  gtk_window_set_default_size (GTK_WINDOW (facture_client), 700, 700);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (facture_client), fixed2);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview1, 50, 65);
  gtk_widget_set_size_request (treeview1, 464, 200);
  gtk_container_set_border_width (GTK_CONTAINER (treeview1), 12);

  label2 = gtk_label_new (_("toutes les factures"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed2), label2, 184, 24);
  gtk_widget_set_size_request (label2, 145, 17);

  supprimer_facture = gtk_button_new ();
  gtk_widget_show (supprimer_facture);
  gtk_fixed_put (GTK_FIXED (fixed2), supprimer_facture, 80, 320);
  gtk_widget_set_size_request (supprimer_facture, 106, 40);
  gtk_button_set_focus_on_click (GTK_BUTTON (supprimer_facture), FALSE);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (supprimer_facture), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label6 = gtk_label_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (label6);
  gtk_box_pack_start (GTK_BOX (hbox4), label6, FALSE, FALSE, 0);

  modifier = gtk_button_new ();
  gtk_widget_show (modifier);
  gtk_fixed_put (GTK_FIXED (fixed2), modifier, 232, 320);
  gtk_widget_set_size_request (modifier, 104, 40);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (modifier), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (hbox3), label5, FALSE, FALSE, 0);

  retour1 = gtk_button_new ();
  gtk_widget_show (retour1);
  gtk_fixed_put (GTK_FIXED (fixed2), retour1, 232, 416);
  gtk_widget_set_size_request (retour1, 96, 40);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (retour1), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label1 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

  ajouter = gtk_button_new ();
  gtk_widget_show (ajouter);
  gtk_fixed_put (GTK_FIXED (fixed2), ajouter, 392, 320);
  gtk_widget_set_size_request (ajouter, 104, 37);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (ajouter), alignment10);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox10);

  image10 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox10), image10, FALSE, FALSE, 0);

  label17 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label17);
  gtk_box_pack_start (GTK_BOX (hbox10), label17, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) supprimer_facture, "clicked",
                    G_CALLBACK (on_supprimer_facture_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifier, "clicked",
                    G_CALLBACK (on_modifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) retour1, "clicked",
                    G_CALLBACK (on_retour1_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouter, "clicked",
                    G_CALLBACK (on_ajouter_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (facture_client, facture_client, "facture_client");
  GLADE_HOOKUP_OBJECT (facture_client, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (facture_client, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (facture_client, label2, "label2");
  GLADE_HOOKUP_OBJECT (facture_client, supprimer_facture, "supprimer_facture");
  GLADE_HOOKUP_OBJECT (facture_client, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (facture_client, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (facture_client, image4, "image4");
  GLADE_HOOKUP_OBJECT (facture_client, label6, "label6");
  GLADE_HOOKUP_OBJECT (facture_client, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (facture_client, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (facture_client, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (facture_client, image3, "image3");
  GLADE_HOOKUP_OBJECT (facture_client, label5, "label5");
  GLADE_HOOKUP_OBJECT (facture_client, retour1, "retour1");
  GLADE_HOOKUP_OBJECT (facture_client, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (facture_client, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (facture_client, image1, "image1");
  GLADE_HOOKUP_OBJECT (facture_client, label1, "label1");
  GLADE_HOOKUP_OBJECT (facture_client, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (facture_client, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (facture_client, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (facture_client, image10, "image10");
  GLADE_HOOKUP_OBJECT (facture_client, label17, "label17");

  return facture_client;
}

GtkWidget*
create_modifier (void)
{
  GtkWidget *modifier;
  GtkWidget *fixed3;
  GtkObject *jour_adj;
  GtkWidget *jour;
  GtkObject *mois_adj;
  GtkWidget *mois;
  GtkObject *annee_adj;
  GtkWidget *annee;
  GtkWidget *id_facture;
  GtkWidget *label10;
  GtkWidget *label8;
  GtkWidget *label9;
  GtkWidget *combobox1;
  GtkWidget *erreur;
  GtkWidget *faire_une_reduction;
  GtkWidget *recherche_facture100;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label4;
  GtkWidget *valider;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label11;
  GtkWidget *retour2;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label12;

  modifier = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (modifier), _("modifier"));
  gtk_window_set_default_size (GTK_WINDOW (modifier), 500, 500);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (modifier), fixed3);

  jour_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  jour = gtk_spin_button_new (GTK_ADJUSTMENT (jour_adj), 1, 0);
  gtk_widget_show (jour);
  gtk_fixed_put (GTK_FIXED (fixed3), jour, 80, 80);
  gtk_widget_set_size_request (jour, 60, 27);

  mois_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  mois = gtk_spin_button_new (GTK_ADJUSTMENT (mois_adj), 1, 0);
  gtk_widget_show (mois);
  gtk_fixed_put (GTK_FIXED (fixed3), mois, 80, 136);
  gtk_widget_set_size_request (mois, 60, 27);

  annee_adj = gtk_adjustment_new (1, 2016, 2030, 1, 10, 10);
  annee = gtk_spin_button_new (GTK_ADJUSTMENT (annee_adj), 1, 0);
  gtk_widget_show (annee);
  gtk_fixed_put (GTK_FIXED (fixed3), annee, 72, 192);
  gtk_widget_set_size_request (annee, 60, 27);

  id_facture = gtk_entry_new ();
  gtk_widget_show (id_facture);
  gtk_fixed_put (GTK_FIXED (fixed3), id_facture, 168, 32);
  gtk_widget_set_size_request (id_facture, 96, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (id_facture), 8226);

  label10 = gtk_label_new (_("jour"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed3), label10, 8, 88);
  gtk_widget_set_size_request (label10, 41, 17);

  label8 = gtk_label_new (_("mois"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed3), label8, 16, 144);
  gtk_widget_set_size_request (label8, 41, 17);

  label9 = gtk_label_new (_("annee"));
  gtk_widget_show (label9);
  gtk_fixed_put (GTK_FIXED (fixed3), label9, 16, 200);
  gtk_widget_set_size_request (label9, 41, 17);

  combobox1 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox1);
  gtk_fixed_put (GTK_FIXED (fixed3), combobox1, 168, 264);
  gtk_widget_set_size_request (combobox1, 73, 39);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("20%"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("30%"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("40%"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("50%"));

  erreur = gtk_label_new ("");
  gtk_widget_show (erreur);
  gtk_fixed_put (GTK_FIXED (fixed3), erreur, 288, 24);
  gtk_widget_set_size_request (erreur, 208, 40);

  faire_une_reduction = gtk_label_new (_("faire une reduction"));
  gtk_widget_show (faire_une_reduction);
  gtk_fixed_put (GTK_FIXED (fixed3), faire_une_reduction, 8, 264);
  gtk_widget_set_size_request (faire_une_reduction, 144, 41);

  recherche_facture100 = gtk_button_new ();
  gtk_widget_show (recherche_facture100);
  gtk_fixed_put (GTK_FIXED (fixed3), recherche_facture100, 40, 32);
  gtk_widget_set_size_request (recherche_facture100, 114, 37);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (recherche_facture100), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label4 = gtk_label_new_with_mnemonic (_("rechercher"));
  gtk_widget_show (label4);
  gtk_box_pack_start (GTK_BOX (hbox2), label4, FALSE, FALSE, 0);

  valider = gtk_button_new ();
  gtk_widget_show (valider);
  gtk_fixed_put (GTK_FIXED (fixed3), valider, 320, 344);
  gtk_widget_set_size_request (valider, 98, 48);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (valider), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-save", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label11 = gtk_label_new_with_mnemonic (_("enregister "));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (hbox5), label11, FALSE, FALSE, 0);

  retour2 = gtk_button_new ();
  gtk_widget_show (retour2);
  gtk_fixed_put (GTK_FIXED (fixed3), retour2, 32, 352);
  gtk_widget_set_size_request (retour2, 96, 45);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (retour2), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox6), label12, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) recherche_facture100, "clicked",
                    G_CALLBACK (on_recherche_facture100_clicked),
                    NULL);
  g_signal_connect ((gpointer) valider, "clicked",
                    G_CALLBACK (on_valider_clicked),
                    NULL);
  g_signal_connect ((gpointer) retour2, "clicked",
                    G_CALLBACK (on_retour2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (modifier, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (modifier, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (modifier, jour, "jour");
  GLADE_HOOKUP_OBJECT (modifier, mois, "mois");
  GLADE_HOOKUP_OBJECT (modifier, annee, "annee");
  GLADE_HOOKUP_OBJECT (modifier, id_facture, "id_facture");
  GLADE_HOOKUP_OBJECT (modifier, label10, "label10");
  GLADE_HOOKUP_OBJECT (modifier, label8, "label8");
  GLADE_HOOKUP_OBJECT (modifier, label9, "label9");
  GLADE_HOOKUP_OBJECT (modifier, combobox1, "combobox1");
  GLADE_HOOKUP_OBJECT (modifier, erreur, "erreur");
  GLADE_HOOKUP_OBJECT (modifier, faire_une_reduction, "faire_une_reduction");
  GLADE_HOOKUP_OBJECT (modifier, recherche_facture100, "recherche_facture100");
  GLADE_HOOKUP_OBJECT (modifier, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (modifier, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (modifier, image2, "image2");
  GLADE_HOOKUP_OBJECT (modifier, label4, "label4");
  GLADE_HOOKUP_OBJECT (modifier, valider, "valider");
  GLADE_HOOKUP_OBJECT (modifier, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (modifier, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (modifier, image5, "image5");
  GLADE_HOOKUP_OBJECT (modifier, label11, "label11");
  GLADE_HOOKUP_OBJECT (modifier, retour2, "retour2");
  GLADE_HOOKUP_OBJECT (modifier, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (modifier, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (modifier, image6, "image6");
  GLADE_HOOKUP_OBJECT (modifier, label12, "label12");

  return modifier;
}

GtkWidget*
create_supprimer_fact (void)
{
  GtkWidget *supprimer_fact;
  GtkWidget *fixed4;
  GtkWidget *id_facture0;
  GtkWidget *supprimer;
  GtkWidget *recherchefacture;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label13;
  GtkWidget *retour3;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label15;
  GtkWidget *valider0;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label16;

  supprimer_fact = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (supprimer_fact), _("supprimer"));
  gtk_window_set_default_size (GTK_WINDOW (supprimer_fact), 500, 500);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (supprimer_fact), fixed4);

  id_facture0 = gtk_entry_new ();
  gtk_widget_show (id_facture0);
  gtk_fixed_put (GTK_FIXED (fixed4), id_facture0, 160, 56);
  gtk_widget_set_size_request (id_facture0, 96, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (id_facture0), 8226);

  supprimer = gtk_label_new ("");
  gtk_widget_show (supprimer);
  gtk_fixed_put (GTK_FIXED (fixed4), supprimer, 104, 112);
  gtk_widget_set_size_request (supprimer, 176, 57);

  recherchefacture = gtk_button_new ();
  gtk_widget_show (recherchefacture);
  gtk_fixed_put (GTK_FIXED (fixed4), recherchefacture, 32, 56);
  gtk_widget_set_size_request (recherchefacture, 114, 37);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (recherchefacture), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("rechercher"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox7), label13, FALSE, FALSE, 0);

  retour3 = gtk_button_new ();
  gtk_widget_show (retour3);
  gtk_fixed_put (GTK_FIXED (fixed4), retour3, 24, 208);
  gtk_widget_set_size_request (retour3, 98, 37);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (retour3), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label15 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label15);
  gtk_box_pack_start (GTK_BOX (hbox8), label15, FALSE, FALSE, 0);

  valider0 = gtk_button_new ();
  gtk_widget_show (valider0);
  gtk_fixed_put (GTK_FIXED (fixed4), valider0, 224, 208);
  gtk_widget_set_size_request (valider0, 90, 37);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (valider0), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-ok", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label16 = gtk_label_new_with_mnemonic (_("valider"));
  gtk_widget_show (label16);
  gtk_box_pack_start (GTK_BOX (hbox9), label16, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) recherchefacture, "clicked",
                    G_CALLBACK (on_recherchefacture_clicked),
                    NULL);
  g_signal_connect ((gpointer) retour3, "clicked",
                    G_CALLBACK (on_retour3_clicked),
                    NULL);
  g_signal_connect ((gpointer) valider0, "clicked",
                    G_CALLBACK (on_valider0_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (supprimer_fact, supprimer_fact, "supprimer_fact");
  GLADE_HOOKUP_OBJECT (supprimer_fact, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (supprimer_fact, id_facture0, "id_facture0");
  GLADE_HOOKUP_OBJECT (supprimer_fact, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (supprimer_fact, recherchefacture, "recherchefacture");
  GLADE_HOOKUP_OBJECT (supprimer_fact, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (supprimer_fact, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (supprimer_fact, image7, "image7");
  GLADE_HOOKUP_OBJECT (supprimer_fact, label13, "label13");
  GLADE_HOOKUP_OBJECT (supprimer_fact, retour3, "retour3");
  GLADE_HOOKUP_OBJECT (supprimer_fact, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (supprimer_fact, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (supprimer_fact, image8, "image8");
  GLADE_HOOKUP_OBJECT (supprimer_fact, label15, "label15");
  GLADE_HOOKUP_OBJECT (supprimer_fact, valider0, "valider0");
  GLADE_HOOKUP_OBJECT (supprimer_fact, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (supprimer_fact, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (supprimer_fact, image9, "image9");
  GLADE_HOOKUP_OBJECT (supprimer_fact, label16, "label16");

  return supprimer_fact;
}

GtkWidget*
create_ajouter (void)
{
  GtkWidget *ajouter;
  GtkWidget *fixed5;
  GtkWidget *id_fact0;
  GtkWidget *nom;
  GtkWidget *prenom;
  GtkObject *Jour_adj;
  GtkWidget *Jour;
  GtkObject *Mois_adj;
  GtkWidget *Mois;
  GtkObject *Annee_adj;
  GtkWidget *Annee;
  GtkWidget *reservation;
  GtkWidget *montant_total;
  GtkWidget *montant_ttc;
  GtkWidget *label22;
  GtkWidget *label23;
  GtkWidget *label18;
  GtkWidget *label21;
  GtkWidget *label20;
  GtkWidget *label19;
  GtkWidget *label25;
  GtkWidget *label24;
  GtkWidget *label26;
  GtkWidget *retour4;
  GtkWidget *alignment12;
  GtkWidget *hbox12;
  GtkWidget *image12;
  GtkWidget *label28;
  GtkWidget *ajouterfact1;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image11;
  GtkWidget *label27;

  ajouter = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (ajouter), _("ajouter"));

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (ajouter), fixed5);

  id_fact0 = gtk_entry_new ();
  gtk_widget_show (id_fact0);
  gtk_fixed_put (GTK_FIXED (fixed5), id_fact0, 104, 24);
  gtk_widget_set_size_request (id_fact0, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (id_fact0), 8226);

  nom = gtk_entry_new ();
  gtk_widget_show (nom);
  gtk_fixed_put (GTK_FIXED (fixed5), nom, 80, 72);
  gtk_widget_set_size_request (nom, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (nom), 8226);

  prenom = gtk_entry_new ();
  gtk_widget_show (prenom);
  gtk_fixed_put (GTK_FIXED (fixed5), prenom, 104, 112);
  gtk_widget_set_size_request (prenom, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (prenom), 8226);

  Jour_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  Jour = gtk_spin_button_new (GTK_ADJUSTMENT (Jour_adj), 1, 0);
  gtk_widget_show (Jour);
  gtk_fixed_put (GTK_FIXED (fixed5), Jour, 80, 168);
  gtk_widget_set_size_request (Jour, 60, 27);

  Mois_adj = gtk_adjustment_new (1, 12, 100, 1, 10, 10);
  Mois = gtk_spin_button_new (GTK_ADJUSTMENT (Mois_adj), 1, 0);
  gtk_widget_show (Mois);
  gtk_fixed_put (GTK_FIXED (fixed5), Mois, 216, 168);
  gtk_widget_set_size_request (Mois, 60, 27);

  Annee_adj = gtk_adjustment_new (1, 2016, 2030, 1, 10, 10);
  Annee = gtk_spin_button_new (GTK_ADJUSTMENT (Annee_adj), 1, 0);
  gtk_widget_show (Annee);
  gtk_fixed_put (GTK_FIXED (fixed5), Annee, 360, 168);
  gtk_widget_set_size_request (Annee, 60, 27);

  reservation = gtk_entry_new ();
  gtk_widget_show (reservation);
  gtk_fixed_put (GTK_FIXED (fixed5), reservation, 112, 208);
  gtk_widget_set_size_request (reservation, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (reservation), 8226);

  montant_total = gtk_entry_new ();
  gtk_widget_show (montant_total);
  gtk_fixed_put (GTK_FIXED (fixed5), montant_total, 120, 256);
  gtk_widget_set_size_request (montant_total, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (montant_total), 8226);

  montant_ttc = gtk_entry_new ();
  gtk_widget_show (montant_ttc);
  gtk_fixed_put (GTK_FIXED (fixed5), montant_ttc, 120, 312);
  gtk_widget_set_size_request (montant_ttc, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (montant_ttc), 8226);

  label22 = gtk_label_new (_("mois"));
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed5), label22, 152, 177);
  gtk_widget_set_size_request (label22, 49, 16);

  label23 = gtk_label_new (_("annee"));
  gtk_widget_show (label23);
  gtk_fixed_put (GTK_FIXED (fixed5), label23, 296, 176);
  gtk_widget_set_size_request (label23, 49, 17);

  label18 = gtk_label_new (_("id_facture"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed5), label18, 8, 24);
  gtk_widget_set_size_request (label18, 80, 25);

  label21 = gtk_label_new (_("jour"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed5), label21, 8, 176);
  gtk_widget_set_size_request (label21, 49, 17);

  label20 = gtk_label_new (_("prenom"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed5), label20, 0, 112);
  gtk_widget_set_size_request (label20, 80, 32);

  label19 = gtk_label_new (_("nom"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed5), label19, 8, 72);
  gtk_widget_set_size_request (label19, 48, 25);

  label25 = gtk_label_new (_("montant total"));
  gtk_widget_show (label25);
  gtk_fixed_put (GTK_FIXED (fixed5), label25, 0, 248);
  gtk_widget_set_size_request (label25, 112, 40);

  label24 = gtk_label_new (_("reservation"));
  gtk_widget_show (label24);
  gtk_fixed_put (GTK_FIXED (fixed5), label24, 8, 200);
  gtk_widget_set_size_request (label24, 80, 40);

  label26 = gtk_label_new (_("montant ttc"));
  gtk_widget_show (label26);
  gtk_fixed_put (GTK_FIXED (fixed5), label26, 0, 304);
  gtk_widget_set_size_request (label26, 112, 40);

  retour4 = gtk_button_new ();
  gtk_widget_show (retour4);
  gtk_fixed_put (GTK_FIXED (fixed5), retour4, 56, 360);
  gtk_widget_set_size_request (retour4, 82, 37);

  alignment12 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment12);
  gtk_container_add (GTK_CONTAINER (retour4), alignment12);

  hbox12 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox12);
  gtk_container_add (GTK_CONTAINER (alignment12), hbox12);

  image12 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_box_pack_start (GTK_BOX (hbox12), image12, FALSE, FALSE, 0);

  label28 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label28);
  gtk_box_pack_start (GTK_BOX (hbox12), label28, FALSE, FALSE, 0);

  ajouterfact1 = gtk_button_new ();
  gtk_widget_show (ajouterfact1);
  gtk_fixed_put (GTK_FIXED (fixed5), ajouterfact1, 312, 360);
  gtk_widget_set_size_request (ajouterfact1, 82, 37);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (ajouterfact1), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image11 = gtk_image_new_from_stock ("gtk-save", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox11), image11, FALSE, FALSE, 0);

  label27 = gtk_label_new_with_mnemonic (_("valider"));
  gtk_widget_show (label27);
  gtk_box_pack_start (GTK_BOX (hbox11), label27, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) retour4, "clicked",
                    G_CALLBACK (on_retour4_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouterfact1, "clicked",
                    G_CALLBACK (on_ajouterfact1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ajouter, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (ajouter, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (ajouter, id_fact0, "id_fact0");
  GLADE_HOOKUP_OBJECT (ajouter, nom, "nom");
  GLADE_HOOKUP_OBJECT (ajouter, prenom, "prenom");
  GLADE_HOOKUP_OBJECT (ajouter, Jour, "Jour");
  GLADE_HOOKUP_OBJECT (ajouter, Mois, "Mois");
  GLADE_HOOKUP_OBJECT (ajouter, Annee, "Annee");
  GLADE_HOOKUP_OBJECT (ajouter, reservation, "reservation");
  GLADE_HOOKUP_OBJECT (ajouter, montant_total, "montant_total");
  GLADE_HOOKUP_OBJECT (ajouter, montant_ttc, "montant_ttc");
  GLADE_HOOKUP_OBJECT (ajouter, label22, "label22");
  GLADE_HOOKUP_OBJECT (ajouter, label23, "label23");
  GLADE_HOOKUP_OBJECT (ajouter, label18, "label18");
  GLADE_HOOKUP_OBJECT (ajouter, label21, "label21");
  GLADE_HOOKUP_OBJECT (ajouter, label20, "label20");
  GLADE_HOOKUP_OBJECT (ajouter, label19, "label19");
  GLADE_HOOKUP_OBJECT (ajouter, label25, "label25");
  GLADE_HOOKUP_OBJECT (ajouter, label24, "label24");
  GLADE_HOOKUP_OBJECT (ajouter, label26, "label26");
  GLADE_HOOKUP_OBJECT (ajouter, retour4, "retour4");
  GLADE_HOOKUP_OBJECT (ajouter, alignment12, "alignment12");
  GLADE_HOOKUP_OBJECT (ajouter, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (ajouter, image12, "image12");
  GLADE_HOOKUP_OBJECT (ajouter, label28, "label28");
  GLADE_HOOKUP_OBJECT (ajouter, ajouterfact1, "ajouterfact1");
  GLADE_HOOKUP_OBJECT (ajouter, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (ajouter, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (ajouter, image11, "image11");
  GLADE_HOOKUP_OBJECT (ajouter, label27, "label27");

  return ajouter;
}

