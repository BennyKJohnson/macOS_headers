//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BKAssetMetadataFilenameManager : NSObject
{
    NSObject<OS_dispatch_queue> *_reservedFilenamesAccessQueue;
    NSMutableDictionary *_reservedFilenames;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *reservedFilenames; // @synthesize reservedFilenames=_reservedFilenames;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reservedFilenamesAccessQueue; // @synthesize reservedFilenamesAccessQueue=_reservedFilenamesAccessQueue;
- (void).cxx_destruct;
- (void)unreserveFilename:(id)arg1 inDirectory:(id)arg2;
- (id)reserveNonCollidingFilename:(id)arg1 inDirectory:(id)arg2;
- (id)init;

@end

