//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSToolbar, NSURL, OS_dispatch_queue, UIWindow;

@protocol UINSWindow <NSObject>
- (void)setNeedsSizeRestrictionsUpdate;
- (void)setNeedsDragRegionsUpdate;
- (struct CGRect)convertRectToUIWindow:(struct CGRect)arg1;
- (struct CGRect)convertRectFromUIWindow:(struct CGRect)arg1;
- (struct CGSize)convertSizeToUIWindow:(struct CGSize)arg1;
- (struct CGSize)convertSizeFromUIWindow:(struct CGSize)arg1;
- (struct CGPoint)convertPointToUIWindow:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromUIWindow:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromWindowSceneView:(struct CGRect)arg1;
- (void)presentContextualMenuForShareableItems:(NSArray *)arg1 atLocation:(struct CGPoint)arg2;
- (void)noteUIWindowContextsChanged;
- (void)orderOut:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)endHostModalSession;
- (void)beginHostModalSession;
- (void)markTouchBarAsDirty;
- (void)acceptKeyViewHandoff:(BOOL)arg1 completionQueue:(OS_dispatch_queue *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)makeInputViewFirstResponder;
@property(nonatomic, readonly) BOOL appearsKeyIncludingSheets;
@property(nonatomic, readonly) BOOL appearsKey;
@property(nonatomic) __weak UIWindow *keyUIWindow;
@property(nonatomic, copy) NSArray *uiWindows;
@property(nonatomic) long long windowAppearance;
@property(nonatomic, readonly) NSString *sceneIdentifier;
@property(nonatomic) BOOL titlebarTransparent;
- (BOOL)isTitlebarTransparent;
@property(nonatomic) BOOL titlebarHidden;
- (BOOL)isTitlebarHidden;
@property(nonatomic) BOOL autoHidesToolbarInFullScreen;
@property(nonatomic) struct CGSize contentMinSize;
@property(nonatomic, copy) NSURL *representedURL;
@property(nonatomic, retain) NSToolbar *toolbar;
@property(nonatomic, copy) NSString *title;
@end

