#include <gtk/gtk.h>


void
on_button_deconnexion_gestion_clicked  (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_modifier_gestion_clicked     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_ajout_gestion_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_supprimer_gestion_clicked    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_rechercher_gestion_clicked   (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_liste_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_rechercher_liste_clicked     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_supprimer_supprission_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_suppression_clicked   (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_Affichier_supprission_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_affichier_ajout_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_ajouter_ajout_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_ajout_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_affichier_modification_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_modifier_modification_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_modification_clicked  (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_gestion_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobutton_debit_ajout_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_temp_ajout_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_temp_moodif_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_fum_modif_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_debit_modif_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_fumee_ajout_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_treeview3_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_gestion_capteur_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_checkbutton_supp_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button_hors_norme_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_hors_norme_clicked    (GtkButton       *button,
                                        gpointer         user_data);
