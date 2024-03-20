
external_crypto_hash_sha3_256_amd64_c_avx2.so:
	make -C ../../common/Kyber_FIPS202/avx2/ sha3.so
	cp ../../common/Kyber_FIPS202/avx2/sha3.so $@

clean:
	rm -f external_crypto_hash_sha3_256_amd64_c_avx2.so

distclean: clean
	make -C ../../common/Kyber_FIPS202/avx2/ clean