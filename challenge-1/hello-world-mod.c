#include<linux/module.h>
#include<linux/kernel.h>

int init_module(void)
{
	printk("<1>Hello! This is my first kernel module\n");
	return 0;
}

void cleanup_module(void)
{
	printk("Goodbye!");
}
