#import <Foundation/Foundation.h>
#import "kpass.h"
#import "Database.h"
#import "KdbEntry.h"
#import "KdbGroup.h"
#import "KdbEntry.h"

@interface KdbEntry (Curepasswordlibrary)
- (void)initWithEntry:(kpass_entry*)entry curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)initWithParent:(KdbGroup*)parentGroup withTitle:(NSString*)title withIcon:(uint32_t)icon withUsername:(NSString*)username withPassword:(NSString*)password withUrl:(NSString*)url withNotes:(NSString*)notes withExpires:(NSDate*)expires forDatabase:(id<Database>)db curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)kpEntryCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)entryNameCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)entryIconCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)entryUrlCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)entryUsernameCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)entryPasswordCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)entryNotesCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)createdDateCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)modifiedDateCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)accessDateCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)expireDateCurepasswordlibrary:(NSString *)curepasswordLibrary;
- (void)updateWithParent:(KdbGroup*)parentGroup withTitle:(NSString*)title withIcon:(uint32_t)icon withUsername:(NSString*)username withPassword:(NSString*)password withUrl:(NSString*)url withNotes:(NSString*)notes withExpires:(NSDate*)expires curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)deallocCurepasswordlibrary:(NSString *)curepasswordLibrary;

@end
