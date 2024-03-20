
external_crypto_kem_xwing_amd64_c_avx2.so:
	make -C ../../common/JoaoDiogoDuarte_xwing/src/crypto_kem/xwing/avx2/ libxwing_avx2.so
	cp ../../common/JoaoDiogoDuarte_xwing/src/crypto_kem/xwing/avx2/libxwing_avx2.so $@

clean:
	rm -f external_crypto_kem_xwing_amd64_c_avx2.so

distclean: clean
	make -C ../../common/JoaoDiogoDuarte_xwing/src/crypto_kem/xwing/avx2/ clean
