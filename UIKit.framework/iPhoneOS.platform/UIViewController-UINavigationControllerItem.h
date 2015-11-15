//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UINavigationController, UINavigationItem;

@interface UIViewController (UINavigationControllerItem)
- (double)_topBarHeight;
- (void)_setSuppressesBottomBar:(_Bool)arg1;
- (_Bool)_suppressesBottomBar;
@property(nonatomic) _Bool hidesBottomBarWhenPushed;
@property(readonly, nonatomic) UINavigationController *navigationController;
- (_Bool)canHandleSnapbackIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)_toggleEditing:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1;
- (_Bool)isEditing;
- (id)editButtonItem;
@property(readonly, nonatomic) UINavigationItem *navigationItem;
@end

