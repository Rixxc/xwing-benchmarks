#include "include/api.h"

//
int xwing_naive_avx2_keypair_derand(unsigned char *pk, unsigned char *sk, const unsigned char *coins);
int xwing_naive_avx2_keypair(unsigned char *pk, unsigned char *sk);
int xwing_naive_avx2_enc_derand(unsigned char *ct, unsigned char *ss, const unsigned char *pk, const unsigned char *coins);
int xwing_naive_avx2_enc(unsigned char *ct, unsigned char *ss, const unsigned char *pk);
int xwing_naive_avx2_dec(uint8_t *ss, const uint8_t *ct, const uint8_t *sk);
//

int jade_kem_xwing_naive_amd64_c_avx2_keypair_derand(
  uint8_t *public_key,
  uint8_t *secret_key,
  const uint8_t *coins
)
{
  return xwing_naive_avx2_keypair_derand(public_key, secret_key, coins);
}

int jade_kem_xwing_naive_amd64_c_avx2_keypair(
  uint8_t *public_key,
  uint8_t *secret_key
)
{
  return xwing_naive_avx2_keypair(public_key, secret_key);
}

int jade_kem_xwing_naive_amd64_c_avx2_enc_derand(
  uint8_t *ciphertext,
  uint8_t *shared_secret,
  const uint8_t *public_key,
  const uint8_t *coins
)
{
  return xwing_naive_avx2_enc_derand(ciphertext, shared_secret, public_key, coins);
}

int jade_kem_xwing_naive_amd64_c_avx2_enc(
  uint8_t *ciphertext,
  uint8_t *shared_secret,
  const uint8_t *public_key
)
{
  return xwing_naive_avx2_enc(ciphertext, shared_secret, public_key);
}

int jade_kem_xwing_naive_amd64_c_avx2_dec(
  uint8_t *shared_secret,
  const uint8_t *ciphertext,
  const uint8_t *secret_key
)
{
  return xwing_naive_avx2_dec(shared_secret, ciphertext, secret_key);
}

