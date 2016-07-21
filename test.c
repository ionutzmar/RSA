#include <stdio.h>
#include <stdlib.h>
#include "rsa.h"

int main(int argc, char const *argv[]) {
    rsaInitialise();
    int n, e;
    getPublicKey(&n, &e);
    printf("My public key (n, e) is %d, %d\n\n", n, e);
    for(int i = 140; i < 150; i++)
    {
        int data = i;
        int encrypted = encrypt(data, n, e);
        printf("%d encrypted with my public key is %d\n", data, encrypted);
        printf("%d decrypted with my private key is %d\n\n", encrypted, decrypt(encrypted));
    }
    return 0;
}
