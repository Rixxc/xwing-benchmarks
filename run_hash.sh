cd bench/ &&  make DEFINE='-DRUNS=100 -DLOOPS=100 -DST_ON -DMININBYTES=134 -DMAXINBYTES=1222 -DINC_INBYTES=1088' FILTER=../src/crypto_hash/sha3-256/%  && ./bin/crypto_hash/sha3-256/amd64/c-avx2/bench
