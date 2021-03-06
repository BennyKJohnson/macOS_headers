//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPImagesUsagePropensity.h"

@class NSData, NSString;

@interface _CPImagesUsagePropensity : PBCodable <_CPImagesUsagePropensity, NSSecureCoding>
{
    float _zkw;
    float _recentResult;
    float _other;
    float _querySuggestion;
    float _image;
    int _totalEngagements;
}

@property(nonatomic) int totalEngagements; // @synthesize totalEngagements=_totalEngagements;
@property(nonatomic) float image; // @synthesize image=_image;
@property(nonatomic) float querySuggestion; // @synthesize querySuggestion=_querySuggestion;
@property(nonatomic) float other; // @synthesize other=_other;
@property(nonatomic) float recentResult; // @synthesize recentResult=_recentResult;
@property(nonatomic) float zkw; // @synthesize zkw=_zkw;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

