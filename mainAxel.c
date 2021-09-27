#include <stdio.h>
//Exercice 1
int main(void){
    int nombre1 = 0 ;
    int nombre2 = 0 ;

    printf ("Saisir les deux entiers") ;
    scanf ("%d %d , &nombre1, &nombre2");
    if nombre1<nombre2
        print ("%d, nombre2");
    else print ("%d, nombre1");
    return 0;

}
//Exercice 2
{
int nombre1 = 0;
int nombre2 = 0;

printf ("Saisir la longueur et la largeur");
scanf ("%d %d , &nombre1, &nombre2");

printf ("Le périmètre est %i(2*&nombre1+2*&nombre2)");
printf ("L'aire est %i(&nombre1*&nombre2)");
return 0;

}


//Exercice 3
{
const int constante = 3;
int nombre = 0;

printf ("Saisir l'entier");
scanf ("%d , &nombre");

if nombre%
constante = 0
if nombre>=10
printf ("Le nombre est un multiple de 3 et est supérieur ou égal à 10");
else printf ("Le nombre est un multiple de 3 et est inférieur à 10");
else
if nombre>=10 {
printf ("Le nombre n'est pas un multiple de 3 et est supérieur ou égal à 10");
else printf ("Le nombre n'est pas un multiple de 3 et est inférieur à 10");
}

return 0;
}

//Exercice 4
{
int age = 0;
int var1 = 0

printf ("Saisir l'âge");
scanf ("%d &age");
if age<27
printf ("Tapez 1 si vous êtes étudiant, 0 si vous ne l'êtes pas")
scanf ("%d , &var1")
if var1==1
printf("Le ticket coûte 6€")
else if (age>12) && (age<17)
printf ("Le ticket coûte 6€")
else if age>17
prinf("Le ticket coûte 9€");
if age<12
printf ("Le ticket coûte 4€");
if age>65
printf("Le ticket coûte 6€");
if (age>27) && (age<65)
printf ("Le ticket coûte 9€");
return 0

}


//Exercice 5
{
int coca = 1;
int fanta = 2;
int sprite = 3;
int chocolat = 10;
int cafe = 11;
int choix = 0;

printf("Choisissez votre boisson");
scanf("%d , &choix");
if

choix = coca {
    printf("Coca");
    else if choix = fanta
    printf("Fanta");
    else if choix = sprite
    printf("Sprite");
    else if choix = chocolat
    printf("Chocolat");
    else if choix = cafe
    printf("Cafe");
}

else printf("Erreur");

return 0

}


//Exercice 6

{float note1 = 0;
    float note2 = 0;
    float note3 = 0;

    printf("Saisissez les 3 notes");
    scanf("%f %f %f , &nombre1 &nombre2 &nombre3")

    while (note1<0) || (note1>20) {
printf ("Saisissez une 1ère valeur valide")
scanf("%f , &note1");
}
while (note2<0) || (note2>20) {
printf ("Saisissez une 2e valeur valide");
scanf("%f , &note2");
}
while (note3<0) || (note3>20) {
printf ("Saisissez une 3e valeur valide");
scanf("%f , &note3");
}
    printf("%f , &((note1+note2+note3)/3)");

    return 0
}


//Exercice 7
{
int nClasses = 0;
int nEleves = 0;
int somme = 0;
int i = 0;

printf ("Saisissez le nombre de classes");
scanf ("%d , &nClasses");

for (i;0;nClasses){
    printf("Saisissez l'effectif de la classe (\"%d , &i\")");
    scanf ("%d , &i");
    somme = somme+i;
}
printf ("%d , somme");

return 0

}

//Exercice 8

{int n = 0
printf ("Saisissez le nombre à vérifier");
scanf ("%d, &n");

while ( n % 2 != 0 || n % 7 != 0 ) {
printf ("Saisissez un autre nombre");
scanf ("%d, &n");

}
printf("Le nombre (\"%d , &n\") rentre dans les critères");

return 0
}

//Exercice 9
{
int nbrPierres = 0;
int i = 0;

printf("Saisir le nombre de pierres");
scanf ("%d, nbrPierres");

while (nbrPierres>0) {
    i+=1;
    i=i*i;
    nbrPierres=nbrPierres-i;
}
printf("La pyramide peut avoir (\"%d , &(i-1)\") étages");
return 0;
}


//Exercice 10

{
    int n = 0;
    int i = 0;
    int somme = 0;
    float moyenne = 0

    do {
        printf("Saisissez la valeur suivante");
        scanf("%d, &n");
        somme = somme + n;
        i+=1
    }while (n >= 0);
    moyenne = somme / i ;
    printf ("%f, &moyenne")

    return 0

}
