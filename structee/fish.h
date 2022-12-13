#ifndef __FISH_H
#define __FISH_H

typedef struct exercise
{
  const char *description;
  float duration;
}exercise;
typedef struct meal{
  const char *ingredients;
  float weight;
}mael;
typedef struct preferences{
  struct meal food; 
  struct exercise exercise;
  
}preferences;

typedef struct fish
{
  const char *name;
  const char *species;
  int teeth;
  int age;
  struct  preferences care;
}fish;

void catalog(fish);
void label(fish);
#endif