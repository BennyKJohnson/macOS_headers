//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVAssetTrackSegment : NSObject
{
    CDStruct_82206317 _timeMapping;
}

@property(readonly, nonatomic) CDStruct_82206317 timeMapping; // @synthesize timeMapping=_timeMapping;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)_initWithTimeMapping:(CDStruct_82206317)arg1;

@end

