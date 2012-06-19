/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <Foundation/NSFileAccessArbiter-Protocol.h>

@class NSMutableDictionary;

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter>
{
    struct _xpc_connection_s *_server;
    struct dispatch_queue_s *_queue;
    NSMutableDictionary *_presentersByID;
    NSMutableDictionary *_providersByID;
}

+ (id)_operationQueueForPresenter:(id)arg1;
- (void)handleCanceledServer;
- (void)handleMessage:(void *)arg1;
- (void)_makeProvider:(id)arg1 cancelProvidingItemAtURL:(id)arg2 forAccessClaimWithID:(id)arg3;
- (void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 forAccessClaimWithID:(id)arg3 completionHandler:(id)arg4;
- (void)_makePresenter:(id)arg1 reacquireFromWritingClaimForID:(id)arg2;
- (void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned int)arg3 subitemURL:(id)arg4 completionHandler:(id)arg5;
- (void)_makePresenter:(id)arg1 reacquireFromReadingClaimForID:(id)arg2;
- (void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 options:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 ifNecessaryUsingSelector:(SEL)arg3 recordingRelinquishment:(id)arg4 continuer:(id)arg5;
- (void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5;
- (void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3;
- (void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(id)arg3;
- (void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(id)arg2;
- (id)idForFileReactor:(id)arg1;
- (id)fileProviders;
- (void)removeFileProvider:(id)arg1;
- (void)addFileProvider:(id)arg1;
- (id)filePresenters;
- (void)removeFilePresenter:(id)arg1;
- (void)addFilePresenter:(id)arg1;
- (void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)cancelAccessClaimForID:(id)arg1;
- (void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(struct _xpc_connection_s *)arg2;
- (void)revokeAccessClaimForID:(id)arg1;
- (struct dispatch_semaphore_s *)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2;
- (id)_writeRelinquishmentForPresenter:(id)arg1;
- (id)_readRelinquishmentForPresenter:(id)arg1;
- (id)_idForReactor:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithServer:(struct _xpc_connection_s *)arg1;

@end

