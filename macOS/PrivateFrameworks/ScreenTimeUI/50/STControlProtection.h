//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface STControlProtection : NSObject
{
    id <STProtectedControlAuthenticator> _authenticator;
}

+ (id)refreshBoundProperty:(id)arg1;
+ (id)sharedInstance;
@property(retain) id <STProtectedControlAuthenticator> authenticator; // @synthesize authenticator=_authenticator;
- (void).cxx_destruct;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

