//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference;
@protocol OS_dispatch_queue;

@interface AVPlayerItemOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *timebaseReadWriteQueue;
    struct OpaqueCMTimebase *timebase;
}

@end

