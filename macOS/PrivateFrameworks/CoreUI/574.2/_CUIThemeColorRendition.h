//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CUIThemeColorRendition : CUIThemeRendition
{
    struct CGColor *_cgColor;
    const struct _csicolor *_csiColor;
    NSString *_colorName;
}

- (void)dealloc;
- (BOOL)substituteWithSystemColor;
- (id)systemColorName;
- (const struct _csicolor *)csiColor;
- (struct CGColor *)cgColor;
- (struct CGColorSpace *)_colorSpaceWithID:(long long)arg1;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;

@end

