//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextSelection.h"

@class UIResponder<UITextSelection>, UITextInteractionAssistant, UITextSelectionView, UIView<UITextSelectingContent>;

@protocol UITextSelectingContainer <UITextSelection>
@property(readonly, nonatomic) UIResponder<UITextSelection> *textDocument;
@property(readonly, nonatomic) UIView<UITextSelectingContent> *content;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property(readonly, nonatomic) UITextSelectionView *selectionView;
- (struct CGRect)selectionClipRect;
- (void)endSelectionChange;
- (void)beginSelectionChange;

@optional
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)cancelInteractionWithLink;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (BOOL)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint)arg1;
- (BOOL)mightHaveLinks;
- (BOOL)playsNicelyWithGestures;
@end

