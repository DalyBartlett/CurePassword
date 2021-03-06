#import <UIKit/UIKit.h>
#import "Database.h"
#import "NetworkActivityViewController.h"
#import "EditDatabaseViewController.h"
#import "CurePassword-Swift.h"

@interface EditDatabaseViewController (Curepasswordlibrary)
- (void)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)viewDidLoadCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)viewWillAppear:(BOOL)animated curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)viewWillDisappear:(BOOL)animated curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)keyboardWillShow:(NSNotification*)note curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)keyboardWillHide:(NSNotification*)note curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)supportedInterfaceOrientationsCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)shouldAutorotateCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)saveButtonClickedCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)showError:(NSString*)message curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)hideKeyboardCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)database:(id<Database>)database saveFailedWithReason:(NSString*)error curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)databaseSaveComplete:(id<Database>)db curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)database:(id<Database>)db syncFailedWithReason:(NSString*)error curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)databaseSyncComplete:(id<Database>)db curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)databaseSyncWouldOverwriteChanges:(id<Database>)db curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)databaseWasDeleted:(id<Database>)db curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)actionSheet:(UIActionSheet *)actionSheet didDismissWithButtonIndex:(NSInteger)buttonIndex curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)numberOfSectionsInTableView:(UITableView *)tableView curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableViewCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView willSelectRowAtIndexPath:(NSIndexPath *)indexPath curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)textFieldShouldReturn:(UITextField *)textField curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)textFieldShouldBeginEditing:(UITextField *)textField curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)textFieldDidBeginEditing:(UITextField *)textField curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)textFieldDidEndEditing:(UITextField *)textField curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)didReceiveMemoryWarningCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)viewDidUnloadCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)deallocCurepasswordlibrary:(NSString *)curepasswordLibrary;

@end
