#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Définition de la structure:
typedef struct reservation{
    char nom[50];
    char prenom[50];
    char tele[13];
    int age;
    char statut[20];
    int reference;
    char date[11];
}RESERVATION;

//Déclaration des variables globales:
RESERVATION reservations[9000];
int compteur= 0;// celui ci calcule le nombre des reservations
int reference= 1;//celui ci est la reference unique

//Déclaration des fonctions:
void menu();             //fonction ok
int genererReference();  // fonction ok 
void ajouter();          //fonction ok
void afficher();         //fonction ok
void modifier();         //
void supprimer();
void rechercher();
void trier();
void statistiques();

//Définition de la fonction menu:
void menu(){
    int choix;
  do{
        //printer le menu a l'utilisateur
        printf("                            ===========================             \n");
        printf("                                       Menu                         \n");
        printf("                            ===========================           \n\n");

        printf("                             1. Ajouter une reservation             \n");
        printf("                             2. Afficher les reservations           \n");
        printf("                             3. Modifier une reservation            \n");
        printf("                             4. Supprimer une reservation           \n");
        printf("                             5. Rechercher une reservation          \n");
        printf("                             6. Trier les reservations par nom      \n");
        printf("                             7. Statistiques                        \n");
        printf("                             0. Quitter le programme              \n\n");
        
        printf("                           =============================          \n\n");
        
        printf("Entrez votre choix: ");
        scanf("%d",&choix);
        getchar();

        //switch 
        switch (choix){
            case 1:
                ajouter();
                break;
            case 2:
                afficher();
                break;
            case 3:
                modifier();
                break;
            case 4:
                supprimer();
                break;
            case 5:
                rechercher();
                break;
            case 6:
                trier();
                break;
            case 7:
                statistiques();
                break;
            case 0:
                exit(0);
            default:
                printf("Veuillez entrer une option valide.");
        }
    }while(choix!=0);
}

//Définition de la fonction genererreference:
int genererReference(){
    return reference++;
}

//Definition de la fonction ajouter:
void ajouter(){
    int choix;
    printf("Veuillez ajouter les informations suivantes:\n");
    //le nom
    printf("Entrez votre nom: ");
    fgets(reservations[compteur].nom,sizeof(reservations[compteur].nom),stdin);
    reservations[compteur].nom[strcspn(reservations[compteur].nom,"\n")]=0;

    //le prenom
    printf("ENtrez votre prenom: ");
    fgets(reservations[compteur].prenom,sizeof(reservations[compteur].prenom),stdin);
    reservations[compteur].prenom[strcspn(reservations[compteur].prenom,"\n")]=0;

    //le telephone
    printf("Entrez votre numero de telephone: ");
    fgets(reservations[compteur].tele,sizeof(reservations[compteur].tele),stdin);
    reservations[compteur].tele[strcspn(reservations[compteur].tele,"\n")]=0;

    //l'age
    printf("Entre votre age: ");
    scanf("%d",&reservations[compteur].age);

    //le status 
    // affichage d'un petit menu à l'utilisateur 
    printf("Entrez le status: \n");
    printf("1. Valide\n");
    printf("2. Reporte\n");
    printf("3. Annule\n");
    printf("4. Traite\n");
    printf("Veuillez choisir une option d'apres le menu suivant:\n");
    scanf("%d",&choix);
    getchar();

    /*la decision de l'utilisateur doit forcement etre entre 1 et 4 pour q'une reserevation soit ajoutée 
    sinon il y aura un erreur
    donc il ya une condition if else if le choix est entre 1 && 4 donc strcpy le choix vers la destination 
    sinon afficher un message que la reservation nest pas enregistre et lutilisateur doit entrer une option valide*/

    if (choix>=1 && choix<=4){
        switch (choix){
            case 1:
            strcpy(reservations[compteur].statut,"valide");
            break;
            case 2:
            strcpy(reservations[compteur].statut,"Reporte");
            break;
            case 3:
            strcpy(reservations[compteur].statut,"Annule");
            break;
            case 4:
            strcpy(reservations[compteur].statut,"Traite");
            break;
        }
        
    }else {
        printf("La reservation n'a pas ete ajoutee. Veuillez entrer une option valide.");
    }

    //la date à revoir 
    printf("Entrez une date suivant cette forme: (j/m/a)");
    fgets(reservations[compteur].date,sizeof(reservations[compteur].date),stdin);
    reservations[compteur].date[strcspn(reservations[compteur].date,"\n")]=0;

    //la generation d'une reference unique
    reservations[compteur].reference =genererReference();

    compteur++;
    printf("Votre reservation a ete bien ajouté.\n");
}

//Definition de la fonction afficher: 
void afficher(){
    printf("Il y'a %d reservations.\n",compteur);
    for(int i = 0;i<compteur;i++){
        printf("Nom: %s ;\n",reservations[i].nom);
        printf("Prenom: %s ;\n",reservations[i].prenom);
        printf("Age: %d ;\n",reservations[i].age);
        printf("Tele: %s ;\n",reservations[i].tele);
        printf("Statut: %s ;\n",reservations[i].statut);
        printf("Reference: %d ;\n",reservations[i].reference);
        printf("Date: %s ;\n",reservations[i].date);
    }

}

//Definition de la fonction rechercher
int rechercher(){
    int referenceRechercher;
    printf("Veuillez entrer la reference que vous souhaites rechercher:\n");
    scanf("%d",&referenceRechercher);
    if(referenceRechercher== reference){
        printf("La reference a ete trouvé.\n");
    }
}





























































