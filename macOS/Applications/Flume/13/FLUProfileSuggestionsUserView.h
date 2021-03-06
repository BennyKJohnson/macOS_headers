//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUView.h"

@class FLUAvatarButton, FLUHoverButton, FLUImageView, FLUTextFieldLabel, FLUUser;

@interface FLUProfileSuggestionsUserView : FLUView
{
    FLUUser *_user;
    id <FLUProfileSuggestionsUserViewDelegate> _delegate;
    FLUHoverButton *_dismissButton;
    FLUHoverButton *_followButton;
    FLUAvatarButton *_avatarButton;
    FLUTextFieldLabel *_nameLabel;
    FLUImageView *_verifiedImageView;
    FLUTextFieldLabel *_usernameLabel;
}

@property(retain, nonatomic) FLUTextFieldLabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) FLUImageView *verifiedImageView; // @synthesize verifiedImageView=_verifiedImageView;
@property(retain, nonatomic) FLUTextFieldLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) FLUAvatarButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) FLUHoverButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) FLUHoverButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak id <FLUProfileSuggestionsUserViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FLUUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)refreshView;
- (void)updateFrames;
- (void)setFrame:(struct CGRect)arg1;
- (void)didPressFollowButton:(id)arg1;
- (void)didPressAvatarButton:(id)arg1;
- (void)didPressDismissButton:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)dealloc;
- (void)setupAccessibility;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

