/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABAccountsAndGroupDataSource, <ABStyleProvider>;



@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate>
{
    ABAccountsAndGroupDataSource *_dataSource;
    BOOL _needsReload;
    BOOL _tableViewNeedsReloadAfterResume;
    <ABStyleProvider> *_styleProvider;
}

@property BOOL hidesSearchableStores;
@property(readonly) UITableView *tableView;
@property(retain) ABModel *model;
@property(retain) <ABStyleProvider> *styleProvider;
@property(readonly) ABAccountsAndGroupDataSource *dataSource;


- (void)cancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (id)model;
- (id)dataSource;
- (id)dataSource;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)accessibilityLargeTextDidChange;
- (void)dealloc;
- (void)applicationDidResume;
- (void)reloadData;
- (void)_applyAccessibilityFontChanges;
- (BOOL)preservesSelection;
- (id)copyMembersViewControllerWithModel:(id)arg1;
- (id)copyServerSearchViewControllerWithModel:(id)arg1;
- (void)_showMembersWithModel:(id)arg1 animate:(BOOL)arg2 loadState:(BOOL)arg3;
- (BOOL)hidesSearchableStores;
- (void)showMembersOfGroup:(void*)arg1 animate:(BOOL)arg2;
- (void)showMembersOfGroupWrapper:(id)arg1 animate:(BOOL)arg2;
- (void)_refreshIfNeeded;
- (void)reselectLastSelectedCellIfNeeded;
- (void)updateNavigationButtons;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldShowGroups;
- (NSInteger)abViewControllerType;
- (void)modelDatabaseChange:(id)arg1;
- (void)setHidesSearchableStores:(BOOL)arg1;
- (void)showMembersOfGroupWrapper:(id)arg1 animate:(BOOL)arg2 loadState:(BOOL)arg3;
- (void)setModel:(id)arg1;
- (id)initWithModel:(id)arg1;
- (void)iTunesSyncRequestedStart;
- (void)iTunesSyncHasCompleted:(NSInteger)arg1;
- (id)styleProvider;

@end