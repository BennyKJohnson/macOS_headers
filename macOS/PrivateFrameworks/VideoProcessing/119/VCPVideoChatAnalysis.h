//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, VCPFaceTimeSession;

@interface VCPVideoChatAnalysis : NSObject
{
    NSObject<OS_dispatch_queue> *_detectionQueue;
    VCPFaceTimeSession *_faceTimeSession;
    NSMutableArray *_faces;
    BOOL _finished;
}

+ (id)videoChatAnalysis;
- (void).cxx_destruct;
- (void)checkAddFaces;
- (int)detectFaces:(struct __CVBuffer *)arg1;
- (BOOL)persistAnalysis;
- (int)analyzeFrame:(struct __CVBuffer *)arg1;
- (id)init;

@end

