//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MxlVoiceRange.h"

@interface MxlSlur : MxlVoiceRange
{
    long long start_abs_y;
    long long stop_abs_y;
}

@property(readonly) long long stop_abs_y; // @synthesize stop_abs_y;
@property(readonly) long long start_abs_y; // @synthesize start_abs_y;
- (id)description;
- (void)dealloc;
- (id)initMxlSlur:(struct ScViewState *)arg1 scVoice:(struct ScVoice *)arg2 scSlur:(struct ScIndepSlur *)arg3;

@end

