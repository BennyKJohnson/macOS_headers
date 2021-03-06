//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKPushNotificationManagerDelegate-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"

@class APStoreWindowController, NSString;

@interface APAppDelegate : NSObject <CKPushNotificationManagerDelegate, NSApplicationDelegate>
{
    APStoreWindowController *_storeWindowController;
}

@property(retain, nonatomic) APStoreWindowController *storeWindowController; // @synthesize storeWindowController=_storeWindowController;
- (void).cxx_destruct;
- (void)handleGetURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)_signOutAfterPushNotification:(id)arg1;
- (void)pushNotificationManagerDidChange:(id)arg1;
- (void)pushNotificationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)pushNotificationManagerDidSucceed:(id)arg1;
- (BOOL)_primaryAccountIsPresentAndSignedIn;
- (BOOL)_signInAndCreationIsRestricted;
- (BOOL)_runningInDemoMode;
- (BOOL)validateMenuItem:(id)arg1;
- (void)unhideAllSoftwareUpdates:(id)arg1;
- (void)checkForAvailableDownloads:(id)arg1;
- (void)createAccount:(id)arg1;
- (void)viewAccount:(id)arg1;
- (void)createAccountViewMyAccount:(id)arg1;
- (void)signOut:(id)arg1;
- (void)signIn:(id)arg1;
- (void)signInSignOut:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)showAboutBox:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

