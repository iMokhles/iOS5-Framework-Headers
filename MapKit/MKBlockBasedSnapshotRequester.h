/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MKMapSnapshotCreatorRequester-Protocol.h"

@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester>
{
    id handler;
}

+ (id)snapshotRequesterWitHandler:(id)arg1;
@property(copy, nonatomic) id handler; // @synthesize handler;
- (void)mapSnapshotCreator:(id)arg1 didCreateSnapshot:(id)arg2 attributionString:(id)arg3 context:(id)arg4;
- (void)dealloc;

@end

