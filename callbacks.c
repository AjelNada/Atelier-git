#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "fonction.h"
#include <stdlib.h>
#include <string.h>

int x = 1;
int supp = 0;
void
on_button_deconnexion_gestion_clicked  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_modifier_gestion_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
GtkTreeSelection *selection;
GtkTreeModel     *model;
GtkTreeIter iter;
GtkWidget* input;
GtkWidget* output;
GtkWidget* window1_gestion;
GtkWidget* window5_modif;
GtkWidget *entry_id_modif, *entry_marque_modif, *entry_valmin_modif, *entry_valmax_modif;
GtkToggleButton *radiobutton_temp_moodif, *radiobutton_fum_modif , *radiobutton_debit_modif;
GtkWidget *spinbutton4_modif, *spinbutton5_modif, *spinbutton6_modif ,*combobox2;


gchar *ID;
capteur C;

window1_gestion=lookup_widget(button,"window1_gestion");
window5_modif=create_window5_modif();
treeview1=lookup_widget(button,"treeview1");
entry_id_modif=lookup_widget(window5_modif,"entry_id_modif");

selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview1));
if (gtk_tree_selection_get_selected(selection, &model, &iter)){  
gtk_tree_model_get (model,&iter, 0, &ID, -1);
gtk_entry_set_text(GTK_ENTRY(entry_id_modif),ID);
C = get_capteur_by_id(ID);

/*entry_marque_modif=lookup_widget(window5_modif,"entry_marque_modif");
entry_valmin_modif=lookup_widget(window5_modif,"entry_valmin_modif");
entry_valmax_modif=lookup_widget(window5_modif,"entry_valmax_modif");

radiobutton_temp_moodif = lookup_widget(window5_modif,"radiobutton_temp_moodif");
radiobutton_fum_modif = lookup_widget(window5_modif,"radiobutton_fum_modif");
radiobutton_debit_modif = lookup_widget(window5_modif,"radiobutton_debit_modif");

spinbutton4_modif = lookup_widget(window5_modif,"spinbutton4_modif");
spinbutton5_modif = lookup_widget(window5_modif,"spinbutton5_modif");
spinbutton6_modif = lookup_widget(window5_modif,"spinbutton6_modif");

combobox2 = lookup_widget(window5_modif,"combobox2");

gtk_entry_set_text(GTK_ENTRY(entry_marque_modif),C.captMarque);
gtk_entry_set_text(GTK_ENTRY(entry_valmin_modif),C.captValMin);
gtk_entry_set_text(GTK_ENTRY(entry_valmax_modif),C.captValMax);

if(strcmp(C.captType,"Temperature")==0)
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(radiobutton_temp_moodif),TRUE);
else if(strcmp(C.captType,"Fumee")==0)
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(radiobutton_fum_modif),TRUE);
else if(strcmp(C.captType,"Debit")==0)
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(radiobutton_debit_modif),TRUE);

gtk_spin_button_set_value(GTK_SPIN_BUTTON(spinbutton4_modif),C.JourCap);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(spinbutton5_modif),C.MoisCap);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(spinbutton6_modif),C.AnneeCap);

if(strcmp(C.captZone,"bloc_A")==0)
gtk_combo_box_set_active(GTK_COMBO_BOX(combobox2),1);
else if(strcmp(C.captZone,"bloc_B")==0)
gtk_combo_box_set_active(GTK_COMBO_BOX(combobox2),2);
else if(strcmp(C.captZone,"bloc_C")==0)
gtk_combo_box_set_active(GTK_COMBO_BOX(combobox2),3);
else if(strcmp(C.captZone,"bloc_D")==0)
gtk_combo_box_set_active(GTK_COMBO_BOX(combobox2),4);
else if(strcmp(C.captZone,"bloc_E")==0)
gtk_combo_box_set_active(GTK_COMBO_BOX(combobox2),5);
else if(strcmp(C.captZone,"bloc_F")==0)
gtk_combo_box_set_active(GTK_COMBO_BOX(combobox2),6);
else if(strcmp(C.captZone,"bloc_J")==0)
gtk_combo_box_set_active(GTK_COMBO_BOX(combobox2),7);
else if(strcmp(C.captZone,"bloc_K")==0)
gtk_combo_box_set_active(GTK_COMBO_BOX(combobox2),8);*/
}


gtk_widget_destroy(window1_gestion);


gtk_widget_show(window5_modif);

}


