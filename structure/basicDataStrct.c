#include <stdio.h>
int main (){
  struct hab{  // user defined daat type;
    int hp;
    int speed;  
    int attack;
    char tire;
  };

struct hab wah;
wah.attack = 20;  //in array , arr[0]=3;
wah.hp  = 10;
wah.speed =120;
wah .tire = 'A';

struct hab abd;
abd.attack = 30;
abd.hp     = 25;
abd.speed  =32;
abd.tire  = 'B';

struct hab dul;
    dul.attack = 12;
    dul.hp     = 35;
    dul.speed  = 45;
    dul.tire = 'C';



    return 0;
}