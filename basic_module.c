#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Damir L");
static int __init example_init(void) {
 printk(KERN_INFO "Hello, Teacher!\n");
 return 0;
}
static void __exit example_exit(void) {
 printk(KERN_INFO "Goodbye!\n");
}
module_init(example_init);
module_exit(example_exit);