void
on_button_ajout_gestion_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget* input;
GtkWidget* output;
GtkWidget* window1_gestion;
window1_gestion=lookup_widget(button,"window1_gestion");
gtk_widget_destroy(window1_gestion);
GtkWidget* window4_ajout;
window4_ajout=create_window4_ajout();
gtk_widget_show(window4_ajout);

}


void
on_button_supprimer_gestion_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{
char text[100];
GtkWidget *outputMsg;
GtkWidget *treeview1;
GtkTreeSelection *selection;
GtkTreeModel     *model;
GtkTreeIter iter;
GtkWidget* input;
GtkWidget* output;
GtkWidget* window1_gestion;
GtkWidget* window3_supp;
GtkWidget *entry2;
gchar *ID;

window1_gestion=lookup_widget(button,"window1_gestion");
window3_supp=create_window3_supp();
treeview1=lookup_widget(button,"treeview1");
entry2=lookup_widget(window3_supp,"entry2");

selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview1));
if (gtk_tree_selection_get_selected(selection, &model, &iter))
{  
gtk_tree_model_get (model,&iter, 0, &ID, -1);
gtk_entry_set_text(GTK_ENTRY(entry2),ID);


window1_gestion=lookup_widget(button,"window1_gestion");
gtk_widget_destroy(window1_gestion);


gtk_widget_show(window3_supp);
}
else{
strcpy (text,"veuillez selectionner le capteur à supprimer! ");
outputMsg=lookup_widget(button,("captselect"));
GdkColor color;
gdk_color_parse("red",&color);
gtk_widget_modify_fg(outputMsg,GTK_STATE_NORMAL,&color);
gtk_label_set_text(GTK_LABEL(outputMsg),text);
}
}


void
on_button_rechercher_gestion_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget* input;
GtkWidget* output;
GtkWidget* window1_gestion;
window1_gestion=lookup_widget(button,"window1_gestion");
gtk_widget_destroy(window1_gestion);
GtkWidget* window2_liste;
window2_liste=create_window2_liste();
gtk_widget_show(window2_liste);


}


void
on_button_retour_liste_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget* input;
GtkWidget* output;
GtkWidget* window2_liste;
GtkWidget *treeview1;

window2_liste=lookup_widget(button,"window2_liste");
gtk_widget_destroy(window2_liste);
GtkWidget* window1_gestion;
window1_gestion=create_window1_gestion();
gtk_widget_show(window1_gestion);
treeview1 = lookup_widget(window1_gestion,"treeview1");
afficher_capteur(treeview1);

}


void
on_button_rechercher_liste_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window2_liste;
	GtkWidget *treeview3;
	GtkWidget *entry1;


	window2_liste = lookup_widget(button,"window2_liste");
	treeview3 = lookup_widget(window2_liste,"treeview3");
	entry1 = lookup_widget(window2_liste,"entry1");

	rechercher_capteur(treeview3, gtk_entry_get_text(GTK_ENTRY(entry1)));
}


void
on_button_supprimer_supprission_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window3_supp;
	GtkWidget *entry2;
	GtkWidget *label_supp_message;

	window3_supp = lookup_widget(button,"window3_supp");
	entry2 = lookup_widget(window3_supp,"entry2");
	label_supp_message = lookup_widget(window3_supp,"label_supp_message");

	if(supp == 1){
		supprimer_capt(gtk_entry_get_text(GTK_ENTRY(entry2)));
		gtk_label_set_text(GTK_LABEL(label_supp_message),"Capteur supprimé avec succée!");
		gtk_widget_show(label_supp_message);
	}else if(supp == 0){
		gtk_label_set_text(GTK_LABEL(label_supp_message),"Cocher la confirmation de supprission!");
		gtk_widget_show(label_supp_message);
	}
}


void
on_button_retour_suppression_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget* input;
GtkWidget* output;
GtkWidget* window3_supp;
GtkWidget *treeview1;
window3_supp=lookup_widget(button,"window3_supp");
gtk_widget_destroy(window3_supp);
GtkWidget* window1_gestion;
window1_gestion=create_window1_gestion();
gtk_widget_show(window1_gestion);
treeview1 = lookup_widget(window1_gestion,"treeview1");
afficher_capteur(treeview1);
}


