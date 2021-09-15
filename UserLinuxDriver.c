/**
   line-by-line explanation of program.

   We included some headers files, the location of included header
   in our system at /root/include/linux , there we find all .h files.
   init.h file gets included to start init process, almost every linux
   device driver need to include this file.
   Writing device driver must include module.h file in our program, it
   contains functions related to this file module.
   MODULE_LICENSE indicates that we are using GPS free license, GPS means
   GNU Public License.


   printk( ... ) function has 8 log levels as:

   KERN_EMERG : Emergency purpose.
   KERN_ALERT : Attract to attention.
   KERN_ERR   : Display the error.
   KERN_CRIT  : Tell about critical serious.
   KERN_NOTICE: Notice a message.
   KERN_INFO  : Provide an information message.
   KERN_DEBUG : See lot messages.
*/


#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int __init driver_init( void )
{
   printk( KERN_ALERT "User linux driver started." );
   return 0;
}

static void __exit driver_exit( void )
{
   printk( KERN_ALERT "User linux driver finished." );
}

module_init( driver_init );
module_exit( driver_exit );

