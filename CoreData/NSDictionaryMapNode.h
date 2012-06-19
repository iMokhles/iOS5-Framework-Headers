/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSStoreMapNode.h>

#import "NSCoding-Protocol.h"

@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding>
{
    id *_attributes;
    id _attributesAsEncoded;
}

+ (void)initialize;
- (id)initWithValues:(id *)arg1 objectID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)_doAttributeDecoding;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (const id *)attributeValues;
- (id)valueForKey:(id)arg1;

@end