void
on_button_Affichier_supprission_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_affichier_ajout_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_ajouter_ajout_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{ 
   capteur C;
   GtkWidget *captID;
   GtkWidget *MarqueCapt;
   GtkWidget *TypeCapt;
   GtkWidget *JourCapt;
   GtkWidget *MoisCapt;
   GtkWidget *AnneeCapt;
   GtkWidget *ValeurMini;
   GtkWidget *ValeurMaxi;
   GtkWidget *ComboboxZoCov;
   GtkWidget *label_ajut_reussite; 

   GtkWidget *label_aj_erreur_id, *label_aj_erreur_marque, *label_aj_erreur_min, *label_aj_erreur_max;
   int ajout = 1;
   int verif;
   char text[200];
   int exists;

  
  
label_ajut_reussite = lookup_widget(button,"label_ajut_reussite");
label_aj_erreur_id = lookup_widget(button,"label_aj_erreur_id");
label_aj_erreur_marque = lookup_widget(button,"label_aj_erreur_marque");
label_aj_erreur_min = lookup_widget(button,"label_aj_erreur_min");
label_aj_erreur_max = lookup_widget(button,"label_aj_erreur_max");

gtk_widget_hide(label_aj_erreur_id);
gtk_widget_hide(label_aj_erreur_marque);
gtk_widget_hide(label_aj_erreur_min);
gtk_widget_hide(label_aj_erreur_max);

captID=lookup_widget(button,"entry_id_ajout");
strcpy(C.captID,gtk_entry_get_text(GTK_ENTRY(captID)));
MarqueCapt=lookup_widget(button,"entry_marque_ajout");
strcpy(C.captMarque,gtk_entry_get_text(GTK_ENTRY(MarqueCapt)));
/////////////////////////////////////////////////////////
JourCapt=lookup_widget(button,"spinbutton1_ajout");
MoisCapt=lookup_widget(button,"spinbutton2_ajout");
AnneeCapt=lookup_widget(button,"spinbutton3_ajout");
C.JourCap=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(JourCapt));
C.MoisCap=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(MoisCapt));
C.AnneeCap=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(AnneeCapt));
///////////////////////////////////////////////////////////
ValeurMini=lookup_widget(button,"entry_valmin_ajout");
ValeurMaxi=lookup_widget(button,"entry_valmax_ajout");
strcpy(C.captValMin,gtk_entry_get_text(GTK_ENTRY(ValeurMini)));
strcpy(C.captValMax,gtk_entry_get_text(GTK_ENTRY(ValeurMaxi)));
////////////////////////////////////////////////////////////
exists = exist_capteur(C.captID);
if(strcmp(C.captID,"")==0){
ajout = 0;
gtk_widget_show(label_aj_erreur_id);
}else if(exists == 1){
ajout = 0;
gtk_label_set_text(GTK_LABEL(label_aj_erreur_id),"Capteur deja existant avec ce ID!!");
gtk_widget_show(label_aj_erreur_id);
}
if(exists == 0){
if(strcmp(C.captMarque,"")==0){
ajout = 0;
gtk_widget_show(label_aj_erreur_marque);
}
if(strcmp(C.captValMin,"")==0){
ajout = 0;
gtk_widget_show(label_aj_erreur_min);
}
if(strcmp(C.captValMax,"")==0){
ajout = 0;
gtk_widget_show(label_aj_erreur_max);
}
}

if(ajout == 1){
ComboboxZoCov=lookup_widget(button,"combobox1");
strcpy(C.captZone,gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboboxZoCov)));
///////////////////////////////////////////////////////////////////////////
if(x==1)
{strcpy(C.captType,"Temperature");}
else
if(x==2)
{strcpy(C.captType,"Fumee");}
else
if(x==3)
{strcpy(C.captType,"Debit");}
ajouter_capt(C);
gtk_widget_show(label_ajut_reussite);
}
}
void
on_button_retour_ajout_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget* input;
GtkWidget* output;
GtkWidget* window4_ajout;
GtkWidget *treeview1;
window4_ajout=lookup_widget(button,"window4_ajout");
gtk_widget_destroy(window4_ajout);
GtkWidget* window1_gestion;
window1_gestion=create_window1_gestion();
gtk_widget_show(window1_gestion);
treeview1 = lookup_widget(window1_gestion,"treeview1");
afficher_capteur(treeview1);
}


