//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSHttpIngestion.h"

@interface MSOneCollectorIngestion : MSHttpIngestion
{
}

- (id)obfuscateTickets:(id)arg1;
- (id)obfuscateTargetTokens:(id)arg1;
- (id)obfuscateHeaderValue:(id)arg1 forKey:(id)arg2;
- (id)createRequest:(id)arg1 eTag:(id)arg2 authToken:(id)arg3;
- (void)sendAsync:(id)arg1 authToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithBaseUrl:(id)arg1;

@end

