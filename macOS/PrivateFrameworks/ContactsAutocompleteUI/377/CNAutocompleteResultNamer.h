//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDataDetector, NSString;

@interface CNAutocompleteResultNamer : NSObject
{
    BOOL _includeAddress;
    BOOL _onlyEmailFormat;
    NSString *_prefix;
    NSString *_addressString;
    NSDataDetector *_phoneNumberDetector;
}

+ (id)displayStringForResult:(id)arg1 withPrefix:(id)arg2 withAddress:(id)arg3 includeAddress:(BOOL)arg4 onlyEmailFormat:(BOOL)arg5;
+ (id)displayStringForResult:(id)arg1 accountName:(id)arg2 prefix:(id)arg3 includeAddress:(BOOL)arg4 onlyEmailFormat:(BOOL)arg5;
- (void).cxx_destruct;
@property(retain) NSDataDetector *phoneNumberDetector; // @synthesize phoneNumberDetector=_phoneNumberDetector;
@property BOOL onlyEmailFormat; // @synthesize onlyEmailFormat=_onlyEmailFormat;
@property BOOL includeAddress; // @synthesize includeAddress=_includeAddress;
@property(copy) NSString *addressString; // @synthesize addressString=_addressString;
@property(copy) NSString *prefix; // @synthesize prefix=_prefix;
- (id)stringByCleaningString:(id)arg1;
- (BOOL)shouldDecorateString:(id)arg1 withAddress:(id)arg2;
- (id)stringByDecoratingString:(id)arg1 withAddress:(id)arg2 isPhoneNumber:(BOOL)arg3;
- (id)effectiveAddressForResult:(id)arg1 withAddressString:(id)arg2;
- (id)stringByDecoratingString:(id)arg1 withAddressString:(id)arg2 forResult:(id)arg3;
- (id)fallbackDisplayNameWithComponents:(id)arg1;
- (id)fallbackDisplayNameWithResult:(id)arg1;
- (id)matchingStringByCombiningNameComponents:(id)arg1;
- (id)fallbackNameWithResult:(id)arg1;
- (id)tokenizedNameWithDisplayName:(id)arg1;
- (id)matchingNameWithResult:(id)arg1;
- (id)baseNameForResult:(id)arg1;
- (id)displayStringForResult:(id)arg1 withAddress:(id)arg2;
- (id)displayStringForResult:(id)arg1 accountName:(id)arg2;
- (id)initWithPrefix:(id)arg1 includeAddress:(BOOL)arg2 onlyEmailFormat:(BOOL)arg3;
- (id)initAndIncludeAddress:(BOOL)arg1 onlyEmailFormat:(BOOL)arg2;

@end