void
on_button_affichier_modification_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_modifier_modification_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{capteur C;
   GtkWidget *captID;
   GtkWidget *MarqueCapt;
   GtkWidget *TypeCapt;
   GtkWidget *JourCapt;
   GtkWidget *MoisCapt;
   GtkWidget *AnneeCapt;
   GtkWidget *ValeurMini;
   GtkWidget *ValeurMaxi;
   GtkWidget *ComboboxZoCov ;
   
   //char text[200];

  
  
GtkWidget *window5_modif;

window5_modif=lookup_widget(button,"window5_modif");
captID=lookup_widget(button,"entry_id_modif");
MarqueCapt=lookup_widget(button,"entry_marque_modif");
strcpy(C.captID,gtk_entry_get_text(GTK_ENTRY(captID)));
strcpy(C.captMarque,gtk_entry_get_text(GTK_ENTRY(MarqueCapt)));
/////////////////////////////////////////////////////////
JourCapt=lookup_widget(button,"spinbutton4_modif");
MoisCapt=lookup_widget(button,"spinbutton5_modif");
AnneeCapt=lookup_widget(button,"spinbutton6_modif");
C.JourCap=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(JourCapt));
C.MoisCap=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(MoisCapt));
C.AnneeCap=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(AnneeCapt));
///////////////////////////////////////////////////////////
ValeurMini=lookup_widget(button,"entry_valmin_modif");
ValeurMaxi=lookup_widget(button,"entry_valmax_modif");
ComboboxZoCov=lookup_widget(button,"combobox2");
strcpy(C.captValMin,gtk_entry_get_text(GTK_ENTRY(ValeurMini)));
strcpy(C.captValMax,gtk_entry_get_text(GTK_ENTRY(ValeurMaxi)));
strcpy(C.captZone,gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboboxZoCov)));
///////////////////////////////////////////////////////////////////////////
if(x==1)
{strcpy(C.captType,"Temperature");}
else
if(x==2)
{strcpy(C.captType,"Fumee");}
else
if(x==3)
{strcpy(C.captType,"Debit");}

modifier_capt(C);
}


void
on_button_retour_modification_clicked  (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget* input;
GtkWidget* output;
GtkWidget* window5_modif;
GtkWidget *treeview1;
window5_modif=lookup_widget(button,"window5_modif");
gtk_widget_destroy(window5_modif);
GtkWidget* window1_gestion;
window1_gestion=create_window1_gestion();
gtk_widget_show(window1_gestion);
treeview1 = lookup_widget(window1_gestion,"treeview1");
afficher_capteur(treeview1);
}

void
on_radiobutton_debit_ajout_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
{
x=3;
}

}


void
on_radiobutton_temp_ajout_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
{
x=1;
}

}


void
on_radiobutton_temp_moodif_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
{
x=1;
}

}

void
on_radiobutton_fum_modif_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
{
x=2;
}

}


void
on_radiobutton_debit_modif_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
{
x=3;
}
}


void
on_radiobutton_fumee_ajout_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
{
x=2;
}
}


void
on_checkbutton_supp_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(togglebutton)){
		supp = 1;
	} else {
		supp = 0;
	}
}


void
on_button_hors_norme_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window6_hors_norme;
	GtkWidget *window1_gestion;
	GtkWidget *treeview4;
	GtkWidget *entry_temperature;
	GtkWidget *label_hors_norme_message;
	int temperature,exists;


	window1_gestion = lookup_widget(button,"window1_gestion");
	window6_hors_norme = create_window6_hors_norme();
	gtk_widget_show(window6_hors_norme);
	gtk_widget_hide(window1_gestion);
	treeview4 = lookup_widget(window6_hors_norme,"treeview4");
	entry_temperature = lookup_widget(window1_gestion,"entry_temperature");
	label_hors_norme_message = lookup_widget(window6_hors_norme,"label_hors_norme_message");
	//temperature = atoi(gtk_entry_get_text(GTK_ENTRY(entry_temperature)));
	exists = capteurdef(treeview4, temperature);
	if(exists==0){
		gtk_widget_show(label_hors_norme_message);
	}

	
}


void
on_button_retour_hors_norme_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget* input;
	GtkWidget* output;
	GtkWidget* window6_hors_norme;
	GtkWidget *treeview1;
	window6_hors_norme=lookup_widget(button,"window6_hors_norme");
	gtk_widget_destroy(window6_hors_norme);
	GtkWidget* window1_gestion;
	window1_gestion=create_window1_gestion();
	gtk_widget_show(window1_gestion);
	treeview1 = lookup_widget(window1_gestion,"treeview1");
	afficher_capteur(treeview1);
}

