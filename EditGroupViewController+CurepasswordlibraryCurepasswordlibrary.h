#import <UIKit/UIKit.h>
#import "KdbGroup.h"
#import "ParentGroupPicker.h"
#import "IconPicker.h"
#import "NetworkActivityViewController.h"
#import "EditGroupViewController.h"
#import "CurePassword-Swift.h"
#import "EditGroupViewController+Curepasswordlibrary.h"

@interface EditGroupViewController (CurepasswordlibraryCurepasswordlibrary)
- (void)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)viewDidLoadCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)closeButtonClickedCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)viewWillAppear:(BOOL)animated curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)viewDidAppear:(BOOL)animated curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)viewWillDisappear:(BOOL)animated curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)supportedInterfaceOrientationsCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)shouldAutorotateCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)keyboardWillShow:(NSNotification*)note curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)keyboardWillHide:(NSNotification*)note curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)parentGroupSelected:(KdbGroup *)group curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)viewControllerCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)childGroupCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)iconSelected:(UIImage*)icon withId:(uint32_t)iconId curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)hideKeyboardCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)saveGroupCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)databaseSaveComplete:(id<Database>)database curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)database:(id<Database>)database saveFailedWithReason:(NSString *)error curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)alertView:(UIAlertView*)alertView clickedButtonAtIndex:(NSInteger)index curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)numberOfSectionsInTableView:(UITableView *)tableView curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableViewCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView willSelectRowAtIndexPath:(NSIndexPath *)indexPath curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)textFieldShouldReturn:(UITextField *)textField curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)textFieldShouldBeginEditing:(UITextField *)textField curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)textFieldDidBeginEditing:(UITextField *)textField curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)textFieldDidEndEditing:(UITextField *)textField curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)didReceiveMemoryWarningCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)viewDidUnloadCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)deallocCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;

@end
