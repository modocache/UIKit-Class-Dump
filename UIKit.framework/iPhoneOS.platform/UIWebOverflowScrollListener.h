//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate>
{
    UIWebOverflowScrollView *_scrollView;
}

- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_didCompleteScrolling;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)initWithScrollView:(id)arg1;

@end

