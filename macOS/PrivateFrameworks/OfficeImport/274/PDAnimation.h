//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OITSUNoCopyDictionary, PDRootTimeNode;

__attribute__((visibility("hidden")))
@interface PDAnimation : NSObject
{
    PDRootTimeNode *mRootTimeNode;
    OITSUNoCopyDictionary *mBuildMap;
}

+ (id)exitSubTypeMap;
+ (id)entranceSubTypeMap;
- (void).cxx_destruct;
- (id)description;
- (void)setBuildMap:(id)arg1;
- (id)buildMap;
- (id)addRootTimeNode;
- (id)rootTimeNode;
- (id)init;

@end

