//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FBAProfileAttributeDescriptor : NSObject
{
    NSNumber *_serverID;
    NSString *_owner;
    NSString *_useAs;
    NSString *_categoryAs;
    NSString *_familyAs;
    NSString *_masterValue;
}

+ (id)descriptorFromDictionary:(id)arg1;
@property(retain) NSString *masterValue; // @synthesize masterValue=_masterValue;
@property(retain) NSString *familyAs; // @synthesize familyAs=_familyAs;
@property(retain) NSString *categoryAs; // @synthesize categoryAs=_categoryAs;
@property(retain) NSString *useAs; // @synthesize useAs=_useAs;
@property(retain) NSString *owner; // @synthesize owner=_owner;
@property(retain) NSNumber *serverID; // @synthesize serverID=_serverID;
- (void).cxx_destruct;
- (id)description;

@end

