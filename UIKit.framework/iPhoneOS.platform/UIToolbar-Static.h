//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@interface UIToolbar (Static)
- (double)_edgeMarginForBorderedItem:(_Bool)arg1 isText:(_Bool)arg2;
- (void)_updateItemsForNewFrame:(id)arg1;
- (void)_finishButtonAnimation:(int)arg1 forButton:(int)arg2;
- (id)_currentButtons;
- (void)_showButtons:(int *)arg1 withCount:(int)arg2 group:(int)arg3 withDuration:(double)arg4 adjustPositions:(_Bool)arg5 skipTag:(int)arg6;
- (id)_buttonWithDescription:(id)arg1;
- (void)_adjustButtonPressed:(id)arg1;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (id)_descriptionForTag:(int)arg1;
@end

