//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class HRWebView, NSString, RXPromise;

@interface HRFacebookLoginViewcontroller : NSViewController <WKNavigationDelegate, WKUIDelegate>
{
    RXPromise *_hasLoggedIn;
    HRWebView *_webView;
}

@property __weak HRWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) RXPromise *hasLoggedIn; // @synthesize hasLoggedIn=_hasLoggedIn;
- (void).cxx_destruct;
- (void)handleLoginInputFragment:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)cancelLogin:(id)arg1;
- (void)viewWillAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

