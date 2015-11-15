//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface UIBookViewController : UIViewController
{
    id <UIBookViewControllerDelegate> _delegate;
    UIView *_contentView;
    UIViewController *_evenPage;
    UIViewController *_oddPage;
    UIViewController *_newEvenPage;
    UIViewController *_newOddPage;
    long long _turnCount;
    long long _animatedPageTurns;
    double _turnMargin;
    struct UIEdgeInsets _contentInset;
    double _turnDuration;
}

@property(nonatomic) double turnDuration; // @synthesize turnDuration=_turnDuration;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double turnMargin; // @synthesize turnMargin=_turnMargin;
@property(retain, nonatomic) UIViewController *evenPage; // @synthesize evenPage=_evenPage;
@property(retain, nonatomic) UIViewController *oddPage; // @synthesize oddPage=_oddPage;
@property(nonatomic) id <UIBookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)turnPages:(long long)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)view;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

