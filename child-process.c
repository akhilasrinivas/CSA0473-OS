#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
	int n;
    int pid = fork();
    if (pid == 0) {
        int p = fork();
        if (p == 0) {
            printf("Child process %d - Printing odd numbers.\n", getpid());
            for (n = 1; n <= 100; n += 2)
                printf("%d ", n);
        } else {
            int c = fork();
            if (c == 0) {
                printf("Child process %d - Printing even numbers.\n", getpid());
                for (n = 2; n <= 100; n += 2)
                    printf("%d ", n);
            } else {
                int d = fork();
                if (d == 0) {
                    printf("Child process %d - Printing multiples of 3.\n", getpid());
                    for (n = 3; n <= 100; n += 3)
                        printf("%d ", n);
                } else {
                    printf("Child process %d - Printing multiples of 5.\n", getpid());
                    for (n = 5; n <= 100; n += 5)
                        printf("%d ", n);
                }
            }
        }
    } else {
        wait(NULL);
        printf("Parent process %d exited.\n", getpid());
    }
    return 0;
}
