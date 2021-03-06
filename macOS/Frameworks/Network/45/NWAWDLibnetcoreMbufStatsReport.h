//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreMbufStatsReport : PBCodable <NSCopying>
{
    unsigned long long _mbuf16KBTotal;
    unsigned long long _mbuf256BTotal;
    unsigned long long _mbuf2KBTotal;
    unsigned long long _mbuf4KBTotal;
    unsigned long long _mbufDrainCount;
    unsigned long long _mbufMemReleased;
    unsigned long long _sockAtMBLimit;
    unsigned long long _sockMBcnt;
    struct {
        unsigned int mbuf16KBTotal:1;
        unsigned int mbuf256BTotal:1;
        unsigned int mbuf2KBTotal:1;
        unsigned int mbuf4KBTotal:1;
        unsigned int mbufDrainCount:1;
        unsigned int mbufMemReleased:1;
        unsigned int sockAtMBLimit:1;
        unsigned int sockMBcnt:1;
    } _has;
}

@property(nonatomic) unsigned long long mbufDrainCount; // @synthesize mbufDrainCount=_mbufDrainCount;
@property(nonatomic) unsigned long long mbufMemReleased; // @synthesize mbufMemReleased=_mbufMemReleased;
@property(nonatomic) unsigned long long sockAtMBLimit; // @synthesize sockAtMBLimit=_sockAtMBLimit;
@property(nonatomic) unsigned long long sockMBcnt; // @synthesize sockMBcnt=_sockMBcnt;
@property(nonatomic) unsigned long long mbuf16KBTotal; // @synthesize mbuf16KBTotal=_mbuf16KBTotal;
@property(nonatomic) unsigned long long mbuf4KBTotal; // @synthesize mbuf4KBTotal=_mbuf4KBTotal;
@property(nonatomic) unsigned long long mbuf2KBTotal; // @synthesize mbuf2KBTotal=_mbuf2KBTotal;
@property(nonatomic) unsigned long long mbuf256BTotal; // @synthesize mbuf256BTotal=_mbuf256BTotal;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMbufDrainCount;
@property(nonatomic) BOOL hasMbufMemReleased;
@property(nonatomic) BOOL hasSockAtMBLimit;
@property(nonatomic) BOOL hasSockMBcnt;
@property(nonatomic) BOOL hasMbuf16KBTotal;
@property(nonatomic) BOOL hasMbuf4KBTotal;
@property(nonatomic) BOOL hasMbuf2KBTotal;
@property(nonatomic) BOOL hasMbuf256BTotal;

@end

