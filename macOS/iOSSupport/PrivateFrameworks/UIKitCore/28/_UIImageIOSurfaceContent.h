//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageIOSurfaceContent : _UIImageContent
{
    struct __IOSurface *_surfaceRef;
}

- (BOOL)canProvideCGImage;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize)sizeInPixels;
- (BOOL)isIOSurface;
- (struct __IOSurface *)IOSurface;
- (void)dealloc;
- (id)initWithScale:(double)arg1;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 scale:(double)arg2;

@end

