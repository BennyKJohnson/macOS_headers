//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSTimer, PTKeyCombo;

__attribute__((visibility("hidden")))
@interface PTHotKey : NSObject
{
    NSString *mIdentifier;
    NSString *mName;
    PTKeyCombo *mKeyCombo;
    id mTarget;
    SEL mAction;
    unsigned int mAssociatedID;
    long long bttAction;
    NSString *bttActionInfo;
    BOOL _triggerOnKeyDown;
    double _repeatRate;
    NSTimer *_repeatTimer;
}

@property(retain, nonatomic) NSTimer *repeatTimer; // @synthesize repeatTimer=_repeatTimer;
@property(nonatomic) double repeatRate; // @synthesize repeatRate=_repeatRate;
@property(nonatomic) BOOL triggerOnKeyDown; // @synthesize triggerOnKeyDown=_triggerOnKeyDown;
@property(nonatomic) unsigned int associatedID; // @synthesize associatedID=mAssociatedID;
@property(nonatomic) SEL action; // @synthesize action=mAction;
@property(nonatomic) id target; // @synthesize target=mTarget;
@property(retain, nonatomic) NSString *name; // @synthesize name=mName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=mIdentifier;
@property(nonatomic) long long bttAction; // @synthesize bttAction;
@property(retain, nonatomic) NSString *bttActionInfo; // @synthesize bttActionInfo;
- (BOOL)invokeBTTActionMTDown:(BOOL)arg1;
- (BOOL)invokeBTTActionMTDown;
- (BOOL)invokeBTTActionMT;
- (void)stopRepeat;
- (BOOL)invokeBTTActionDown;
- (BOOL)invokeBTTAction;
@property(retain, nonatomic) PTKeyCombo *keyCombo; // @dynamic keyCombo;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 keyCombo:(id)arg2 triggerOnKeyDown:(BOOL)arg3 repeatRate:(double)arg4;
- (id)initWithIdentifier:(id)arg1 keyCombo:(id)arg2;
- (id)init;

@end

