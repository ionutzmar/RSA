# RSA
This is my C implementation of the RSA algorithm

Author: ionutzmar@gmail.com

Insted of generating 2 prime numbers, this algorithm reads them from primeNumbers.prime. If more than 2 numbers are in that file, 2 arbitrarily numbers from that file are chosen.

To encrypt something with a public key, use encrypt(int toEncrypt, long long n, long long e);

To generate a private key, use rsaInitialise(). Then to get your public key call void getPublicKey(int*, int*).
To decrypt something with your private key, use decrypt(int toDecrypt).

Open test.c for seeing how to use it.
