//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilitiesUI/NSCopying-Protocol.h>

@class NSString;

@interface NAUITextStyleDescriptor : NSObject <NSCopying>
{
    BOOL _allowsAccessibilitySizes;
    BOOL _allowsSmallSizes;
    unsigned int _symbolicTraits;
    NSString *_textStyle;
}

+ (id)na_identity;
+ (id)defaultFontForTextStyleDescriptor:(id)arg1;
+ (id)fontWithTextStyleDescriptor:(id)arg1;
+ (id)descriptorWithTextStyle:(id)arg1;
@property(readonly, nonatomic) BOOL allowsSmallSizes; // @synthesize allowsSmallSizes=_allowsSmallSizes;
@property(readonly, nonatomic) BOOL allowsAccessibilitySizes; // @synthesize allowsAccessibilitySizes=_allowsAccessibilitySizes;
@property(readonly, nonatomic) unsigned int symbolicTraits; // @synthesize symbolicTraits=_symbolicTraits;
@property(readonly, copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 allowsAccessibilitySizes:(BOOL)arg3 allowsSmallSizes:(BOOL)arg4;
- (id)init;
- (id)descriptorByDisallowingSmallSizes;
- (id)descriptorByDisallowingAccessibilitySizes;
- (id)descriptorByAddingSymbolicTraits:(unsigned int)arg1 removingSymbolicTraits:(unsigned int)arg2;

@end

