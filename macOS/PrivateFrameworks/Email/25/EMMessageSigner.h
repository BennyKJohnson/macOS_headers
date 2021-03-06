//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class EMCertificateTrustInformation, NSError;

@interface EMMessageSigner : NSObject <NSSecureCoding>
{
    EMCertificateTrustInformation *_signingCertificateTrustInfo;
    EMCertificateTrustInformation *_encryptionCertificateTrustInfo;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) EMCertificateTrustInformation *encryptionCertificateTrustInfo; // @synthesize encryptionCertificateTrustInfo=_encryptionCertificateTrustInfo;
@property(retain, nonatomic) EMCertificateTrustInformation *signingCertificateTrustInfo; // @synthesize signingCertificateTrustInfo=_signingCertificateTrustInfo;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (void)evaluateTrustsWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL hasSeparateSigningAndEncryptionCertificates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigningTrust:(id)arg1 encryptionTrust:(id)arg2;

@end

