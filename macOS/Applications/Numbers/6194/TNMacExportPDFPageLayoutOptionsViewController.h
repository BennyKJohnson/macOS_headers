//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSApplication/TMAExportOptionsViewController.h>

@class NSMatrix;

@interface TNMacExportPDFPageLayoutOptionsViewController : TMAExportOptionsViewController
{
    NSMatrix *_pageLayoutMatrix;
}

+ (id)viewControllerWithDocument:(id)arg1;
@property(retain, nonatomic) NSMatrix *pageLayoutMatrix; // @synthesize pageLayoutMatrix=_pageLayoutMatrix;
- (void).cxx_destruct;
- (id)options;
- (void)loadView;
- (id)initWithDocument:(id)arg1 nibName:(id)arg2 bundle:(id)arg3;
- (id)initWithDocument:(id)arg1;

@end

