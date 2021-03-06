//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying>
{
    NSMutableArray *_xattrs;
}

+ (Class)xattrsType;
+ (BOOL)removeXattrsOnFD:(int)arg1 includingContentRelated:(BOOL)arg2 error:(id *)arg3;
+ (BOOL)loadXattrsFromFD:(int)arg1 structuralBlob:(id *)arg2 contentBlob:(id *)arg3 localBlob:(id *)arg4 withMaximumSize:(unsigned long long)arg5 error:(id *)arg6;
+ (id)loadXattrsFromFD:(int)arg1 withMaximumSize:(unsigned long long)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSMutableArray *xattrs; // @synthesize xattrs=_xattrs;
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
- (id)xattrsAtIndex:(unsigned long long)arg1;
- (unsigned long long)xattrsCount;
- (void)addXattrs:(id)arg1;
- (void)clearXattrs;
- (id)shortDescription;
- (BOOL)applyToFileDescriptor:(int)arg1 error:(id *)arg2;

@end

