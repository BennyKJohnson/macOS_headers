//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFAction, WFParameter;
@protocol WFParameterState;

@interface WFWorkflowImportQuestion : NSObject
{
    WFAction *_action;
    WFParameter *_parameter;
    NSString *_question;
    id <WFParameterState> _defaultState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <WFParameterState> defaultState; // @synthesize defaultState=_defaultState;
@property(readonly, copy, nonatomic) NSString *question; // @synthesize question=_question;
@property(readonly, nonatomic) __weak WFParameter *parameter; // @synthesize parameter=_parameter;
@property(readonly, nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (id)serializedRepresentationWithWorkflowActions:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1 workflowActions:(id)arg2;
- (id)initWithAction:(id)arg1 parameter:(id)arg2 question:(id)arg3 defaultState:(id)arg4;

@end

