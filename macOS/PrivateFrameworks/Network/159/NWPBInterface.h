//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface NWPBInterface : PBCodable <NSCopying>
{
    unsigned int _delegateIndex;
    unsigned int _generation;
    unsigned int _index;
    unsigned int _mtu;
    NSString *_name;
    int _subtype;
    int _type;
    BOOL _expensive;
    struct {
        unsigned int delegateIndex:1;
        unsigned int generation:1;
        unsigned int index:1;
        unsigned int mtu:1;
        unsigned int subtype:1;
        unsigned int type:1;
        unsigned int expensive:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL expensive; // @synthesize expensive=_expensive;
@property(nonatomic) unsigned int mtu; // @synthesize mtu=_mtu;
@property(nonatomic) unsigned int delegateIndex; // @synthesize delegateIndex=_delegateIndex;
@property(nonatomic) unsigned int generation; // @synthesize generation=_generation;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasExpensive;
@property(nonatomic) BOOL hasMtu;
@property(nonatomic) BOOL hasDelegateIndex;
@property(nonatomic) BOOL hasGeneration;
@property(nonatomic) BOOL hasIndex;
@property(readonly, nonatomic) BOOL hasName;
- (int)StringAsSubtype:(id)arg1;
- (id)subtypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSubtype;
@property(nonatomic) int subtype; // @synthesize subtype=_subtype;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

