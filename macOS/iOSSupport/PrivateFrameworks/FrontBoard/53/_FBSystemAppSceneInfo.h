//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSScene, FBSSceneTransitionContext, UIScene, UIWindow;

@interface _FBSystemAppSceneInfo : NSObject
{
    BOOL _isWindowScene;
    BOOL _hasSentFBSWorkspaceDelegateSceneCreate;
    FBSScene *_FBSScene;
    UIScene *_UIScene;
    UIWindow *_primaryWindow;
    FBSSceneTransitionContext *_pendingTransitionContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBSSceneTransitionContext *pendingTransitionContext; // @synthesize pendingTransitionContext=_pendingTransitionContext;
@property(nonatomic) BOOL hasSentFBSWorkspaceDelegateSceneCreate; // @synthesize hasSentFBSWorkspaceDelegateSceneCreate=_hasSentFBSWorkspaceDelegateSceneCreate;
@property(readonly, nonatomic) BOOL isWindowScene; // @synthesize isWindowScene=_isWindowScene;
@property(nonatomic) __weak UIWindow *primaryWindow; // @synthesize primaryWindow=_primaryWindow;
@property(retain, nonatomic) UIScene *UIScene; // @synthesize UIScene=_UIScene;
@property(retain, nonatomic) FBSScene *FBSScene; // @synthesize FBSScene=_FBSScene;

@end

