//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface TSDBackgroundUpdatableLayer : CALayer
{
    struct os_unfair_lock_s _backgroundUpdatableLayerLock;
    void *_contentsToSetOnNextDisplay;
    BOOL _wantsContentsUpdatedOnNextDisplay;
}

- (void)display;
- (void)setContentsFromBackground:(const void *)arg1;
- (void)dealloc;
- (id)init;

@end

