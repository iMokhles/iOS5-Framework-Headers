/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSURL;

@interface NSFileWritingWritingClaim : NSFileAccessClaim
{
    NSURL *_url1;
    BOOL _url1DidChange;
    unsigned int _options1;
    NSURL *_url2;
    BOOL _url2DidChange;
    unsigned int _options2;
    NSFileAccessNode *_location1;
    NSFileAccessNode *_location2;
}

- (BOOL)blocksClaim:(id)arg1;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)devalueSelf;
- (void)invokeClaimer;
- (void)granted;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardUsingMessageSender:(id)arg1 crashHandler:(void)arg2;
- (void)dealloc;
- (id)initWithClient:(struct _xpc_connection_s *)arg1 messageParameters:(id)arg2 replySender:(id)arg3;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned int)arg3 url:(id)arg4 options:(unsigned int)arg5 claimer:(id)arg6;

@end

