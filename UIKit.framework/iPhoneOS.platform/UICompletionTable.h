//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UICompletionTablePrivate;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UICompletionTablePrivate *_private;
}

+ (id)_shadowImage;
+ (id)_cellFont;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)_completionForRow:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(nonatomic) struct UIEdgeInsets scrollIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (void)setTopStrokeColor:(id)arg1;
- (void)reloadData;
@property(nonatomic) id delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

