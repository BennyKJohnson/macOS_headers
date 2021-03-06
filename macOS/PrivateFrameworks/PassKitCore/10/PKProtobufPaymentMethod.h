//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface PKProtobufPaymentMethod : PBCodable <NSCopying>
{
    NSString *_displayName;
    NSString *_network;
    unsigned int _type;
    struct {
        unsigned int type:1;
    } _has;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *network; // @synthesize network=_network;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasType;
@property(readonly, nonatomic) BOOL hasNetwork;
@property(readonly, nonatomic) BOOL hasDisplayName;

@end

