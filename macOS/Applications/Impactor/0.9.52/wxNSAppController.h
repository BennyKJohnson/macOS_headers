//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"

@interface wxNSAppController : NSObject <NSApplicationDelegate>
{
}

- (void)applicationDidResignActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)handleOpenAppEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)handleGetURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)application:(id)arg1 printFile:(id)arg2;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;

@end

