//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AMService.h"

@interface AMSyslogRelay : AMService
{
    struct __CFReadStream *_readstream;
    id _listener;
    SEL _message;
}

- (id)initWithAMDevice:(id)arg1 listener:(id)arg2 message:(SEL)arg3;
- (void)dealloc;

@end

