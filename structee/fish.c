
#include <stdio.h>
#include "fish.h"

void catalog (fish f){
    printf ("%s- СЌС‚Рѕ %s СЃ %d Р·СѓР±Р°РјРё. EРјСѓ %d РіРѕРґР°\n",
        f.name, f.species, f.teeth, f.age);
}
void label(fish a){
  printf("РљР»РёС‡РєР°:%s\n Р Р°Р·РЅРѕРІРёРґРѕРЅРѕСЃС‚СЊ: %s\n%d РіРѕРґР°, %d Р·СѓР±РѕРІ \n", 
  a.name, a.species, a.age, a.teeth);
  printf("Р”Р°РІР°С‚СЊ %2.2f РєРі %s Рё СЂР°Р·СЂРµС‰Р°С‚СЊ %s РЅР° РїСЂРѕС‚СЏР¶РµРЅРёРё %2.2f С‡Р°СЃРѕРІ\n",
  a.care.food.weight, a.care.food.ingredients,
  a.care.exercise.description, a.care.exercise.duration
  );
}