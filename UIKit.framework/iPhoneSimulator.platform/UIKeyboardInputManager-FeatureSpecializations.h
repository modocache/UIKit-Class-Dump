//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardInputManager.h>

@interface UIKeyboardInputManager (FeatureSpecializations)
- (void)setLearnsCorrection:(BOOL)arg1;
- (void)configureKeyboard:(id)arg1 forAutocorrection:(id)arg2;
- (void)configureKeyboard:(id)arg1 forCandidates:(id)arg2;
- (void)configureInputModeSpecificFeatures:(id)arg1 withLayout:(id)arg2;
- (void)setInSplitKeyboardMode:(BOOL)arg1;
- (void)setInHardwareKeyboardMode:(BOOL)arg1;
- (void)setKeyboardEventsLagging:(BOOL)arg1;
- (BOOL)shouldExtendPriorWord;
- (void)setShift:(BOOL)arg1;
- (void)setShallowPrediction:(BOOL)arg1;
- (void)setAutoCorrects:(BOOL)arg1;
@end

