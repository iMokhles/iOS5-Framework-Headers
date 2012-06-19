/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ABPersonAdditions : NSObject
{
}

+ (void)initializeAddressBookProperties;
+ (struct __CFArray *)copyAllProperties;
+ (struct __CFArray *)copyDefaultDisplayedProperties;
+ (struct __CFArray *)copyOptionalProperties;
+ (struct __CFArray *)copyNamePropertiesWithCurrentNameFormat;
+ (BOOL)isNameProperty:(int)arg1;
+ (struct __CFArray *)copyOptionalNameProperties;
+ (struct __CFArray *)copyOptionalJobProperties;
+ (struct __CFArray *)copyOptionalNameAffixProperties;
+ (struct __CFArray *)copyProperties:(struct __CFArray *)arg1 excludingProperties:(struct __CFArray *)arg2;
+ (struct __CFArray *)copyNamePropertiesForEditing:(BOOL)arg1 person:(void *)arg2;
+ (struct __CFArray *)copyNamePropertiesForEditing:(BOOL)arg1 includeRequiredNameProperties:(BOOL)arg2 people:(id)arg3;
+ (struct __CFArray *)copyNamePropertiesForEditing:(BOOL)arg1 includeRequiredNameProperties:(BOOL)arg2 person:(void *)arg3;
+ (BOOL)person:(void *)arg1 hasProperty:(int)arg2;
+ (BOOL)personIsReadonly:(void *)arg1;
+ (void)person:(void *)arg1 allowsLabels:(char *)arg2 customLabels:(char *)arg3 forProperty:(int)arg4;
+ (BOOL)personAllowsCustomLabels:(void *)arg1 forProperty:(int)arg2;
+ (BOOL)personAllowsLabels:(void *)arg1 forProperty:(int)arg2;
+ (BOOL)updatePersonKindFromName:(void *)arg1 recordIsNew:(BOOL)arg2;
+ (id)primarySourceNameForPerson:(void *)arg1 accountsManager:(id)arg2;
+ (id)arrayByWrappingIntegersInCFArray:(struct __CFArray *)arg1;
+ (struct __CFArray *)newCFArrayByUnwrappingIntegersInArray:(id)arg1;

@end

