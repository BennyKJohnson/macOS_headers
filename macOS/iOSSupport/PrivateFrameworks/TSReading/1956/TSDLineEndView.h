//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TSDLineEnd;

@interface TSDLineEndView : UIView
{
    TSDLineEnd *mLineEnd;
    BOOL mOnRight;
}

+ (id)viewWithLineEnd:(id)arg1 onRight:(BOOL)arg2;
@property(nonatomic) BOOL onRight; // @synthesize onRight=mOnRight;
@property(retain, nonatomic) TSDLineEnd *lineEnd; // @synthesize lineEnd=mLineEnd;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

