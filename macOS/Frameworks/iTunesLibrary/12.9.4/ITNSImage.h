//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface ITNSImage : NSImage
{
    struct CGRect _sourceSubrect;
    NSImage *_fullImage;
    long long _resID;
}

@property(nonatomic) long long resID; // @synthesize resID=_resID;
@property(retain, nonatomic) NSImage *fullImage; // @synthesize fullImage=_fullImage;
@property(nonatomic) struct CGRect sourceSubrect; // @synthesize sourceSubrect=_sourceSubrect;
- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (void)_drawMappingAlignmentRectToRect:(struct CGRect)arg1 withState:(unsigned long long)arg2 backgroundStyle:(int)arg3 operation:(unsigned long long)arg4 fraction:(double)arg5 flip:(BOOL)arg6 hints:(id)arg7;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(BOOL)arg5 hints:(id)arg6;
@property(readonly, nonatomic) NSImage *slicedImage; // @dynamic slicedImage;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (void)drawAtPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (void)dealloc;

@end

