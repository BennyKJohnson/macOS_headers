//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFPubliclyDescribable.h"
#import "NSSecureCoding.h"

@class NSArray, NSError, NSString;

@interface EMSecurityInformation : NSObject <NSSecureCoding, EFPubliclyDescribable>
{
    BOOL _isEncrypted;
    BOOL _hasEncryptedDescendantPart;
    NSArray *_signers;
    NSError *_smimeError;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *smimeError; // @synthesize smimeError=_smimeError;
@property(readonly, nonatomic) BOOL hasEncryptedDescendantPart; // @synthesize hasEncryptedDescendantPart=_hasEncryptedDescendantPart;
@property(readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property(readonly, nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reevaluateTrustWithNetworkAccessAllowed;
@property(readonly, nonatomic) BOOL isSigned;
- (id)initWithSigners:(id)arg1 isEncrypted:(BOOL)arg2 hasEncryptedDescendantPart:(BOOL)arg3 smimeError:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

