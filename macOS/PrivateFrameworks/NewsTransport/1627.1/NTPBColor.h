//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBColor : PBCodable <NSCopying>
{
    double _a;
    double _b;
    double _g;
    double _r;
    struct {
        unsigned int a:1;
        unsigned int b:1;
        unsigned int g:1;
        unsigned int r:1;
    } _has;
}

@property(nonatomic) double a; // @synthesize a=_a;
@property(nonatomic) double b; // @synthesize b=_b;
@property(nonatomic) double g; // @synthesize g=_g;
@property(nonatomic) double r; // @synthesize r=_r;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasA;
@property(nonatomic) BOOL hasB;
@property(nonatomic) BOOL hasG;
@property(nonatomic) BOOL hasR;

@end

