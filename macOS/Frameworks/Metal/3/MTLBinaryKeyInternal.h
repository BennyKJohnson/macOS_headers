//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLBinaryKey.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLBinaryKeyInternal : MTLBinaryKey
{
    CDStruct_41a22ec7 _hash;
    NSString *_hashString;
}

@property(readonly) NSString *hashString; // @synthesize hashString=_hashString;
@property(readonly) CDStruct_41a22ec7 hash; // @synthesize hash=_hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToKey:(id)arg1;
- (id)initWithHash:(CDStruct_41a22ec7)arg1;

@end

