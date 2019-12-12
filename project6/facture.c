#include<stdio.h>
#include<string.h>
#include "facture.h"
#include<gtk/gtk.h>


enum
  {
     ID_FACT,
     NOM,
     PRENOM,
     JOUR,
     MOIS,
     ANNEE,
     RESERVATION,
     MONTANT_TOTAL,
     MONTANT_TTC,
     COLUMNS  
  };
void afficher_facture(GtkWidget *liste)
{
 GtkCellRenderer *renderer;
 GtkTreeViewColumn *column;
 GtkTreeIter iter;
 GtkListStore *store;
    char id_fact[10];
    char nom[20];
    char prenom[20];
    char jour[10];
    char mois[10];
    char annee[10];
    char reservation[10];
    char montant_total[20];
    char montant_ttc[20];
 store=NULL;
FILE*p;
store=gtk_tree_view_get_model(liste); 
if(store==NULL)
 {
   renderer=gtk_cell_renderer_text_new();//40
	column=gtk_tree_view_column_new_with_attributes("id_fact",renderer,"text",ID_FACT,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
   renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("nom",renderer,"text",NOM,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("prenom",renderer,"text",PRENOM,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
	
 renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("jour",renderer,"text",JOUR,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column); renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("mois",renderer,"text",MOIS,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column); renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("annee",renderer,"text",ANNEE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("reservation",renderer,"text",RESERVATION,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

	//70
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("montant_total",renderer,"text",MONTANT_TOTAL,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("montant_ttc",renderer,"text",MONTANT_TTC,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
p=fopen("/home/yasmine/Projects/project6/src/facture.txt","r");

	if(p==NULL)
	{
		return;
	}
	else
	
	{ 
	p=fopen("/home/yasmine/Projects/project6/src/facture.txt","a+");
		while(fscanf(p,"%s %s %s %s %s %s %s %s %s \n",id_fact,nom,prenom,jour,mois,annee,reservation,montant_total,montant_ttc)!=EOF)
		{
			gtk_list_store_append(store,&iter);
			gtk_list_store_set(store,&iter,ID_FACT,id_fact,NOM,nom,PRENOM,prenom,JOUR,jour,MOIS,mois,ANNEE,annee,RESERVATION,reservation,MONTANT_TOTAL,montant_total,MONTANT_TTC,montant_ttc,-1);
		}
	   fclose(p);//100
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
	g_object_unref(store);
	}
 } 

}

void ajouter_facture(facture f)
{
    FILE*p;
    p=fopen("facture.txt","a+");
    if(p!=NULL)
    fprintf(p,"%s %s %s %d %d %d %s %d %d\n",f.id_fact,f.nom,f.prenom,f.jour,f.mois,f.annee,f.reservation,f.montant_total,f.montant_ttc);
   fclose(p);
}

void modifier_facture(facture f,char id_fact[20], int jour1,int mois1,int annee1,int montant_total1,int montant_ttc1,char x[20]) 

{ 
    
FILE*file;
FILE*tmp; 
 
file=fopen("/home/yasmine/Projects/project6/src/facture.txt","r");
tmp=fopen("/home/yasmine/Projects/project6/src/tmp.txt","w");
 if(file!=NULL) 
{ 
while(fscanf(file,"%s %s %s %d %d %d %s %d %d \n",f.id_fact,f.nom,f.prenom,&f.jour,&f.mois,&f.annee,f.reservation,&f.montant_total,&f.montant_ttc)!=EOF)	
{ if(strcmp(id_fact,f.id_fact)==0)

{if (strcmp("20%",x)==0)
{ f.montant_total=f.montant_total-(f.montant_total*0.20);
 f.montant_ttc=f.montant_total+(f.montant_total*0.17); }
   else if (strcmp("30%",x)==0)
   { f.montant_total=f.montant_total-(f.montant_total*0.30);
   f.montant_ttc=f.montant_total+(f.montant_total*0.17); }
    else if
    (strcmp("40%",x)==0)
    {  f.montant_total=f.montant_total-(f.montant_total*0.40);
    f.montant_ttc=f.montant_total+(f.montant_total*0.17); }
       else if 
       (strcmp("50%",x)==0)
     {  f.montant_total=f.montant_total-(f.montant_total*0.50);
       f.montant_ttc=f.montant_total+(f.montant_total*0.17);  }
fprintf(tmp,"%s %s %s %d %d %d %s %d %d \n",f.id_fact,f.nom,f.prenom,jour1,mois1,annee1,f.reservation,f.montant_total,f.montant_ttc);}
else
fprintf(tmp,"%s %s %s %d %d %d %s %d %d  \n",f.id_fact,f.nom,f.prenom,f.jour,f.mois,f.annee,f.reservation,f.montant_total,f.montant_ttc);
} 
}
fclose(file) ; 
fclose(tmp);
remove("/home/yasmine/Projects/project6/src/facture.txt");
rename("/home/yasmine/Projects/project6/src/tmp.txt","/home/yasmine/Projects/project6/src/facture.txt");
}

int verifier (char id_fact[20])
{ int y;
	FILE *file;
        facture f;
	file=fopen("facture.txt","r");
	if(file !=NULL)
	{
		while(!y && fscanf(file,"%s %s %s %d %d %d %s %d %d \n",f.id_fact,f.nom,f.prenom,&f.jour,&f.mois,&f.annee,f.reservation,&f.montant_total,&f.montant_ttc)!=EOF)
		{
			if(strcmp(f.id_fact,id_fact)==0)
			{y=1;}
			
		}
		fclose(file);
		}
return (y);
}


void supprimer_facture(char id_facture[20])
{
facture f;

FILE *file;
FILE *tmp;

file=fopen("/home/yasmine/Projects/project6/src/facture.txt","r");
tmp=fopen("/home/yasmine/Projects/project6/src/tmp.txt","w");
if(file!=NULL) 
{ if (tmp!=NULL)
{while(fscanf(file,"%s %s %s %d %d %d %s %d %d \n",f.id_fact,f.nom,f.prenom,&f.jour,&f.mois,&f.annee,f.reservation,&f.montant_total,&f.montant_ttc)!=EOF)
{if(strcmp(id_facture,f.id_fact)!=0)
{
fprintf(tmp,"%s %s %s %d %d %d %s %d %d \n",f.id_fact,f.nom,f.prenom,f.jour,f.mois,f.annee,f.reservation,f.montant_total,f.montant_ttc);

}}
fclose(tmp);}
fclose(file);}

remove("/home/yasmine/Projects/project6/src/facture.txt");
rename("/home/yasmine/Projects/project6/src/tmp.txt","/home/yasmine/Projects/project6/src/facture.txt");

}

