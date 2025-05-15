 #include<stdio.h>
 #include<string.h>
 #include<stdbool.h>
 int main()
    {
         typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15]; 
    } pokemon ;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability [10];
    } legendarypokemon ; 
    legendarypokemon mewtwo;
    typedef struct godpokemon {
        legendarypokemon legend;
        int specialattack;
    }godpokemon;
    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability,"Turn Anyone To Stone");
    arceus.legend.normal.attack =500;  



    strcpy(mewtwo.ability ,"pressure");
    mewtwo.normal.hp =150;
    mewtwo.normal.attack = 180;
    strcpy(mewtwo.normal.name,"mewtwo");
    mewtwo.normal.speed = 100;
    mewtwo.normal.tier = 'S';
   return  0 ;
    }
 
 
 
 
 
 