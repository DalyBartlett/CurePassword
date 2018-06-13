#import <UIKit/UIKit.h>
#import "UIPullToReloadHeaderView.h"
#import "UIPullToReloadTableViewController.h"

@interface UIPullToReloadTableViewController (Curepasswordlibrary)
- (void)viewDidLoadCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)viewDidUnloadCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)scrollViewDidScroll:(UIScrollView *)scrollView curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)pullDownToReloadActionCurepasswordlibrary:(NSString *)curepasswordLibrary;

@end
