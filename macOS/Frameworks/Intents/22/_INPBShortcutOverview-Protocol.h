//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBDataString, _INPBImageValue;

@protocol _INPBShortcutOverview <NSObject>
+ (Class)stepsType;
@property(readonly, nonatomic) BOOL hasVoiceCommand;
@property(retain, nonatomic) _INPBDataString *voiceCommand;
@property(readonly, nonatomic) unsigned long long stepsCount;
@property(copy, nonatomic) NSArray *steps;
@property(readonly, nonatomic) BOOL hasName;
@property(retain, nonatomic) _INPBDataString *name;
@property(readonly, nonatomic) BOOL hasIcon;
@property(retain, nonatomic) _INPBImageValue *icon;
@property(readonly, nonatomic) BOOL hasDescriptiveText;
@property(retain, nonatomic) _INPBDataString *descriptiveText;
- (_INPBImageValue *)stepsAtIndex:(unsigned long long)arg1;
- (void)addSteps:(_INPBImageValue *)arg1;
- (void)clearSteps;
@end

