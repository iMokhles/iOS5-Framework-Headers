/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSLocking-Protocol.h"

@class NSManagedObjectModel, NSMutableArray;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking>
{
    struct _persistentStoreCoordinatorFlags {
        unsigned int _isRegistered:1;
        unsigned int _reservedFlags:31;
    } _flags;
    void *_reserved;
    NSMutableArray *_extendedStoreURLs;
    id _externalRecordsHelper;
    NSManagedObjectModel *_managedObjectModel;
    id _coreLock;
    NSMutableArray *_persistentStores;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (id)registeredStoreTypes;
+ (Class)_classForPersistentStoreAtURL:(id)arg1;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id *)arg4;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id *)arg3;
- (void)setMetadata:(id)arg1 forPersistentStore:(id)arg2;
- (id)metadataForPersistentStore:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithManagedObjectModel:(id)arg1;
- (id)managedObjectModel;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (id)persistentStores;
- (id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (BOOL)_removePersistentStore:(id)arg1;
- (BOOL)removePersistentStore:(id)arg1 error:(id *)arg2;
- (id)persistentStoreForURL:(id)arg1;
- (id)URLForPersistentStore:(id)arg1;
- (BOOL)setURL:(id)arg1 forPersistentStore:(id)arg2;
- (id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id *)arg5;
- (id)managedObjectIDForURIRepresentation:(id)arg1;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned int)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;

@end

