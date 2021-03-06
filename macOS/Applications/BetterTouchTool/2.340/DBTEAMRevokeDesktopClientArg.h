//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBTEAMDeviceSessionArg.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class NSNumber, NSString;

@interface DBTEAMRevokeDesktopClientArg : DBTEAMDeviceSessionArg <DBSerializable, NSCopying>
{
    NSNumber *_deleteOnUnlink;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *deleteOnUnlink; // @synthesize deleteOnUnlink=_deleteOnUnlink;
- (void).cxx_destruct;
- (BOOL)isEqualToRevokeDesktopClientArg:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithSessionId:(id)arg1 teamMemberId:(id)arg2;
- (id)initWithSessionId:(id)arg1 teamMemberId:(id)arg2 deleteOnUnlink:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

