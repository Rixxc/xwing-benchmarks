external_crypto_kem_xwing_naive_amd64_c_avx2.so:
	make -C ../../common/JoaoDiogoDuarte_xwing_naive/src/crypto_kem/xwing_naive/avx2/ libxwing_naive_avx2.so
	cp ../../common/JoaoDiogoDuarte_xwing_naive/src/crypto_kem/xwing_naive/avx2/libxwing_naive_avx2.so $@

clean:
	rm -f external_crypto_kem_xwing_naive_amd64_c_avx2.so

distclean: clean
	make -C ../../common/JoaoDiogoDuarte_xwing_naive/src/crypto_kem/xwing_naive/avx2/ clean