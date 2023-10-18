#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    
    if (pid == 0) {
        // Код для дочернего процесса
        printf("Дочерний процесс\n");
        sleep(2);  // Имитация работы
        printf("Дочерний процесс завершен\n");
    } else if (pid > 0) {
        // Код для родительского процесса
        printf("Родительский процесс\n");
          // не Оожиданием завершения дочернего процесса
        printf("Родительский процесс завершен\n");
    } else {
        perror("Ошибка при создании дочернего процесса");
        return 1;
    }
    
    return 0;
}