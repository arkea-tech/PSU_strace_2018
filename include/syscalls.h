/*
** EPITECH PROJECT, 2019
** project_name STRACE
** File description:
** Syscalls array
*/

#ifndef SYSCALLS_H_
#define SYSCALLS_H_

typedef struct yscalls {
    char *name;
    int nb_params;
    char *params[6];
    char *ret_type;
} t_syscalls;

static const t_syscalls TAB_SYSCALLS[] = {
    {"read", 3, {"int", "char *", "size_t"}, "ssize_t"},
    {"write", 3, {"int", "char *", "size_t"}, "ssize_t"},
    {"open", 2, {"char *", "int"}, "int"},
    {"close", 1, {"int"}, "int"},
    {"stat", 2, {"char *", "struct stat *"}, "int"},
    {"fstat", 2, {"int", "struct stat *"}, "int"},
    {"lstat", 2, {"char *", "struct stat *"}, "int"},
    {"poll", 3, {"struct pollfd *", "nfds_t", "int"}, "int"},
    {"lseek", 3, {"int", "off_t", "int"}, "off_t"},
    {"mmap", 6, {"void *", "size_t", "int", "int", "int", "off_t"}, "void *"},
    {"mprotect", 3, {"void *", "size_t", "int"}, "int"},
    {"munmap", 2, {"void *", "size_t"}, "int"},
    {"brk", 1, {"int"}, "void *"},
    {
        "sigaction", 3,
        {"int", "struct sigaction *", "struct sigaction *"}, "int"
    },
    {"sigprocmask", 3, {"int", "sigset_t *", "sigset_t *"}, "int"},
    {"sigreturn", 1, {"unsigned long"}, "int"},
    {"ioctl", 2, {"int", "int"}, "int"},
    {"pread64", 4, {"int", "void *", "size_t", "off_t"}, "ssize_t"},
    {"pwrite64", 4, {"int", "void *", "size_t", "off_t"}, "ssize_t"},
    {"readv", 3, {"int", "struct  iovec *", "int"}, "ssize_t"},
    {"writev", 3, {"int", "struct  iovec *", "int"}, "ssize_t"},
    {"access", 2, {"char *", "int"}, "int"},
    {"pipe", 1, {"int[2]"}, "int"},
    {
        "select", 5,
        {"int", "fd_set *", "fd_set *", "fd_set *", "stuct timeval *"}, "int"
    },
    {"sched_yield", 0, {"void"}, "int"},
    {"mremap", 4, {"void *", "size_t", "size_t", "int"}, "void *"},
    {"msync", 3, {"void *", "size_t", "int"}, "int"},
    {"mincore", 3, {"void *", "size_t", "unsigned char *"}, "int"},
    {"madvise", 3, {"void *", "size_t", "int"}, "int"},
    {"shmget", 3, {"key_t", "size_t", "int"}, "int"},
    {"shmat", 3, {"int", "void *", "int"}, "void *"},
    {"shmctl", 3, {"int", "int", "struct shmid_ds *"}, "int"},
    {"dup", 1, {"int"}, "int"},
    {"dup2", 2, {"int", "int"}, "int"},
    {"pause", 0, {"void"}, "int"},
    {"nanosleep", 2, {"struct timespec *", "struct timespec *"}, "int"},
    {"getitimer", 2, {"int", "struct itimervalq *"}, "int"},
    {"alarm", 1, {"unsigned int"}, "unsigned int"},
    {
        "setitimer", 3,
        {"int", "struct itimerval *", "struct itimerval *"}, "int"
    },
    {"getpid", 0, {"void""void"}, "pid_t"},
    {"sendfile", 4, {"int", "int", "off_t *", "size_t"}, "ssize_t"},
    {"socket", 3, {"int", "int", "int"}, "int"},
    {"connect", 3, {"int", "struct sockaddr *", "socklen_t"}, "int"},
    {"accept", 3, {"int", "struct sockaddr *", "socklen_t"}, "int"},
    {
        "sendto", 6,
        {
            "int", "void *", "size_t", "int",
            "struct sockaddr *", "socklen_t"
        }, "ssize_t"
    },
    {
        "recvfrom", 6,
        {"int", "void *", "size_t", "int", "struct sockaddr *", "socklen_t *"},
        "ssize_t"
    },
    {"sendmsg", 3, {"int", "struct msghdr *", "int"}, "ssize_t"},
    {"recvmsg", 3, {"int", "struct msghdr *", "int"}, "ssize_t"},
    {"shutdown", 2, {"int", "int"}, "int"},
    {"bind", 3, {"int", "struct sockaddr *", "socklen_t"}, "int"},
    {"listen", 2, {"int", "int"}, "int"},
    {"getsockname", 3, {"int", "struct sockaddr *", "socklen_t *"}, "int"},
    {"getpeername", 3, {"int", "struct sockaddr *", "socklen_t *"}, "int"},
    {"socketpair", 4, {"int", "int", "int", "int[2]"}, "int"},
    {
        "setsockopt", 5, {"int", "int", "int", "void *", "socklen_t"},
        "int"
    },
    {"getsockopt", 5, {"int", "int", "int", "void *", "socklen_t"}, "int"},
    {"clone", 2, {"int *", "struct stat *"}, "int"},
    {"fork", 0, {"void"}, "pid_t"},
    {"vfork", 0, {"void"}, "pid_t"},
    {"execve", 3, {"char *", "char **", "char **"}, "int"},
    {"exit", 1, {"int"}, "void"},
    {"wait4", 4, {"pid_t", "int *", "int", "struct rusage *"}, "pid_t"},
    {"kill", 2, {"pid_t", "int"}, "int"},
    {"uname", 1, {"struct utsname *"}, "int"},
    {"semget", 3, {"key_t", "int", "int"}, "int"},
    {"semop", 3, {"int", "struct sembuf *", "unsigned int"}, "int"},
    {"semctl", 3, {"int", "int", "int"}, "int"},
    {"shmdt", 1, {"void *"}, "int"},
    {"msgget", 2, {"key_t", "int"}, "int"},
    {"msgsnd", 4, {"int", "void *", "size_t", "int"}, "int"},
    {"msgrcv", 5, {"int", "void *", "size_t", "long", "int"}, "ssize_t"},
    {"msgctl", 3, {"int", "int", "struct msqid_ds *"}, "int"},
    {"fcntl", 2, {"int", "int"}, "int"},
    {"flock", 2, {"int", "int"}, "int"},
    {"fsync", 1, {"int"}, "int"},
    {"fdatasync", 1, {"int"}, "int"},
    {"truncate", 2, {"char *", "off_t"}, "int"},
    {"ftruncate", 2, {"int", "off_t"}, "int"},
    {
        "getdents", 3,
        {"unsigned int", "struct linux_dirent *", "unsigned int"}, "int"
    },
    {"getcwd", 2, {"char *", "unsigned long"}, "long"},
    {"chdir", 1, {"char *"}, "int"},
    {"fchdir", 1, {"int"}, "int"},
    {"rename", 2, {"char *", "char *"}, "int"},
    {"mkdir", 2, {"char *", "mode_t"}, "int"},
    {"rmdir", 1, {"char *"}, "int"},
    {"creat", 2, {"char *", "mode_t"}, "int"},
    {"link", 2, {"char *", "char *"}, "int"},
    {"unlink", 1, {"char *"}, "int"},
    {"symlink", 2, {"char *", "char *"}, "int"},
    {"readlink", 3, {"char *", "char *", "size_t"}, "ssize_t"},
    {"chmod", 2, {"char *", "mode_t"}, "int"},
    {"fchmod", 2, {"int", "mode_t"}, "int"},
    {"chown", 3, {"char *", "uid_t", "gid_t"}, "int"},
    {"fchown", 3, {"int", "uid_t", "gid_t"}, "int"},
    {"lchown", 3, {"char *", "uid_t", "gid_t"}, "int"},
    {"umask", 1, {"mode_t"}, "mode_t"},
    {"gettimeofday", 2, {"struct timeval *", "struct timezone *"}, "int"},
    {"getrlimit", 2, {"int", "struct rlimit *"}, "int"},
    {"getrusage", 2, {"int", "struct rusage *"}, "int"},
    {"sysinfo", 1, {"struct sysinfo *"}, "int"},
    { "times", 1, {"struct tms *"}, "clock_t"},
    { "ptrace", 4, {"int", "pid_t", "void *", "void *"}, "long"},
    {"getuid", 0, {"void"}, "uid_t"},
    {"syslog", 3, {"int", "char *", "int"}, "int"},
    {"getgid", 0, {"void"}, "gid_t"},
    {"setuid", 1, {"uid_t"}, "int"},
    {"setgid", 1, {"gid_t"}, "int"},
    {"geteuid", 0, {"void"}, "uid_t"},
    {"getegid", 0, {"void"}, "gid_t"},
    {"setpgid", 2, {"pid_t", "pid_t"}, "int"},
    {"getppid", 0, {"void"}, "pid_t"},
    {"getpgrp", 0, {"void"}, "pid_t"},
    {"setsid", 0, {"void"}, "pid_t"},
    {"setreuid", 2, {"uid_t", "uid_t"}, "int"},
    {"setregid", 2, {"gid_t", "gid_t"}, "int"},
    {"getgroups", 2, {"int", "gid_t[]"}, "int"},
    {"setgroups", 2, {"size_t", "gid_t *"}, "int"},
    {"setresuid", 3, {"uid_t", "uid_t", "uid_t"}, "int"},
    {"getresuid", 3, {"uid_t *", "uid_t *", "uid_t *"}, "clock_t"},
    {"setresgid", 3, {"gid_t", "gid_t", "gid_t"}, "int"},
    {"getresgid", 3, {"gid_t *", "gid_t *", "gid_t *"}, "int"},
    {"getpgid", 1, {"pid_t"}, "pid_t"},
    {"setfsuid", 1, {"uid_t"}, "int"},
    {"setfsgid", 1, {"uid_t"}, "int"},
    {"getsid", 1, {"pid_t"}, "pid_t"},
    {"capget", 2, {"cap_user_header_t", "cap_huser_data_t"}, "int"},
    {"capset", 2, {"cap_user_header_t", "cap_huser_data_t"}, "int"},
    {"sigpending", 1, {"sigset_t *"}, "int"},
    {
        "sigtimedwait", 3,
        {"sigset_t *", "siginfo_t *", "struct timespec *"}, "int"
    },
    {"sys_rt_sigqueueinfo", 3, {"int", "int", "siginfo_t *"}, "long"},
    {"sigsuspend", 1, {"sigset_t *"}, "int"},
    {"sigaltstack", 2, {"stack_t *", "stack_t *"}, "int"},
    {"utime", 2, {"char *", "struct utimbuf *"}, "int"},
    {"mknod", 3, {"char *", "mode_t", "dev_t"}, "int"},
    {"uselib", 1, {"char *"}, "int"},
    {"personality", 1, {"unsigned long"}, "int"},
    {"ustat", 2, {"dev_t", "struct ustat *"}, "int"},
    {"statfs", 2, {"char *", "struct statfs *"}, "int"},
    {"fstatfs", 2, {"int", "struct statfs *"}, "int"},
    {"sysfs", 3, {"struct tms *"}, "clock_t"},
    {"getpriority", 2, {"int", "int"}, "int"},
    {"setpriority", 3, {"int", "int", "int"}, "int"},
    {"sched_setparam", 2, {"pid_t", "struct sched_param *"}, "int"},
    {"sched_getparam", 2, {"pid_t", "struct sched_param *"}, "int"},
    {
        "sched_setscheduler", 3,
        {"pid_t", "int", "struct sched_param *"}, "int"
    },
    {"sched_getscheduler", 1, {"pid_t"}, "int"},
    {"sched_get_priority_max", 1, {"int"}, "int"},
    {"sched_get_priority_min", 1, {"int"}, "int"},
    {"sched_rr_get_interval", 2, {"pid_t", "struct timespec *"}, "int"},
    {"mlock", 2, {"void *", "size_t"}, "int"},
    {"munlock", 2, {"void *", "size_t"}, "int"},
    {"mlockall", 1, {"int"}, "int"},
    {"munlockall", 0, {"void"}, "int"},
    {"vhangup", 0, {"void"}, "int"},
    {"modify_ldt", 3, {"int", "void *", "unsigned long"}, "int"},
    {"pivot_root", 2, {"char *", "char *"}, "int"},
    {"_sysctl", 1, {"struct __sysctl_args *"}, "int"},
    {
        "prctl", 5,
        {"int", "unsigned long", "unsigned long", "unsigned long", "unsigned long"},
        "int"
    },
    {"arch_prctl", 2, {"int", "unsigned long *"}, "int"},
    {"adjtimex", 1, {"struct timex *"}, "int"},
    {"setrlimit", 2, {"int", "struct rlimit *"}, "int"},
    {"chroot", 1, {"char *"}, "int"},
    {"sync", 0, {"void"}, "void"},
    {"acct", 1, {"char *"}, "int"},
    {"settimeofday", 2, {"struct timeval *", "struct timezone *"}, "int"},
    {
        "mount", 5,
        {
            "char *", "char *", "char *",
            "unsigned long", "void *"
        }, "int"
    },
    {"umount2", 2, {"char *", "int"}, "int"},
    {"swapon", 2, {"char *", "int"}, "int"},
    {"swapoff", 1, {"char *"}, "int"},
    {"reboot", 4, {"int", "int", "int", "void *"}, "int"},
    {"sethostname", 2, {"char *", "size_t"}, "int"},
    {"setdomainname", 2, {"char *", "size_t"}, "int"},
    {"iopl", 1, {"int"}, "int"},
    {"ioperm", 3, {"unsigned long", "unsigned long", "int"}, "int"},
    {"create_module", 2, {"char *", "size_t"}, "caddr_t"},
    {"init_module", 3, {"void *", "unsigned long", "char *"}, "int"},
    {"delete_module", 2, {"char *", "int"}, "int"},
    {"get_kernel_syms", 1, {"struct kernel_sym *"}, "int"},
    {
        "query_module", 5,
        {"char *", "int", "void *", "size_t", "size_t"}, "int"
    },
    {"quotactl", 4, {"int", "char *", "int", "caddr_t"}, "int"},
    {
        "nfsservctl", 3,
        {"int", "struct nfsctl_arg *", "union nfsctl_res *"}, "int"
    },
    {"getpmsg", 1, {"struct tms *"}, "clock_t"},
    {"putpmsg", 1, {"struct tms *"}, "clock_t"},
    {"afs_syscall", 1, {"struct tms *"}, "clock_t"},
    {"tuxcall", 1, {"struct tms *"}, "clock_t"},
    {"security", 1, {"struct tms *"}, "clock_t"},
    {"gettid", 0, {"void"}, "pid_t"},
    {"readahead", 3, {"int", "off64_t", "size_t"}, "ssize_t"},
    {
        "setxattr", 5,
        {"char *", "char *", "void *", "size_t", "int"}, "int"
    },
    {
        "lsetxattr", 5,
        {"char *", "char *", "void *", "size_t", "int"}, "int"
    },
    {
        "fsetxattr", 5,
        {"int", "char *", "void *", "size_t", "int"}, "int"
    },
    {
        "getxattr", 4,
        {"char *", "char *", "void *", "size_t"}, "ssize_t"
    },
    {
        "lgetxattr", 4,
        {"char *", "char *", "void *", "size_t"}, "ssize_t"
    },
    {"fgetxattr", 4, {"int", "char *", "void *", "size_t"}, "ssize_t"},
    {"listxattr", 3, {"char *", "char *", "size_t"}, "ssize_t"},
    {"llistxattr", 3, {"char *", "char *", "size_t"}, "ssize_t"},
    {"flistxattr", 3, {"int", "char *", "size_t"}, "ssize_t"},
    {"removexattr", 2, {"char *", "char *"}, "int"},
    {"lremovexattr", 2, {"char *", "char *"}, "int"},
    {"fremovexattr", 2, {"int", "char *"}, "int"},
    {"tkill", 2, {"int", "int"}, "int"},
    {"time", 1, {"time_t"}, "time_t"},
    {
        "futex", 6,
        {"int *", "int", "int", "struct timespec *", "int *", "int"}, "int"
    },
    {"sched_setaffinity", 3, {"pid_t", "size_t", "cpu_set_t *"}, "int"},
    {"sched_getaffinity", 3, {"pid_t", "size_t", "cpu_set_t *"}, "int"},
    {"set_thread_area", 1, {"struct user_desc *"}, "int"},
    {"io_setup", 2, {"unsigned int", "aio_context_t *"}, "int"},
    {"io_destroy", 1, {"aio_context_t"}, "int"},
    {
        "io_getevents", 5,
        {"aio_context_t", "long", "long", "struct io_event *", "struct timespec *"},
        "int"
    },
    {"io_submit", 3, {"aio_context_t", "long", "struct iocb **"}, "int"},
    {
        "io_cancel", 3,
        {"aio_context_t", "struct iocb *", "struct io_event *"}, "int"
    },
    {"get_thread_area", 1, {"struct user_desc *"}, "int"},
    {"lookup_dcookie", 3, {"u64", "char *", "size_t"}, "int"},
    {"epoll_create", 1, {"int"}, "int"},
    {"epoll_ctl_old", 0, {"void"}, "unimplemented"},
    {"epoll_wait_old", 0, {"void"}, "unimplemented"},
    {
        "remap_file_pages", 5,
        {"void *", "size_t", "int", "ssize_t", "int"}, "int"
    },
    {
        "getdents64", 3,
        {"unsigned int", "struct linux_dirent *", "unsigned int"}, "int"
    },
    {"set_tid_address", 1, {"int *"}, "long"},
    {"restart_syscall", 2, {"int", "int"}, "int"},
    {
        "semtimedop", 4,
        {"int", "struct sembuf *", "unsigned int", "struct timespec *"}, "int"
    },
    {"fadvise64", 4, {"int", "off_t", "off_t", "int"}, "int"},
    {
        "timer_create", 3,
        {"clockid_t", "struct sigevent *", "time_t *"}, "int"
    },
    {
        "timer_settime", 4,
        {"timer_t", "int", "struct itimerspec *", "struct itimerspec *"},
        "int"
    },
    {"timer_gettime", 2, {"timer_t", "struct itimerspec *"}, "int"},
    {"timer_getoverrun", 1, {"timer_t"}, "int"},
    {"timer_delete", 1, {"timer_t"}, "int"},
    {"clock_settime", 2, {"clockid_t", "struct timespec *"}, "int"},
    {"clock_gettime", 2, {"clockid_t", "struct timespec *"}, "int"},
    {"clock_getres", 2, {"clockid_t", "struct timespec *"}, "int"},
    {
        "clock_nanosleep", 4,
        {"clockid_t", "int", "struct timespec *", "struct timespec *"}, "int"
    },
    {"exit_group", 1, {"int"}, "int"},
    {"epoll_wait", 4, {"int", "struct epoll_event *", "int", "int"}, "int"},
    {"epoll_ctl", 4, {"int", "int", "int", "struct epoll_event *"}, "int"},
    {"tgkill", 3, {"int", "int", "int"}, "int"},
    {"utimes", 2, {"char *", "struct timeval *"}, "int"},
    {"vserver", 2, {"int", "int"}, "int"},
    {
        "mbind", 6,
        {
            "void *", "unsigned long", "int", "unsigned long *",
            "unsigned long", "unsigned int"
        }, "int"
    },
    {"set_mempolicy", 3, {"int", "unsigned long *", "unsigned long"}, "int"},
    {
        "get_mempolicy", 5,
        {
            "int *", "unsigned long *", "unsigned long",
            "unsigned long", "unsigned long"
        }, "int"
    },
    {"mq_open", 2, {"int", "int"}, "int"},
    {"mq_unlink", 1, {"char *"}, "int"},
    {
        "mq_timedsend", 5,
        {"mqd_t", "char *", "size_t", "unsigned int", "struct timespec *"},
        "int"
    },
    {
        "mq_timedreceive", 5,
        {"mqd_t", "char *", "size_t", "unsigned int", "struct timespec *"}, "int"
    },
    {"mq_notify", 2, {"mqd_t", "struct sigevent *"}, "int"},
    {
        "mq_getsetattr", 3,
        {"mqd_t", "struct mq_attr *", "struct mq_attr *"}, "int"
    },
    {
        "kexec_load", 4,
        {
            "unsigned long", "unsigned long",
            "struct kexec_segment *", "unsigned long"
        }, "int"
    },
    {"waitid", 4, {"idtype_t", "id_t", "siginfo_t", "int"}, "int"},
    {
        "add_key", 5,
        {"char *", "char *", "void *", "size_t", "key_serial_t"},
        "key_serial_t"
    },
    {
        "request_key", 4,
        {"char *", "char *", "char *", "key_serial_t"},
        "key_serial_t"
    },
    {"keyctl", 1, {"int"}, "int"},
    {"ioprio_set", 3, {"int", "int", "int"}, "int"},
    {"ioprio_get", 2, {"int", "int"}, "int"},
    {"inotify_init", 0, {"void"}, "int"},
    {"inotify_add_watch", 3, {"int", "char *", "uint32_t"}, "int"},
    {"inotify_rm_watch", 2, {"int", "int"}, "int"},
    {
        "migrate_pages", 4,
        {"int", "unsigned long", "unsigned long *", "unsigned long *"},
        "long"
    },
    {"openat", 3, {"int", "char *", "int"}, "int"},
    {"mkdirat", 3, {"int", "char *", "mode_t"}, "int"},
    {"mknodat", 4, {"int", "char *", "mode_t", "dev_t"}, "int"},
    {"fchownat", 5, {"int", "char *", "uid_t", "gid_t", "int"}, "int"},
    {
        "futimesat", 3,
        {"int", "char *", "struct timeval *"}, "int"
    },
    {"fstatat", 4, {"int", "char *", "struct stat *", "int"}, "int"},
    {"unlinkat", 3, {"int", "char *", "int"}, "int"},
    {"renameat", 4, {"int", "char *", "int", "char *"}, "int"},
    {
        "linkat", 5,
        {"int", "char *", "int", "char *", "int"}, "int"
    },
    {"symlinkat", 3, {"char *", "int", "char *"}, "int"},
    {"readlinkat", 4, {"int", "char *", "char *", "size_t"}, "int"},
    {"fchmodat", 4, {"int", "char *", "mode_t", "int"}, "int"},
    {"faccessat", 4, {"int", "char *", "int", "int"}, "int"},
    {
        "pselect6", 6,
        {
            "int", "fd_set *", "fd_set *", "fd_set *",
            "struct timespec *", "sigset_t"
        }, "int"
    },
    {
        "ppoll", 4,
        {
            "struct pollfd *", "nfds_t",
            "struct timespec *", "sigset_t *"
        }, "int"
    },
    {"unshare", 1, {"int"}, "int"},
    {"set_robust_list", 2, {"struct robust_list_head *", "size_t"}, "long"},
    {
        "get_robust_list", 5,
        {"int", "char *", "int", "char *", "int"}, "int"
    },
    {
        "splice", 6,
        {"int", "loff_t *", "int", "loff_t *", "size_t", "unsigned int"}, "ssize_t"
    },
    {"tee", 4, {"int", "int", "size_t", "unsigned int"}, "ssize_t"},
    {
        "sync_file_range", 4,
        {"int", "off64_t", "off64_t", "unsigned int"}, "int"
    },
    {
        "vmsplice", 4,
        {"int", "struct iovec *", "unsigned long", "unsigned int"}, "ssize_t"
    },
    {
        "move_pages", 6,
        {"int", "unsigned long", "void **", "int *", "int *", "int"}, "long"
    },
    {
        "utimensat", 4,
        {"int", "char *", "struct timespec[]", "int"}, "int"
    },
    {
        "epoll_pwait", 4,
        {"int", "struct epoll_event *", "int", "int", "sigset_t"}, "int"
    },
    {"signalfd", 3, {"int", "sigset_t *", "int"}, "int"},
    {"timerfd_create", 2, {"int", "int"}, "int"},
    {"eventfd", 2, {"unsigned int", "int"}, "int"},
    {"fallocate", 4, {"int", "int", "off_t", "off_t"}, "int"},
    {
        "timerfd_settime", 4,
        {"int", "int", "struct itimerspec *", "struct itimerspec *"}, "int"
    },
    {"timerfd_gettime", 2, {"int", "struct itimerspec *"}, "int"},
    {"accept4", 4, {"int", "struct sockaddr *", "socklen_t", "int"}, "int"},
    {"signalfd4", 3, {"int", "sigset_t *", "int"}, "int"},
    {
        "eventfd2", 4,
        {"int", "char *", "struct timespec *", "int"}, "int"
    },
    {"epoll_create1", 1, {"int"}, "int"},
    {"dup2", 2, {"int", "int"}, "int"},
    {"pipe2", 2, {"int[2]", "int"}, "int"},
    {"inotify_init1", 1, {"int"}, "int"},
    {
        "preadv", 4,
        {"int", "struct iovec *", "int", "off_t"}, "ssize_t"
    },
    {"pwritev", 3, {"int", "struct iovec *", "int"}, "ssize_t"},
    {"sys_rt_tgsigqueueinfo", 3, {"int", "int", "siginfo_t *"}, "long"},
    {
        "perf_event_open", 4,
        {"int", "struct sockaddr *", "socklen_t", "int"}, "int"
    },
    {
        "recvmmsg", 5,
        {
            "int", "struct mmsghdr *", "unsigned int",
            "unsigned int", "struct timespec *"
        }, "int"
    },
    {
        "fanotify_init", 4,
        {"int", "struct sockaddr *", "socklen_t", "int"}, "int"
    },
    {
        "fanotify_init", 4,
        {"int", "struct sockaddr *", "socklen_t", "int"}, "int"
    },
    {
        "prlimit", 4,
        {"pid_t", "int", "struct rlimit *", "struct rlimit *"}, "int"
    },
    {"name_to_handle_at", 1, {"int"}, "int"},
    {
        "open_to_handle_at", 4,
        {"int", "struct iovec *", "int", "off_t"}, "ssize_t"
    },
    {"clock_adjtime", 3, {"int", "struct iovec *", "int"}, "ssize_t"},
    {"syncfs", 1, {"int"}, "int"},
    {
        "sendmmsg", 4,
        {"int", "struct mmsghdr *", "unsigned int", "unsigned int"}, "int"
    },
    {"setns", 2, {"int", "int"}, "int"},
    {
        "getcpu", 3,
        {"unsigned *", "unsigned *", "struct getcpu_cache *"}, "int"
    },
    {
        "process_vm_readv", 6,
        {
            "pid_t", "struct iovec *", "unsigned long",
            "struct iovec *", "unsigned long", "unsigned long"
        }, "ssize_t"
    },
    {
        "process_vm_writev", 6,
        {
            "pid_t", "struct iovec *", "unsigned long",
            "struct iovec *", "unsigned long", "unsigned long"
        }, "ssize_t"
    },
    {
        "kcmp", 5,
        {"pid_t", "pid_t", "int", "unsigned long", "unsigned long"}, "int"
    },
    {"finit_module", 3, {"int", "char *", "int"}, "int"}
};

#endif /* SYSCALLS_H_ */
