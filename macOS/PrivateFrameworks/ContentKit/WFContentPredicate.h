//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/WFContentPropertyContainer-Protocol.h>

@class NSSet;

@interface WFContentPredicate : NSObject <WFContentPropertyContainer>
{
    CDUnknownBlockType _block;
}

+ (id)predicateWithBlock:(CDUnknownBlockType)arg1;
+ (id)falsePredicate;
+ (id)truePredicate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *containedProperties;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)evaluateWithObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

