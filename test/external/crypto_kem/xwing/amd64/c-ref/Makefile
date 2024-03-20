
external_crypto_kem_xwing_amd64_c_ref.so:
	make -C ../../common/JoaoDiogoDuarte_xwing/src/crypto_kem/xwing/ref/ libxwing_ref.so
	cp ../../common/JoaoDiogoDuarte_xwing/src/crypto_kem/xwing/ref/libxwing_ref.so $@

clean:
	rm -f external_crypto_kem_xwing_amd64_c_ref.so

distclean: clean
	make -C ../../common/JoaoDiogoDuarte_xwing/src/crypto_kem/xwing/ref/ clean
