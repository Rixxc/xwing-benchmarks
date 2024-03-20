#!/bin/sh
cd bench/ && make DEFINE='-DRUNS=100 -DST_ON' FILTER=../src/crypto_kem/xwing/% && ./bin/crypto_kem/xwing/amd64/c-avx2/bench
