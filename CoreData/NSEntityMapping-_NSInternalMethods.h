/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSEntityMapping.h>

@interface NSEntityMapping (_NSInternalMethods)
- (id)_migrationPolicy;
- (id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2;
- (BOOL)isEditable;
- (void)_createCachesAndOptimizeState;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_throwIfNotEditable;
- (void)_addAttributeMapping:(id)arg1;
- (void)_addRelationshipMapping:(id)arg1;
- (id)_mappingsByName;
@end

