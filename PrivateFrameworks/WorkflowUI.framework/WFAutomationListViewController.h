/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFAutomationListViewController : UITableViewController <HMHomeDelegate, HUTriggerEditorDelegate, UITableViewDataSource, UITableViewDelegate, WFCreateAutomationCoordinatorDelegate, WFDatabaseResultObserver, WFEditAutomationCoordinatorDelegate, WFHomeManagerEventObserver> {
    WFCreateAutomationCoordinator * _createAutomationCoordinator;
    WFDatabase * _database;
    WFEditAutomationCoordinator * _editAutomationCoordinator;
    WFHomeManager * _homeManager;
    WFDatabaseResult * _personalAutomationsDatabaseResult;
    NSArray * _sortedPersonalAutomations;
    UIView * _subheadWrapperView;
    NSArray * _tableSections;
    WFTriggerManager * _triggerManager;
}

@property (nonatomic, retain) WFCreateAutomationCoordinator *createAutomationCoordinator;
@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFEditAutomationCoordinator *editAutomationCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFHomeManager *homeManager;
@property (nonatomic, readonly) WFDatabaseResult *personalAutomationsDatabaseResult;
@property (nonatomic, copy) NSArray *sortedPersonalAutomations;
@property (nonatomic, readonly) UIView *subheadWrapperView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tableSections;
@property (nonatomic, retain) WFTriggerManager *triggerManager;

- (void).cxx_destruct;
- (void)buildTableSections;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)createAutomationCoordinator;
- (void)createAutomationCoordinatorDidCancel:(id)arg1;
- (void)createAutomationCoordinatorDidFinish:(id)arg1;
- (id)database;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)dealloc;
- (id)editAutomationCoordinator;
- (void)editAutomationCoordinatorDidCancel:(id)arg1;
- (void)editAutomationCoordinatorDidFinish:(id)arg1;
- (void)flashAutomationForTriggerID:(id)arg1;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)homeDidUpdateName:(id)arg1;
- (id)homeManager;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)personalAutomationsDatabaseResult;
- (void)setCreateAutomationCoordinator:(id)arg1;
- (void)setEditAutomationCoordinator:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setSortedPersonalAutomations:(id)arg1;
- (void)setTableSections:(id)arg1;
- (void)setTriggerManager:(id)arg1;
- (void)showAddNewAutomationButton:(bool)arg1;
- (bool)showEditViewForItem:(id)arg1;
- (bool)showHomeAutomationEditorForTriggerItem:(id)arg1;
- (bool)showPersonalAutomationEditorForConfiguredTrigger:(id)arg1;
- (id)sortedPersonalAutomations;
- (void)startCreateNewAutomation:(id)arg1;
- (void)startCreateNewAutomationFlowAtStep:(unsigned long long)arg1;
- (void)startCreateNewHomeAutomation:(id)arg1;
- (void)startCreateNewPersonalAutomation:(id)arg1;
- (id)subheadWrapperView;
- (id)tableSections;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (id)triggerManager;
- (void)updateSubheadLayoutMargins;
- (void)updateTableViewLayoutMargins;
- (void)updateUI;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;

@end
