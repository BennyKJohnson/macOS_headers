//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPCommentQuestionProtocol-Protocol.h"

@class NSString;

@protocol RAPCorrectableNameProtocol <RAPCommentQuestionProtocol>
@property(readonly, nonatomic) BOOL isNameCorrectionRequired;
@property(readonly, nonatomic) NSString *originalName;
- (void)setCorrectedName:(NSString *)arg1;
@end

