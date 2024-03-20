#include "include/api.h"
#include <stddef.h>

int sha3_256(uint8_t *h, const uint8_t *in, size_t inlen);

int jade_hash_sha3_256_amd64_c_avx2(uint8_t *hash, const uint8_t *input,
                                    uint64_t input_length) {
  return sha3_256(hash, input, input_length);
}
