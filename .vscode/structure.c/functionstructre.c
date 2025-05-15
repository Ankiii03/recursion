 #include<stdio.h>
 #include<string.h>
   typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15]; 
    } pokemon ;
void fun(pokemon p)
{
    printf("%d",p.hp);
    return;
}

 int main()
    {
       
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack =50;
    pikachu.speed = 100;
    change(pikachu);
    printf("%d",pikachu.hp);
    printf("%d",pikachu.attack);
    printf("%d",pikachu.speed);
   // fun(pikachu);
   return  0 ;
    } 
 