obj-m += hello-world-module.o

KVERSION = $(shell uname -r)

all:
	make -C /usr/src/kernels/$(KVERSION) M=$(PWD) modules
clean:  
	make -C /usr/src/kernels/$(KVERSION) M=$(PWD) clean
