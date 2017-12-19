hax: hax.c
	gcc -o hax -fno-stack-protector -m32 -z execstack -no-pie -mpreferred-stack-boundary=2 hax.c
