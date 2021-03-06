//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import "PXPeopleFlowViewControllerActionDelegate-Protocol.h"

@class NSButton, NSString, UXView;
@protocol PXPeopleFlowController, PXPeopleFlowViewController;

__attribute__((visibility("hidden")))
@interface IPXPeopleSheetViewController : UXViewController <PXPeopleFlowViewControllerActionDelegate>
{
    UXView *_contentView;
    id <PXPeopleFlowController> _flowController;
    UXViewController<PXPeopleFlowViewController> *_currentViewController;
    NSButton *_cancelButton;
    NSButton *_backButton;
    NSButton *_nextButton;
    NSButton *_doneButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UXViewController<PXPeopleFlowViewController> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) id <PXPeopleFlowController> flowController; // @synthesize flowController=_flowController;
@property(retain, nonatomic) UXView *contentView; // @synthesize contentView=_contentView;
- (void)ppt_done:(id)arg1;
- (void)ppt_next:(id)arg1;
- (void)requestCancel;
- (void)requestAdvanceToNextInFlow;
- (void)setAdvanceButtonEnabled:(BOOL)arg1;
- (void)_updateActionButtons;
- (void)_presentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)back:(id)arg1;
- (void)next:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)handleDismissalOfViewController:(id)arg1 toViewController:(id)arg2;
- (void)preparePresentedViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFlowController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

