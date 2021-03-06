//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AMSUIWebClientContext, AMSUIWebView, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebPageViewController : UIViewController
{
    BOOL _replacing;
    AMSUIWebView *_webView;
    NSURL *_URL;
    AMSUIWebClientContext *_context;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL replacing; // @synthesize replacing=_replacing;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) AMSUIWebView *webView; // @synthesize webView=_webView;
- (id)_downloadHTMLForRequest:(id)arg1;
- (void)_applyAppearance:(id)arg1;
- (id)loadRequest:(id)arg1;
- (void)applyModel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithContext:(id)arg1 dataProvider:(id)arg2;

@end

