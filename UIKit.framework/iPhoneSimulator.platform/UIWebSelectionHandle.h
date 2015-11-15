//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UITouch, UIWebSelectionView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionHandle : UIView
{
    UITouch *_touch;
    UIImageView *_dragDotView;
    int _position;
    int _textPosition;
    UIWebSelectionView *_selectionView;
    struct CGSize _touchToCenterOffset;
    struct CGSize _centerToSelectionPointOffset;
}

@property(nonatomic) struct CGSize centerToSelectionPointOffset; // @synthesize centerToSelectionPointOffset=_centerToSelectionPointOffset;
@property(readonly, nonatomic) struct CGSize touchToCenterOffset; // @synthesize touchToCenterOffset=_touchToCenterOffset;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property(nonatomic) int position; // @synthesize position=_position;
- (struct CGPoint)suggestedHandlePositionOnRect:(struct CGRect)arg1;
- (void)snapToCornerOfRange:(id)arg1 atStart:(_Bool)arg2;
- (double)offsetInDirectionOfHandleFromFirstPoint:(struct CGPoint)arg1 toSecondPoint:(struct CGPoint)arg2;
- (struct CGPoint)applyOffsetInDirectionOfHandle:(double)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)applyCenterToSelectionPointOffset:(struct CGPoint)arg1;
- (struct CGPoint)applyTouchToCenterOffset:(struct CGPoint)arg1;
@property(nonatomic) int textPosition;
@property(readonly, nonatomic) _Bool hasTextPosition;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dropActiveTouch;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithPosition:(int)arg1 selectionView:(id)arg2;

@end

