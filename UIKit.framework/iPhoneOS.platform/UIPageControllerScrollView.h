//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView
{
    UIPageController *_pageController;
}

@property(nonatomic) UIPageController *pageController; // @synthesize pageController=_pageController;
- (int)_abuttedPagingEdges;
- (void)_scrollViewAnimationEnded;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillBeginDragging;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end

