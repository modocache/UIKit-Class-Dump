//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyboardCandidateExtendedInputTextFieldDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString, UIKeyboardCandidateExtendedInputView, UIKeyboardCandidateScrollViewController, UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateTopBarShadowView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateExtended : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIScrollViewDelegate, UIKeyboardCandidateExtendedInputTextFieldDelegate>
{
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    NSArray *_candidates;
    NSString *_inlineText;
    int _keyboardBehavior;
    NSArray *_sorts;
    unsigned int _selectedSortIndex;
    UIKeyboardCandidateExtendedInputView *_inputView;
    NSMutableDictionary *_scrollViewControllers;
    UIKeyboardCandidateScrollViewController *_scrollViewController;
    UIKeyboardCandidateSortSelectionBar *_sortSelectionBar;
    UIKeyboardCandidateTopBarShadowView *_topBarShadowView;
    BOOL _keyboardHidden;
    BOOL _animating;
}

@property(nonatomic) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) BOOL keyboardHidden; // @synthesize keyboardHidden=_keyboardHidden;
@property(retain, nonatomic) UIKeyboardCandidateTopBarShadowView *topBarShadowView; // @synthesize topBarShadowView=_topBarShadowView;
@property(retain, nonatomic) UIKeyboardCandidateSortSelectionBar *sortSelectionBar; // @synthesize sortSelectionBar=_sortSelectionBar;
@property(retain, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(retain, nonatomic) UIKeyboardCandidateExtendedInputView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) unsigned int selectedSortIndex; // @synthesize selectedSortIndex=_selectedSortIndex;
@property(retain, nonatomic) NSArray *sorts; // @synthesize sorts=_sorts;
@property(nonatomic) int keyboardBehavior; // @synthesize keyboardBehavior=_keyboardBehavior;
@property(copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property(readonly, nonatomic) NSMutableDictionary *scrollViewControllers; // @synthesize scrollViewControllers=_scrollViewControllers;
@property(readonly, nonatomic) id selectedSort;
- (void)statusBarFrameWillChangeNotification:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (void)configureKeyboard:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (unsigned int)count;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)setSelectedCandidateIndex:(unsigned int)arg1;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)inputTextFieldCaretDidStartBlinking:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sortSelectionBarAction:(id)arg1;
- (void)closeButtonAction;
- (void)selectCandidate:(id)arg1;
- (void)orderOutWithAnimation:(BOOL)arg1 simultaneousAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 targetHeight:(float)arg4;
- (void)animateInWithInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 inView:(id)arg3;
- (int)textEffectsVisibilityLevel;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)maximizeKeyboard;
- (void)minimizeKeyboard;
- (void)layout;
- (void)layoutSortSelectionBarWithFrame:(struct CGRect)arg1;
- (void)layoutInputViewWithFrame:(struct CGRect)arg1;
- (void)layoutCandidatesWithFrame:(struct CGRect)arg1;
- (struct CGRect)idealFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyboardBehavior:(int)arg2;

@end

