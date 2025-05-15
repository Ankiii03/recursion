#include<stdio.h>
int main()
{
   struct pokemon
   {
    int hp;
    int speed;
    int attack;
    char tier;
   } pikachu,charizard,mewtwo;
  // struct pokemon pikachu; 
   pikachu.attack = 60;
   pikachu.hp =50;
   pikachu.speed = 100;
   pikachu.tier = 'A';

printf("%d\n",pikachu.attack);

 //  struct pokemon charizard;
   charizard.attack = 130;
   charizard.hp  = 80;
   charizard.speed = 80;
   charizard.tier = 'A';
   printf("%d",charizard.attack);
  // struct pokemon mewtwo;
  mewtwo.attack = 130;
   mewtwo.hp  = 80;
   mewtwo.speed = 80;
   mewtwo.tier = 'A';
   printf("%d",charizard.attack);
    return 0;
}
