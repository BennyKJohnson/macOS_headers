//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXNavigationParticipatingViewController.h"

@class IPXViewController;

@interface IPXBrowserController : IPXNavigationParticipatingViewController
{
}

- (BOOL)supportsInspector;
- (void)updateFirstResponder;
@property(readonly, nonatomic) IPXViewController *secondaryToolbarViewController;
- (void)updateToolbar;
- (BOOL)allowUserInterfaceItem:(id)arg1;
@property(readonly, nonatomic) BOOL isModal;
- (void)postSelectionChangedNotification;
- (void)chooseController:(id)arg1 relinquishingOwnership:(BOOL)arg2 selectedVersions:(id)arg3 primarySelection:(id)arg4 withEditorControllerOptions:(id)arg5;
- (BOOL)_requiresWindowForTransitionPreparation;
- (void)viewDidLoad;

@end

