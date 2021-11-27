#include <linux/kernel.h>

asmlinkage long sys_hello(void)
{
	printk("hello Charlie\n");
	return 0;
}
