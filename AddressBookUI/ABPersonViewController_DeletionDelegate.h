/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIActionSheetDelegate-Protocol.h"

@class ABPersonViewControllerHelper;

@interface ABPersonViewController_DeletionDelegate : NSObject <UIActionSheetDelegate>
{
    ABPersonViewControllerHelper *_controller;
}

- (id)initWithPersonViewController:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end

