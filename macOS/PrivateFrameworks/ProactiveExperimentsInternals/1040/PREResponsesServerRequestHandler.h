//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PREResponsesProtocol.h"

@class NSString, _PASBundleIdResolver;

@interface PREResponsesServerRequestHandler : NSObject <PREResponsesProtocol>
{
    id <PREResponsesProtocol> _clientProxy;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

@property(retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void).cxx_destruct;
- (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(BOOL)arg3 isUsingQuickResponses:(BOOL)arg4 locale:(id)arg5 modelConfigPath:(id)arg6;
- (id)preResponseItemArrayFromQuickResponses:(id)arg1;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 language:(id)arg4 modelFilePath:(id)arg5 modelConfigPath:(id)arg6 registerDisplayed:(BOOL)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setRemoteObjectProxy:(id)arg1;

@end

