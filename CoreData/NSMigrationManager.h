/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSError, NSManagedObjectContext, NSManagedObjectModel, NSMappingModel, NSMigrationContext;

@interface NSMigrationManager : NSObject
{
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceEntitiesByVersionHash;
    NSManagedObjectModel *_destinationModel;
    NSDictionary *_destinationEntitiesByVersionHash;
    NSMappingModel *_mappingModel;
    NSManagedObjectContext *_sourceManagedObjectContext;
    NSManagedObjectContext *_destinationManagedObjectContext;
    NSMigrationContext *_migrationContext;
    NSDictionary *_userInfo;
    struct _migrationManagerFlags {
        unsigned int _migrationWasCancelled:1;
        unsigned int _usesStoreSpecificMigrationManager:1;
        unsigned int _reservedMigrationManager:30;
    } _migrationManagerFlags;
    NSError *_migrationCancellationError;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (void)dealloc;
- (BOOL)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id *)arg8;
- (void)reset;
- (id)mappingModel;
- (id)sourceModel;
- (id)destinationModel;
- (id)sourceContext;
- (id)destinationContext;
- (id)sourceEntityForEntityMapping:(id)arg1;
- (id)destinationEntityForEntityMapping:(id)arg1;
- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (id)destinationInstancesForEntityMappingNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)destinationInstancesForSourceRelationshipNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)sourceInstancesForEntityMappingNamed:(id)arg1 destinationInstances:(id)arg2;
- (id)currentEntityMapping;
- (id)currentPropertyMapping;
- (float)migrationProgress;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)cancelMigrationWithError:(id)arg1;
- (void)setUsesStoreSpecificMigrationManager:(BOOL)arg1;
- (BOOL)usesStoreSpecificMigrationManager;

@end

