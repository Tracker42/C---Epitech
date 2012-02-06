/**
 *
 *
 *
 */

#include <string>
#include <iostream>

#include "IEncryptionMethod.h"
#include "Cesar.h"
#include "OneTime.h"
#include "Encryption.h"

static void encryptString(IEncryptionMethod & encryptionMethod, std::string toEncrypt) {
	Encryption e(encryptionMethod, &IEncryptionMethod::encryptChar);
	encryptionMethod.reset();
	size_t len = toEncrypt.size();
	std::cout << toEncrypt << " : ";
	for(size_t i = 0; i < len; i++) {
		e(toEncrypt[i]);
	}
	std::cout << std::endl;
}

static void decryptString(IEncryptionMethod & encryptionMethod, std::string toDecrypt) {
	Encryption e(encryptionMethod, &IEncryptionMethod::decryptChar);
	encryptionMethod.reset();
	size_t len = toDecrypt.size();
	std::cout << toDecrypt << " : ";
	for(size_t i = 0; i < len; i++) {
		e(toDecrypt[i]);
	}
	std::cout << std::endl;
}

int main() {
	char encrypt[] = "Cryptage de Cesar";
	char decrypt[] = "Fvdvaipo pr Rujsk";
	Cesar cesar;

	int i;
	std::cout << encrypt << " : ";
	for (i = 0; encrypt[i]; i++) {
		cesar.encryptChar(encrypt[i]);
	}
	std::cout << std::endl;

	cesar.reset();

	std::cout << decrypt << " : ";
	for (i = 0; decrypt[i]; i++) {
		cesar.decryptChar(decrypt[i]);
	}
	std::cout << std::endl;

	std::string key("Hello");
	OneTime time(key);

	char decrypt2[] = "Jvjahhkp rl Npghv";
	std::cout << encrypt << " : ";
	for (i = 0; encrypt[i]; i++) {
		time.encryptChar(encrypt[i]);
	}
	std::cout << std::endl;

	time.reset();

	std::cout << decrypt << " : ";
	for (i = 0; decrypt2[i]; i++) {
		time.decryptChar(decrypt2[i]);
	}
	std::cout << std::endl;

	Cesar c;
	OneTime o("DedeATraversLesBrumes");
	OneTime t("TheCakeIsALie");

	Encryption::encryptString(c, "Je clair Luc, ne pas ? Ze woudrai un kekos !");
	Encryption::decryptString(c, "Mi isirb Xhq, ew jvo ? Zf zszjyir fz ytafk !");

	Encryption::encryptString(o, "De la musique et du bruit !");
	Encryption::decryptString(o, "Gi pa dunmhmp wu xg tuylx !");

	Encryption::encryptString(t, "Prend garde Lion, ne te trompes pas de voie !");
	Encryption::decryptString(t, "Iyipd kijdp Pbvr, xi le bvhttgs tik om ovmg !");

}
