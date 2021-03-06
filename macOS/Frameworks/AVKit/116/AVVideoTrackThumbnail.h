//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AVVideoTrackThumbnail : NSObject
{
    struct CGImage *_image;
    BOOL _imageIsPlacehoder;
    unsigned long long _index;
    unsigned long long _zoomFactor;
    double _time;
}

@property(readonly) BOOL imageIsPlacehoder; // @synthesize imageIsPlacehoder=_imageIsPlacehoder;
@property(readonly) double time; // @synthesize time=_time;
@property(readonly) unsigned long long zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(readonly) unsigned long long index; // @synthesize index=_index;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setImage:(struct CGImage *)arg1 isPlaceholder:(BOOL)arg2;
@property(readonly) struct CGImage *image;
- (void)dealloc;
- (id)initWithTime:(double)arg1 index:(unsigned long long)arg2;
- (id)initWithTime:(double)arg1 index:(unsigned long long)arg2 zoomFactor:(unsigned long long)arg3;

@end

