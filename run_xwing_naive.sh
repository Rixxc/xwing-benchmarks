cd bench/ && make -B DEFINE='-DRUNS=100 -DST_ON' FILTER=../src/crypto_kem/xwing_naive/% && ./bin/crypto_kem/xwing_naive/amd64/c-avx2/bench
