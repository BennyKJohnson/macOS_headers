//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BSAction.h"

@class FBSScene, FBSSerialQueue;

@interface FBSSceneAction : BSAction
{
    FBSScene *_scene;
    FBSSerialQueue *_callOutQueue;
}

@property(retain, nonatomic) FBSSerialQueue *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(retain, nonatomic) FBSScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;

@end

