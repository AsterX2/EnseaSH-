#include <unistd.h>
#include <string.h>

int main() {

    char welcomeMessage[] = "Bienvenue dans le Shell ENSEA.\nPour quitter, tapez 'exit'.\nenseash %";
    write(STDOUT_FILENO, welcomeMessage, sizeof(welcomeMessage) - 1);

    return 0;
}
