#include <locale.h>
#include <hfcalc.h> 

int main () {
    setlocale(LC_ALL, "Russian");
    display_calories(115.2, 11.3, 0.79);
    return 0;
}