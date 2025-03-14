//
//  Header.h
//
//
//  Created by TobbyQuinn on 2025/3/12.
//




#ifndef LWIP_ARCH_CC_H
#define LWIP_ARCH_CC_H
#include <stdio.h>
#include <stdlib.h>

#include <syslog.h>

#include <sys/time.h>

#define LWIP_TIMEVAL_PRIVATE 0


typedef unsigned   char    u8_t;
typedef signed     char    s8_t;
typedef unsigned   short   u16_t;
typedef signed     short   s16_t;
typedef unsigned   int     u32_t;
typedef signed     int     s32_t;

//#include <pthread.h>
//#include <semaphore.h>
#include <signal.h>
//#include <dispatch/dispatch.h>
//
//
//
//typedef dispatch_semaphore_t sys_sem_t;
//typedef dispatch_queue_t sys_mbox_t;
//
//
//
///* 定义系统抽象层类型 */
//
//// 互斥锁：使用 POSIX 线程的互斥锁
//typedef pthread_mutex_t sys_mutex_t;
//
//// 线程：使用 pthread_t
//typedef pthread_t sys_thread_t;
//
//// 临界区保护：使用 sigset_t 存储信号屏蔽字（也可根据需求定义为空类型）
typedef sigset_t sys_prot_t;

struct sio_status_s;
typedef struct sio_status_s sio_status_t;
#define sio_fd_t sio_status_t*
#define __sio_fd_t_defined

#define LWIP_RAND() ((u32_t)rand())

/* If only we could use C99 and get %zu */
#if defined(__x86_64__)
#define SZT_F "lu"
#else
#define SZT_F "u"
#endif

/* Compiler hints for packing structures */
#define PACK_STRUCT_FIELD(x) x
#define PACK_STRUCT_STRUCT __attribute__((packed))
#define PACK_STRUCT_BEGIN
#define PACK_STRUCT_END



/* Plaform specific diagnostic output */
#define LWIP_PLATFORM_DIAG(x)	do {printf("%s\n", x);} while(0)


#define LWIP_PLATFORM_ASSERT(x) do {printf("Assertion \"%s\" failed at line %d in %s\n", \
x, __LINE__, __FILE__); fflush(NULL); abort();} while(0)



#endif /* LWIP_ARCH_CC_H */
