//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerOverviewViewController : UITableViewController
{
    id <_UIDocumentPickerOverviewDelegate> _weak_delegate;
    NSArray *_allPickers;
    NSString *_currentExtensionIdentifier;
    NSArray *_auxiliaryOptions;
}

@property(retain, nonatomic) NSArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
@property(retain, nonatomic) NSString *currentExtensionIdentifier; // @synthesize currentExtensionIdentifier=_currentExtensionIdentifier;
@property(retain, nonatomic) NSArray *allPickers; // @synthesize allPickers=_allPickers;
@property(nonatomic) __weak id <_UIDocumentPickerOverviewDelegate> delegate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2 auxiliaryOptions:(id)arg3 includeManagementItem:(_Bool)arg4;

@end
