//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSString;

@interface ImportMovie : NSObject
{
    NSString *_sourcePath;
    NSString *_destPath;
    NSString *_actualPath;
    struct CGSize _size;
}

+ (BOOL)writePreviewMoviefromPath:(id)arg1 toPath:(id)arg2 actualPath:(id *)arg3 previewSize:(struct CGSize *)arg4;
- (void)_writePreviewMovieOnMainThread;
- (struct CGSize)_previewSize;
- (id)_writePreviewMovie;
- (void)dealloc;
- (id)_initWithFromPath:(id)arg1 toPath:(id)arg2;

@end

