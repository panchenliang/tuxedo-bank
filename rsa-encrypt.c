/**//*
gcc -o rsa-encrypt rsa-encrypt.c -lcrypto
*/
#include <openssl/rsa.h>
#include <openssl/err.h>
#include <string.h>
#define MODULUS "C8FBCF21"
#define PUBLIC_EXPONENT RSA_F4
#define PRIVATE_EXPONENT "97B55D7D"

int main()
{
    int ret, flen;
    BIGNUM *bnn, *bne, *bnd;
    unsigned char *in = "abc";
    unsigned char *out;

    bnn = BN_new();
    bne = BN_new();
    bnd = BN_new();
    BN_hex2bn(&bnn, MODULUS);
    BN_set_word(bne, PUBLIC_EXPONENT);
    BN_hex2bn(&bnd, PRIVATE_EXPONENT);

    RSA *r = RSA_new();
    r->n = bnn;
    r->e = bne;
    r->d = bnd;
    RSA_print_fp(stdout, r, 5);

    flen = RSA_size(r);// - 11;
    out = (char *)malloc(flen);
    bzero(out, flen);
    //memset(out, 0, flen);

    printf("Begin encrypt... ");
    ret = RSA_private_encrypt(flen, in, out, r,  RSA_NO_PADDING);
    if (ret < 0)
    {
        printf("Encrypt failed! ");
        return 1;
    }

    printf("Size:%d ", ret);
    printf("ClearText:%s ", in);
    printf("CipherText(Hex):");
    int i;
    for (i=0; i<ret; i++)
    {
        printf("0x%02x, ", *out);
        out++;
    }
    printf(" ");

    //free(out);
    RSA_free(r);
    return 0;
}

