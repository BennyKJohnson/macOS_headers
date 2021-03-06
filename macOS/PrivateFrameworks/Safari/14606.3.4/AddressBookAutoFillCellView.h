//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/ColorInvertingTableCellView.h>

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface AddressBookAutoFillCellView : ColorInvertingTableCellView
{
    NSString *_prompt;
    NSString *_contactName;
    NSTextField *_promptLabel;
    NSTextField *_contactNameLabel;
}

+ (struct CGSize)sizeWithPrompt:(id)arg1 contactName:(id)arg2;
@property(nonatomic) __weak NSTextField *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(nonatomic) __weak NSTextField *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

