//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject
{
    GEOLocationShifter *_locationShifter;
}

- (void).cxx_destruct;
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 withShiftRequestBlock:(CDUnknownBlockType)arg3;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isLocationShiftEnabled) BOOL locationShiftEnabled;
- (id)init;

@end

