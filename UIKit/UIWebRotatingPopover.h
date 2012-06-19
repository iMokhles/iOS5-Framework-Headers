/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIPopoverControllerDelegate-Protocol.h"

@class DOMNode, UIPopoverController;

@interface UIWebRotatingPopover : NSObject <UIPopoverControllerDelegate>
{
    BOOL _isRotating;
    DOMNode *_node;
    UIPopoverController *_popoverController;
}

@property(retain, nonatomic) UIPopoverController *_popoverController; // @synthesize _popoverController;
@property(retain, nonatomic) DOMNode *_node; // @synthesize _node;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)accessoryDone;
- (void)presentPopover;
- (void)dealloc;
- (id)initWithDOMNode:(id)arg1;

@end

