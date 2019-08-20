# RSA
This is an exemplification of the RSA algorithm. I have developed it for learning purposes. It is insecure, because I used small prime numbers.

Author: ionutzmar@gmail.com

Insted of generating 2 prime numbers, this algorithm reads them from primeNumbers.prime. If more than 2 numbers are in that file, 2 arbitrarily numbers are chosen from that file.

To encrypt something with a public key, use encrypt(int toEncrypt, long long n, long long e);
To generate a private key, use rsaInitialise(). Then to get your public key call void getPublicKey(int*, int*).
To decrypt something with your private key, use decrypt(int toDecrypt).

Open test.c for an example.
