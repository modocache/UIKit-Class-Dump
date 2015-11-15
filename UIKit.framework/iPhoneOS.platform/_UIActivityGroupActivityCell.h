//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, _UIActivityFunctionImageView;

__attribute__((visibility("hidden")))
@interface _UIActivityGroupActivityCell : UICollectionViewCell
{
    _Bool _darkStyleOnLegacyApp;
    _UIActivityFunctionImageView *_activityImageView;
    UILabel *_activityLabel;
}

@property(nonatomic) _Bool darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) _UIActivityFunctionImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)reloadImage:(id)arg1;
- (void)setActivity:(id)arg1 withCustomTitle:(id)arg2;
- (void)prepareForReuse;
- (void)dealloc;

@end

