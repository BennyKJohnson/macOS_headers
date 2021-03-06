//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

#import "FFPlayerModuleDelegate-Protocol.h"
#import "FFTheaterModuleDelegate-Protocol.h"

@class FFContext, FFPlayerModule, FFTheaterItem, FFTheaterModule, NSString;
@protocol CETheaterContainerModuleDelegate;

@interface CETheaterContainerModule : LKViewModule <FFTheaterModuleDelegate, FFPlayerModuleDelegate>
{
    FFTheaterModule *_theaterModule;
    FFPlayerModule *_playerModule;
    FFContext *_currentPlayerContext;
    BOOL _playingFullScreen;
    FFTheaterItem *_displayedItem;
    CDStruct_e83c9415 _range;
    double _previousContextRate;
    id <CETheaterContainerModuleDelegate> _theaterContainerModuleDelegate;
}

@property(nonatomic) id <CETheaterContainerModuleDelegate> theaterContainerModuleDelegate; // @synthesize theaterContainerModuleDelegate=_theaterContainerModuleDelegate;
@property(readonly, nonatomic) BOOL playingFullScreen; // @synthesize playingFullScreen=_playingFullScreen;
@property(retain, nonatomic) FFContext *currentPlayerContext; // @synthesize currentPlayerContext=_currentPlayerContext;
@property(retain, nonatomic) FFTheaterItem *displayedItem; // @synthesize displayedItem=_displayedItem;
- (void)setUnseenItemCount:(long long)arg1;
- (void)showTrailerChooser:(id)arg1;
- (void)showProjectChooser:(id)arg1;
- (void)exitFullScreen:(id)arg1;
- (BOOL)hasSelectedTheaterItem;
- (void)goToSequence:(id)arg1 range:(CDStruct_e83c9415)arg2 inEvent:(id)arg3;
- (id)_fullScreenPresentationOptions;
- (BOOL)_loadItemIntoPlayer:(id)arg1;
- (void)sendFullScreen:(id)arg1;
- (void)displayTheaterItem:(id)arg1;
- (void)showHideLibraryAction:(id)arg1;
- (void)setAllProjectsShown;
- (void)setTheaterShown:(BOOL)arg1;
- (void)playerModule:(id)arg1 didExitFullScreenForEvent:(id)arg2;
- (void)_updateRange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)rangeChangedForContext:(id)arg1;
- (void)timeRateChangedForContext:(id)arg1;
@property(readonly, nonatomic) FFTheaterModule *theaterModule;
- (id)undoManager;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)submoduleLayoutArray;
- (CDStruct_d2b197d1)borderMetrics;
- (id)firstKeyView;
- (BOOL)wantsFooterBar;
- (BOOL)wantsHeaderBar;
- (id)moduleFooterAccessoryView;
- (id)moduleHeaderAccessoryView;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)enablePosterAnimations;
- (void)disablePosterAnimations;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

