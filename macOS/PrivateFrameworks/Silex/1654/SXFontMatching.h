//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SXFontMatching : NSObject
{
}

+ (id)fontFaceWithAttributes:(id)arg1 fromFamily:(id)arg2;
+ (long long)lighterWeightForWeight:(long long)arg1;
+ (long long)bolderWeightForWeight:(long long)arg1;
+ (long long)bestWeightForIntendedWeight:(long long)arg1 forFonts:(id)arg2;
+ (long long)bestStyleForIntendedStyle:(long long)arg1 forFonts:(id)arg2;
+ (long long)bestWidthForIntendedWidth:(long long)arg1 forFonts:(id)arg2;
+ (id)matchFontFaceForAttributes:(id)arg1 fromFamily:(id)arg2;

@end

