//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "ACMonitoredAccountStoreDelegateProtocol-Protocol.h"
#import "RCMainViewControllerDelegate-Protocol.h"
#import "RCSplitViewResizingDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UIApplicationDelegatePrivate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UISplitViewControllerDelegate-Protocol.h"
#import "_UISplitViewControllerSupplementedDelegate-Protocol.h"

@class ACMonitoredAccountStore, CKContainer, NSString, RCDetailContainerViewController, RCLocationsOfInterestManager, RCMainViewController, RCSSavedRecordingService, RCSplitViewController, RCToolBarController, RCWaveformDataSource, RCWelcomeViewController, UIAlertController, UINavigationController, UIWindow, VMAudioService;

@interface RecorderAppDelegate : UIResponder <UIApplicationDelegatePrivate, RCMainViewControllerDelegate, RCSplitViewResizingDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, _UISplitViewControllerSupplementedDelegate, ACMonitoredAccountStoreDelegateProtocol, UIApplicationDelegate>
{
    UIWindow *_window;
    UINavigationController *_primaryNavigationController;
    UINavigationController *_secondaryNavigationController;
    RCMainViewController *_mainViewController;
    RCSplitViewController *_rootSplitViewController;
    UIAlertController *_fatalErrorAlertController;
    unsigned long long _backgroundTaskIdentifier;
    RCToolBarController *_toolBarController;
    RCSSavedRecordingService *_sharedService;
    CKContainer *_cloudContainer;
    int _cloudAccessChangedToken;
    RCLocationsOfInterestManager *_locationManager;
    VMAudioService *_audioService;
    int _removeAllRecordingsToken;
    int _resetDefaultsToken;
    BOOL _shouldImplicitlyEnableICloudIfAvailable;
    BOOL _recordingActive;
    BOOL _isActive;
    BOOL _hasBecomeActiveOnce;
    BOOL _tccAccessChangedWhileInBackground;
    ACMonitoredAccountStore *_accountStore;
    BOOL _launchedWithShortcut;
    RCDetailContainerViewController *_playbackContainerViewController;
    double _duration;
    RCWelcomeViewController *_welcomeViewController;
    UIAlertController *_iCloudSyncConfirmationAlertController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIAlertController *iCloudSyncConfirmationAlertController; // @synthesize iCloudSyncConfirmationAlertController=_iCloudSyncConfirmationAlertController;
@property(nonatomic) __weak RCWelcomeViewController *welcomeViewController; // @synthesize welcomeViewController=_welcomeViewController;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) RCDetailContainerViewController *playbackContainerViewController; // @synthesize playbackContainerViewController=_playbackContainerViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (BOOL)accessibilityPerformMagicTap;
- (void)_failedToCreateDatabase:(id)arg1;
- (void)_handleDidResumeRecording;
- (void)_handleDidPauseRecording;
- (void)recordNewVoiceMemoFromIntent;
- (void)playbackMostRecentRecordingFromIntent;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_startPlaybackQuickActionForRecordingWithUniqueID:(id)arg1;
- (void)_startNewRecordingQuickAction;
- (void)_prepareForQuickActionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_applicationDidFinishLaunching;
- (void)_checkAndReportUserLibrarySizeToCoreAnalytics;
- (void)_updateLastSuspendTime;
- (double)_lastSuspendTime;
- (void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2 captureTime:(double)arg3 usingDisplayLinkSmoothing:(BOOL)arg4;
@property(readonly, nonatomic) BOOL isLockScreenActive;
@property(readonly, nonatomic) RCMainViewController *mainViewController;
@property(readonly, nonatomic) RCWaveformDataSource *presentedWaveformDataSource;
- (void)_delayedSelectRecordingWithUUID:(id)arg1;
- (void)applicationDidResume:(id)arg1;
- (BOOL)_isCoreDataURL:(id)arg1;
- (void)_selectSharedRecording:(id)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)_activateApplication;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (long long)splitViewController:(id)arg1 topColumnForCollapsingToProposedTopColumn:(long long)arg2;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (unsigned long long)splitViewControllerSupportedInterfaceOrientations:(id)arg1;
- (void)splitViewController:(id)arg1 willHideColumn:(long long)arg2;
- (void)splitViewController:(id)arg1 willShowColumn:(long long)arg2;
- (void)handleRestyleRequest;
- (BOOL)modalMustShowOrIsShowing;
- (BOOL)cloudSyncPromptMustShowOrIsShowing;
- (BOOL)welcomeMustShowOrIsShowing;
- (void)_initialViewDidLoad;
- (void)performDeferredInitializationJustOnce;
- (void)__performDeferredInitialization;
- (void)buildMenuWithBuilder:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)_askUserForPermissionToUseCloudKit;
- (void)_promptForCloudKitIfLoggedInAndTCCUnset;
- (BOOL)cloudSyncPromptNeedsShowing;
- (BOOL)iCloudIsAvailable;
- (void)primaryAccountChanged;
- (void)accountWasRemoved:(id)arg1;
- (void)accountWasAdded:(id)arg1;
- (void)startMonitoringAccountChanges;
- (void)setTCCAccessEnabled:(BOOL)arg1;
- (void)_showWelcomeScreenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (BOOL)isScrollingTest:(id)arg1;
- (BOOL)selectFirstVoiceMemoInTableViewController:(id)arg1 errorString:(id *)arg2;
- (void)performLegacyScrollTestForTableView:(id)arg1 withOptions:(id)arg2;
- (void)performScrollTestForTableView:(id)arg1 withOptions:(id)arg2;
- (void)startScrollVoiceMemosEditListTest:(id)arg1;
- (void)startPlaySelectedVoiceMemoTest:(id)arg1;
- (void)startSelectFirstVoiceMemoInTableView:(id)arg1;
- (void)startCyclerEndRecordingTest:(id)arg1;
- (void)startCyclerRecordNewVoiceMemoTest:(id)arg1;
- (void)_closeEditCardAndFinishTest;
- (void)openCloseEditCardTest:(id)arg1;
- (void)_finishGlitchRecording;
- (void)glitchStartRecordNewVoiceMemoTest:(id)arg1;
- (void)startRecordNewVoiceMemoTest:(id)arg1;
- (void)startCornobbleScrollAllRecordingsTest:(id)arg1;
- (void)startScrollVoiceMemosListTest:(id)arg1;
- (void)startShowVoiceMemosListTest:(id)arg1 warm:(BOOL)arg2;
- (void)ppt_didStartVoiceMemoPreviewPlayback;
- (void)ppt_didEndCyclerRecording;
- (void)ppt_didStartCyclerRecording;
- (void)ppt_didStartRecording;
- (void)ppt_didShowVoiceMemoEditor;
- (void)ppt_didShowVoiceMemosList;
- (void)ppt_didFinishPostLaunchTasks:(id)arg1;
- (BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;
- (id)_recordingTableView;
- (id)currentSelectedRecordingCell;
- (id)_recordingViewController;
- (id)_mainViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

