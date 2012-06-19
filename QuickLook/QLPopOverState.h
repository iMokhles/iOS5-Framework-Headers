/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "UIPrintInteractionControllerDelegate-Protocol.h"

@class UIBarButtonItem, UIDocumentInteractionController;

@interface QLPopOverState : NSObject <UIDocumentInteractionControllerDelegate, UIPrintInteractionControllerDelegate>
{
    id _delegate;
    UIDocumentInteractionController *_documentInteractionController;
    int _popOverState;
    UIBarButtonItem *_barButtonItem;
    BOOL _inRotation;
}

- (id)initWithDocumentInteractionController:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentPrintMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)dismissMenuAnimated:(BOOL)arg1;
- (void)willRotate;
- (void)didRotate;
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (BOOL)documentInteractionController:(id)arg1 canPerformAction:(SEL)arg2;
- (BOOL)documentInteractionController:(id)arg1 performAction:(SEL)arg2;
- (void)printInteractionControllerWillPresentPrinterOptions:(id)arg1;
- (void)printInteractionControllerDidDismissPrinterOptions:(id)arg1;
@property int popOverState; // @synthesize popOverState=_popOverState;

@end

