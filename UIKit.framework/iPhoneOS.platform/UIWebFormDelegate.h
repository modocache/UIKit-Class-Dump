//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebFormDelegate.h"

@class NSMutableDictionary, UIWebFormCompletionController;

__attribute__((visibility("hidden")))
@interface UIWebFormDelegate : NSObject <WebFormDelegate>
{
    UIWebFormCompletionController *_completionController;
    id <UIBrowserDocumentController> _controller;
    NSMutableDictionary *_editedForms;
}

- (void)autoFillWithElementValue;
- (void)acceptedAutoFillWord:(id)arg1;
- (BOOL)hasCurrentSuggestions;
- (CDStruct_421913e2)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (void)setController:(id)arg1;
- (void)frameLayoutHasChanged:(id)arg1;
- (void)formWillHide;
- (BOOL)formWasEdited;
- (void)dataSourceHasChangedForFrame:(id)arg1;
- (id)initWithController:(id)arg1;
- (BOOL)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
- (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
- (void)dealloc;

@end

