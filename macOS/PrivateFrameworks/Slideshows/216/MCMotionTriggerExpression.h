//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MCMotionTrigger.h>

@class NSDictionary, NSString;

@interface MCMotionTriggerExpression : MCMotionTrigger
{
    NSString *_expression;
    NSDictionary *_attributes;
}

+ (id)motionTriggerForTargetPlugObjectID:(id)arg1 withKey:(id)arg2 duration:(double)arg3 andExpression:(id)arg4;
@property(copy) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy) NSString *expression; // @synthesize expression=_expression;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end

