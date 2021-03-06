//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFImage.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFLocalImage.h"

@class NSData, NSDictionary, NSString;

@interface SFLocalImage : SFImage <SFLocalImage, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int localImageType:1;
    } _has;
    int _localImageType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int localImageType; // @synthesize localImageType=_localImageType;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasLocalImageType;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *contentType;
@property(nonatomic) double cornerRadius;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *identifier;
@property(copy) NSData *imageData;
@property(nonatomic) BOOL isTemplate;
@property(copy, nonatomic) NSString *keyColor;
@property(nonatomic) double scale;
@property(nonatomic) BOOL shouldCropToCircle;
@property(nonatomic) struct CGSize size;
@property(nonatomic) int source;
@property(readonly) Class superclass;

@end

