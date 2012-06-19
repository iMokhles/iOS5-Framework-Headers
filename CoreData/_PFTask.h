/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface _PFTask : NSObject
{
    int _cd_rc;
    void *_task;
    void *arguments;
    struct _opaque_pthread_mutex_t lock;
    struct _opaque_pthread_cond_t {
        long __sig;
        char __opaque[24];
    } condition;
    int isFinishedFlag;
}

+ (int)getNumActiveProcessors;
+ (double)getProcessorSpeed;
+ (unsigned long long)getPhysicalMemory;
- (id)initWithFunction:(void *)arg1 withArgument:(void *)arg2 andPriority:(int)arg3;
- (void)dealloc;
- (void)finalize;
- (id)retain;
- (void)release;
- (unsigned int)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;

@end

