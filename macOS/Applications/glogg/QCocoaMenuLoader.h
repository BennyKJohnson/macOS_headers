//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class NSMenu, NSMenuItem;

__attribute__((visibility("hidden")))
@interface QCocoaMenuLoader : NSResponder
{
    NSMenu *theMenu;
    NSMenu *appMenu;
    NSMenuItem *quitItem;
    NSMenuItem *preferencesItem;
    NSMenuItem *aboutItem;
    NSMenuItem *aboutQtItem;
    NSMenuItem *hideItem;
    NSMenuItem *lastAppSpecificItem;
    NSMenuItem *servicesItem;
    NSMenuItem *hideAllOthersItem;
    NSMenuItem *showAllItem;
}

- (id)mergeable;
- (BOOL)validateMenuItem:(id)arg1;
- (void)orderFrontCharacterPalette:(id)arg1;
- (void)qtDispatcherToQPAMenuItem:(id)arg1;
- (void)qtTranslateApplicationMenu;
- (void)hide:(id)arg1;
- (void)unhideAllApplications:(id)arg1;
- (void)hideOtherApplications:(id)arg1;
- (void)orderFrontStandardAboutPanel:(id)arg1;
- (void)terminate:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (id)appSpecificMenuItem:(long long)arg1;
- (id)hideMenuItem;
- (id)aboutQtMenuItem;
- (id)aboutMenuItem;
- (id)preferencesMenuItem;
- (id)quitMenuItem;
- (id)applicationMenu;
- (id)menu;
- (void)dealloc;
- (void)removeActionsFromAppMenu;
- (void)ensureAppMenuInMenu:(id)arg1;
- (void)awakeFromNib;

@end

