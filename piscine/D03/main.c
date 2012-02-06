
#include <stdlib.h>
#include <stdio.h>
#include "ex00/String.h"


int main() {

	String s;
	String s1;
	String s2;

	//00
	printf("\n==00==\n");
	StringInit(&s, "ahhahh");
	StringInit(&s, NULL);
	StringInit(&s1, "");
	StringInit(&s2, "PLOP\n");
	s2.aff(&s2);

	//01
	printf("\n==01==\n");
	s.assign_c(&s, "Ahhhhhh!!");
	s.aff(&s);
	s.assign_s(&s, &s2);
	s.aff(&s);

	//02
	printf("\n==02==\n");
	s2.append_c(&s2, "pouet\n");
	s2.aff(&s2);
	s2.append_c(&s2, NULL);
	s2.aff(&s2);

	//03
	printf("\n==03==\n");
	printf("=> %i : %c\n", 5, s2.at(&s2, 5));
	printf("=> %i : %c\n", 0, s2.at(&s2, 0));
	printf("=> %i : %i\n", 30, s2.at(&s2, 30));

	//04
	printf("\n==04==\n");
	s.aff(&s);
	s.clear(&s);
	s.aff(&s);
	s1.clear(&s1);

	//05
	printf("\n==05==\n");
	printf("%i =>", s.size(&s));
	s.aff(&s);
	printf("\n");
	printf("%i =>", s1.size(&s1));
	s1.aff(&s1);
	printf("\n");
	printf("%i =>", s2.size(&s2));
	s2.aff(&s2);
	printf("\n");

	//06
	printf("\n==06==\n");
	s2.assign_c(&s2, "plop");
	printf("%s => %i\n", "hello", s2.compare_c(&s2, "hello"));
	printf("%s => %i\n", "plop", s2.compare_c(&s2, "plop"));
	printf("%s => %i\n", "", s2.compare_c(&s2, ""));

	//07
	printf("\n==07==\n");
	s2.aff(&s2);
	printf(" - %i\n", s2.size(&s2));
	char str[100];
	printf(" => %s(%i:%i:%i)\n", str, 2, 2, (int) s2.copy(&s2, str, 2, 2));
	printf(" => %s(%i:%i:%i)\n", str, 30, 0, (int) s2.copy(&s2, str, 30, 0));
	printf(" => %s(%i:%i:%i)\n", str, 2, 2, (int) s2.copy(&s2, str, 2, 2));

	//08
	printf("\n==08==\n");
	printf("=> %s\n", s2.c_str(&s2));

	//09
	printf("\n==09==\n");
	printf("s = %i\n", s.empty(&s));
	printf("s2 = %i\n", s2.empty(&s2));

	//10
	printf("\n==10==\n");
	printf("=> o(0) : %i\n", s2.find_c(&s2, "o", 0));
	printf("=> o(3) : %i\n", s2.find_c(&s2, "o", 3));
	printf("=> p(0) : %i\n", s2.find_c(&s2, "p", 0));

	//11
	printf("\n==11==\n");
	s2.aff(&s2);
	printf("\n => 'hello' => \n");
	s2.insert_c(&s2, 2, "hello");
	s2.aff(&s2);
	printf("\n");
	s2.aff(&s2);
	printf("\n => '!ahhahh' => \n");
	s2.insert_c(&s2, 30, "!ahhahh");
	s2.aff(&s2);
	printf("\n");

	//12
	printf("\n==12==\n");
	s.assign_c(&s, "12");
	printf("=> %i\n", s.to_int(&s));
	s1.assign_c(&s1, "aze");
	printf("=> %i\n", s1.to_int(&s1));

	//13
	printf("\n==13==\n");

	//15
	printf("\n==15==\n");
	char *tab[4];
	tab[0] = "ahhhahh!";
	tab[1] = "plout";
	tab[2] = "pouet";
	tab[3] = NULL;
	s1.aff(&s1);
	printf("\n");
	s1.join_c(&s1, '_', (const char **) tab);
	s1.aff(&s1);
	printf("\n");

	s1.append_c(&s1, "rvnapenfpvoaenfpvjnaervnaeporvnarpjo");
	s1.append_c(&s1, "rvnapenfpvoaenfpvjnaervnaeporvnarpjo");
	s1.append_c(&s1, "rvnapenfpvoaenfpvjnaervnaeporvnarpjo");
	s1.append_c(&s1, "rvnapenfpvoaenfpvjnaervnaeporvnarpjX");

	//s1.append_s(&s1, &s1);
	s1.aff(&s1);
/*
	printf("*-*-*-*-*-\n");
	String *split = s1.split_s(&s1, 'j');
	int i = 0;
	while (split[i].str) {
		printf("=> %s\n", split[i++].str);
	}
	printf("\n");
*/
	String *sub = s1.substr(&s1, -1, -10);
	printf("----\n");
	sub->aff(sub);
	printf("\n----\n");

	StringDestroy(&s1);
	StringDestroy(&s2);
	StringDestroy(&s);

	return 0;
}
