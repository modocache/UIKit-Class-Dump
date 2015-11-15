//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBBackgroundView : UIView
{
    int _visualStyle;
    NSString *_layoutName;
    id _geometryCacheKey;
    struct CGRect _splitLeft;
    struct CGRect _splitRight;
}

- (void)displayLayer:(id)arg1;
- (id)cacheKey;
- (void)drawRect:(struct CGRect)arg1;
- (void)refreshStyleForKeyboard:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

