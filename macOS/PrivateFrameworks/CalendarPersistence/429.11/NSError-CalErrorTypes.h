//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (CalErrorTypes)
- (BOOL)isCalHTTPAuthOrHTTPTimeoutError;
- (BOOL)isCalConnectionError;
- (BOOL)isCalTransientError;
- (BOOL)isCalDAVTranslatedRevertableError;
- (BOOL)isCalDAVTransientErrorException;
- (BOOL)isCalCertificateError;
- (id)CalRedirectURLForGoogleAuthError;
- (BOOL)isCalGoogleAuthError;
- (BOOL)isCalAuthenticationError;
@end

